MeDev@LAPTOP-HEKJMGL9 MINGW64 ~
$ git --version
git version 2.34.1.windows.1

MeDev@LAPTOP-HEKJMGL9 MINGW64 ~
$ ssh-keygen -t rsa -b 4096 -C "devdashello@gmail.com" //ssh key generate(after enter press enter key 2 times)


Generating public/private rsa key pair.
Enter file in which to save the key (/c/Users/MeDev/.ssh/id_rsa): Created directory '/c/Users/MeDev/.ssh'.
Enter passphrase (empty for no passphrase):
Enter same passphrase again:
Your identification has been saved in /c/Users/MeDev/.ssh/id_rsa
Your public key has been saved in /c/Users/MeDev/.ssh/id_rsa.pub
The key fingerprint is:
SHA256:e07v55BkRea5NTSCtb5LWZG52Fy/st5CoaK8BEhZBGo devdashello@gmail.com
The key's randomart image is:
+---[RSA 4096]----+
|   .oo      oooo |
|  . o      . ++.+|
| E o         .+=o|
|. . .       .o+o*|
|   . .  S   +oo=.|
|      .  o + o+ .|
|      ..o + += . |
|      .o + ..o*  |
|       .. ..+*o. |
+----[SHA256]-----+

MeDev@LAPTOP-HEKJMGL9 MINGW64 ~
$ ls ~/.ssh
id_rsa  id_rsa.pub //id_rsa(local) id_rsa.pub(local to global connect)

MeDev@LAPTOP-HEKJMGL9 MINGW64 ~
$ evel $(ssh-agent -s)
bash: evel: command not found

MeDev@LAPTOP-HEKJMGL9 MINGW64 ~
$ eval $(ssh-agent -s)
Agent pid 60

MeDev@LAPTOP-HEKJMGL9 MINGW64 ~
$ ssh-add -k ~/.ssh/id_rsa
Identity added: /c/Users/MeDev/.ssh/id_rsa (devdashello@gmail.com)

MeDev@LAPTOP-HEKJMGL9 MINGW64 ~
$ cat ~/.ssh/id_rsa.pub
ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAACAQDE0kyv0Kai1NXLQxfHTTK1tTec63lOpvylpV/iIu04Gy4OdKzA/qHv0tiqWgOs0ZBMOYNWHwBWB4GHjnWzAXNCbCi66cJXCsQBvdHvc1QfYPzsDUx69++9YG25BgwjRT2BVaE9n80ZGFYZyXHF/BajwI2/k3FzJ2BzlOpUR4C+EE60A+A0je7PoGE5YmjOnCQFqx9qLIPrMKBN5VY60zD3rpaqsgt8znVrD6Vt+gceoG13plPzmdXKtxQv/0nilCqVawfcxW0PYUetIHyE1DYn3ZryZ/NY69gFw20/yph7W237BufifWWlMMnmJUc80a0jDUWKmSdUk3xrx6Qm6ge88c5nKRLg1IDN0EftP+ss9Tb9SKBvceQCa80Mv1Z8EW0f9HZIatQlTz/1F/YozvAWLeuIc0k6iDJnEsv2p3siiNXkOUaLkoVCKjwkyTCUQr48SAwY6K3vNles+PcwG7jLzJ1IuMXYAwg2ieus7D8EcWzg+h662SohLVy6bA3N+PxfLzlzGhhFRWk0v9hSAnGBmMIz75eNiAMqSFz5qc/LCZNKknS2LxEG7r372QUS1UvGk3MfcEodf3Pql5k9YQ2h3zBMI3OKJiwcbfGC9GhZvychpxlrS1M3wOWKRO6ID55uSARl42ORWjkB53Ya2t12WNc7Y3oQH9ZPvxMmOcg2UQ== devdashello@gmail.com

MeDev@LAPTOP-HEKJMGL9 MINGW64 ~
$ ^C

MeDev@LAPTOP-HEKJMGL9 MINGW64 ~
$ ls -al ~/.ssh
total 21
drwxr-xr-x 1 MeDev 197609    0 Mar 28 03:29 ./
drwxr-xr-x 1 MeDev 197609    0 Mar 28 03:31 ../
-rw-r--r-- 1 MeDev 197609 3389 Mar 28 03:12 id_rsa //local ssh id
-rw-r--r-- 1 MeDev 197609  747 Mar 28 03:12 id_rsa.pub //for local to server connect(heroku)
-rw-r--r-- 1 MeDev 197609  187 Mar 28 03:29 known_hosts









Microsoft Windows [Version 10.0.19044.1586]
(c) Microsoft Corporation. All rights reserved.

C:\Users\MeDev\OneDrive\Desktop\DevDas\JavaScript\Mern\ExpressJs>heroku login
 »   Warning: heroku update available from 7.53.0 to 7.60.0.
