#ifndef CLIENTE_H_
#define CLIENTE_H_
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Para malloc
#include <netdb.h> // Para getaddrinfo
#include <unistd.h> // Para close
#include <signal.h>
#include <errno.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <openssl/md5.h> // Para calcular el MD5
#include <sys/socket.h> // Para crear sockets, enviar, recibir, etc
#include <sys/types.h>
#include <sys/wait.h>
#include <readline/readline.h> // Para usar readline
#include <commons/log.h>
#include <commons/config.h>
#include <commons/collections/list.h>



char* server_ip;
int server_puerto;
t_log * logger;

void crearLogger(char* logPath,  char * logMemoNombreArch, bool consolaActiva);
void configure_logger();
int crearServidor(void);
void leerArchivoDeConfiguracion(char * configPath);
void leerConfig(char * configPath);
void sigchld_handler(int s);
int servidorConSelect(void);
int verificarExistenciaDeArchivo(char* rutaArchivoConfig);
void setearValores(t_config * archivoConfig);


#endif /* CLIENTE_H_ */
