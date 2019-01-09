#include "ServerThread.h"

using namespace std;

// entry point for all threads
char echo_buffer[100 *1024];

void getExecDir(char*dir) {
  char* filename = nullptr;
  if (readlink("/proc/self/exe", dir, 1024) < 0) {
    dir[0] = '\0';
    return;
  }

  filename = strrchr(dir, '/');
  if (filename == nullptr) {
    dir[0] = '\0';
    return;
  }
  ++filename;
  *filename = '\0';
  sprintf(dir + strlen(dir), "%s", "index.html");
  return;
}

void* run(void* obj) {
  ((ServerThread*) obj)->Run();
  // when Run() finishes, mark for termination
  ((ServerThread*) obj)->MarkFT();
}

bool getExt(const char* path, char* ext) {
  int l = strlen(path), i = l;
  while (i > 0 && path[--i] != '.' && path[i] != '/');
  if (i == 0 || path[i] == '/') return false;
  for (int j = 0; i < l; ext[j++] = path[++i]);
  return true;
}

int getHeader(char *header, const char *buffer, int rd) {
  int hl = 0;
  int i = 0;
  for (; hl < rd && strcmp(term, buffer + hl); hl++) {
    for (i = 0; i < 4; i++)
      if (term[i] != buffer[hl + i]) break;
    if (i == 4) break;
    header[hl] = buffer[hl];
  }
  header[hl] = '\0';
  return hl;
}
///////////////////////////////////////////////////////////

ServerThread::ServerThread(int socket) {
  this->socket = socket;
  marked = serving = false;
}

ServerThread::~ServerThread() {
}
// start serving in a separate thread

void ServerThread::Serve() {
  pthread_create(&tid, NULL, run, this);
  start = time(NULL);
}
// terminate the thread and close the socket

bool ServerThread::Terminate(bool force) {
  if (serving&&!force)return false;
  pthread_cancel(tid);
  close(socket);
  return true;
}
// run in current thread

void ServerThread::Run() {
  int rd, hl;
  while (1) {
    serving = false;
    rd = read(socket, buffer, BUFFERLENGTH - 1);
    if (rd <= 0) {
      // client disconnected mysteriously
      Terminate(true);
      break; // precautionary
    }
    // parse the header
    serving = true;
    char method[8], path[261], version[8], ext[5];
    strcpy(path, WORKDIR);
    // getExecDir(path);
    hl = getHeader(header, buffer, rd);
    sscanf(header, "%s %s %s", method, path + WDLEN, version);
    // handle default file name
    // if (!getExt(path, ext))strcat(path, "/index.html");
    getExecDir(path);

    // handle the request
    if (!strcmp("GET", method) || !strcmp("PUT", method)) {

      if (strlen(echo_buffer) > 0) {
        int size = strlen(echo_buffer);
        sprintf(buffer, "%s%d\r\n\r\n", "HTTP/1.1 200 OK\r\nContent-Length: ", size);
        send(socket, buffer, strlen(buffer), 0);
        send(socket, echo_buffer, size, 0);
      } else {
        // try to open the requested file
        FILE * file = fopen(path, "r");
        if (file) {
          fseek(file, 0, SEEK_END);
          int size = ftell(file);
          fseek(file, 0, 0);
          // send 200
          sprintf(buffer, "%s%d\r\n\r\n", "HTTP/1.1 200 OK\r\nContent-Length: ", size);
          send(socket, buffer, strlen(buffer), 0);
          cout << "200 " << path << endl;
          do {
            rd = fread(buffer, sizeof (char), BUFFERLENGTH, file);
            send(socket, buffer, rd, 0);
          } while (rd > 0);
          fclose(file);
        } else {
          // send 404
          sprintf(buffer, "%s\r\n\r\n", "HTTP/1.1 404 Not Found");
          send(socket, buffer, strlen(buffer), 0);
          cout << "404 " << path << endl;
        }
      }
      serving = false;
      Terminate(true);
    } else if (!strcmp("POST", method)) {
      if (fopen(path, "r") > 0) {
        sprintf(buffer, "%s\r\n\r\n", "HTTP/1.1 403 Forbidden");
        send(socket, buffer, strlen(buffer), 0);
        cout << "402 " << path << endl;
        continue;
      }
      FILE *file = fopen(path, "w+");
      if (file) {
        // send 200
        sprintf(buffer, "%s\r\n\r\n", "HTTP/1.1 200 OK");
        send(socket, buffer, strlen(buffer), 0);
        cout << "200 " << path << endl;
        // if client sent data after the header
        if (rd - hl > 4)
          fwrite(buffer + hl + 4, sizeof (char), rd - hl - 4, file);
        rd = read(socket, buffer, BUFFERLENGTH - 1);
        while (rd > 0) {
          fwrite(buffer, sizeof (char), rd, file);
          rd = read(socket, buffer, BUFFERLENGTH - 1);
          // TODO: implement blocks or read content length
          if (rd < BUFFERLENGTH - 1 || !strcmp(buffer - 4, term))
            break;
        }
        fclose(file);
      } else {
        sprintf(buffer, "%s\r\n\r\n", "HTTP/1.1 500 Internal Server Error");
        send(socket, buffer, strlen(buffer), 0);
        cout << "500 " << path << endl;
      }
    }
  }
}