heroku: Press any key to open up the browser to login or q to exit: 
Opening browser to https://cli-auth.heroku.com/auth/cli/browser/e47aa2ec-a168-4ba6-b822-be36c42e81cd?requestor=SFMyNTY.g2gDbQAAAA4xMTUuMTg3LjUwLjE1OG4GAKjMbs1_AWIAAVGA.uMJrJlz7pP2DPYM_yCtsPgLqOBsqAiHUXamFCMphJt4
Logging in... done
Logged in as devdashello@gmail.com

C:\Users\MeDev\OneDrive\Desktop\DevDas\JavaScript\Mern\ExpressJs>heroku login
 »   Warning: heroku update available from 7.53.0 to 7.60.0.
heroku: Press any key to open up the browser to login or q to exit: 
Opening browser to https://cli-auth.heroku.com/auth/cli/browser/d80d78c7-7ba8-4bbe-a16b-6324fd5ed3cb?requestor=SFMyNTY.g2gDbQAAAA4xMTUuMTg3LjUwLjE1OG4GAKBucM1_AWIAAVGA.TQuffApFeu9OBxzvIzO2DisP23uHBCm7LmmPiq2Iw_4
Logging in... done
Logged in as devdashello@gmail.com

C:\Users\MeDev\OneDrive\Desktop\DevDas\JavaScript\Mern\ExpressJs>heroku keys:add
 »   Warning: heroku update available from 7.53.0 to 7.60.0.
Found an SSH public key at C:\Users\MeDev\.ssh\id_rsa.pub
? Would you like to upload it to Heroku? Yes
Uploading C:\Users\MeDev\.ssh\id_rsa.pub SSH key... done

C:\Users\MeDev\OneDrive\Desktop\DevDas\JavaScript\Mern\ExpressJs>heroku create weatherapp
 »   Warning: heroku update available from 7.53.0 to 7.60.0.
Creating ⬢ weatherapp... !
 !    Name weatherapp is already taken

C:\Users\MeDev\OneDrive\Desktop\DevDas\JavaScript\Mern\ExpressJs>heroku create weatherappwithnodejs
 »   Warning: heroku update available from 7.53.0 to 7.60.0.
Creating ⬢ weatherappwithnodejs... done
https://weatherappwithnodejs.herokuapp.com/ | https://git.heroku.com/weatherappwithnodejs.git

C:\Users\MeDev\OneDrive\Desktop\DevDas\JavaScript\Mern\ExpressJs>git push heroku master
Enumerating objects: 38, done.
Counting objects: 100% (38/38), done.
Delta compression using up to 2 threads
Compressing objects: 100% (35/35), done.
Writing objects: 100% (38/38), 234.48 KiB | 3.40 MiB/s, done.
Total 38 (delta 6), reused 0 (delta 0), pack-reused 0
remote: Compressing source files... done.
remote: Building source:
remote: 
remote: -----> Building on the Heroku-20 stack
remote: -----> Determining which buildpack to use for this app
remote: -----> Node.js app detected
remote:        
remote: -----> Creating runtime environment
remote:
remote:        NPM_CONFIG_LOGLEVEL=error
remote:        NODE_VERBOSE=false
remote:        NODE_ENV=production
remote:        NODE_MODULES_CACHE=true
remote:
remote: -----> Installing binaries
remote:        engines.node (package.json):  unspecified
remote:        engines.npm (package.json):   unspecified (use default)
remote:
remote:        Resolving node version 16.x...
remote:        Downloading and installing node 16.14.2...
remote:        Using default npm version: 8.5.0
remote:        
remote: -----> Installing dependencies
remote:        Installing node modules
remote:        
remote:        added 59 packages, and audited 60 packages in 1s
remote:
remote:        2 packages are looking for funding
remote:          run `npm fund` for details
remote:
remote:        found 0 vulnerabilities
remote:
remote: -----> Build
remote:        
remote: -----> Caching build
remote:        - node_modules
remote:        
remote: -----> Pruning devDependencies
remote:
remote:        up to date, audited 60 packages in 421ms
remote:
remote:        2 packages are looking for funding
remote:          run `npm fund` for details
remote:
remote:        found 0 vulnerabilities
remote:
remote: -----> Build succeeded!
remote: -----> Discovering process types
remote:        Procfile declares types     -> (none)
remote:        Default types for buildpack -> web
remote:
remote: -----> Compressing...
remote:        Done: 33.3M
remote: -----> Launching...
remote:        Released v3
remote:        https://weatherappwithnodejs.herokuapp.com/ deployed to Heroku
remote:
remote: Verifying deploy... done.
To https://git.heroku.com/weatherappwithnodejs.git
 * [new branch]      master -> master

C:\Users\MeDev\OneDrive\Desktop\DevDas\JavaScript\Mern\ExpressJs>  
