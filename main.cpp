#include <iostream>
#include<stdlib.h>
#include <string.h>
using namespace std;

int main(){
   string github = "@github.com/";
   string giti = ".git";
   string git = "git remote set-url origin https://";
   string branch;
   string repo;
   string username;
   string token;
   std::cout << "Enter the branch to upload: ";
   cin >> branch;
   printf("Enter Username: ");
   cin >> username;
   printf("Enter repo name: ");
   cin >> repo;
   printf("Enter GitHub Token: ");
   cin >> token;
   string cmd1 = "git remote set-url origin https://" + token+ "@github.com/" + username + "/" + repo + "/.git";
   string cmd2 = "git remote add origin git@github.com:" + username + "/" + repo + ".git";
   string cmd3 = "git push origin HEAD:{branch}";
   const char *command = cmd1.c_str();
   const char *command2 = cmd2.c_str();
   const char *command3 = cmd3.c_str();
   // command = str('git remote set-url origin https://' + token + '@github.com' + '/'+ username + '/' + repo + '.git')
   // command2 = 'git remote add origin git@github.com:' + username + '/' + repo + '.git'
   // push = str(f'git push origin HEAD:{branch}')
   system(command);
   system(command2);
   system(command3);
   return 0;
}

