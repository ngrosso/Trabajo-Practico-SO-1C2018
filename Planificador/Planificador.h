#ifndef PLANIFICADOR_H_
#define PLANIFICADOR_H_
#include <string.h>
#include <signal.h>
#include <netdb.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <commons/config.h>
#include <Funciones/configs.h>
#include <pthread.h>
#include <Funciones/logs.h>

char* server_ip;
int server_puerto;
char* coordinador_ip;
int coordinador_puerto;

void consola();
void iniciarConsola();
int crearServidor(void);
void sigchld_handler(int s);
void sigchld_handler(int s);
int servidorConSelect(void);
int crearCliente(void);
void setearValores(t_config * archivoConfig);

#endif /* PLANIFICADOR_H_ */
