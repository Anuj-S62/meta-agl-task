custom layer for test app


To run the layer

1. Downlaod Agl software and Initialise the build environment:
[here](https://docs.automotivelinux.org)

2. Run the script: 
```bash
$ cd AGL/master
$ source meta-agl/scripts/aglsetup.sh -m qemux86-64 -b build-gsoc-task agl-demo agl-devel 
```


3. Enable meta-agl-task: 
```shell
$ cd AGL/master/build-gsoc-task 
$ bitbake-layers add-layer "path to meta-agl-task layer" 
```

4. Add agltask app to meta-agl-demo/recipes-platform/images/agl-demo-platfor.bb
```shell
AGL_APPS_INSTALL += " \
    dashboard \
    hvac \
    settings \
    agltask \
"

```

5. Build the image: 
```shell
$ cd AGL/master/build-gsoc-task
$ source agl-init-build-env
$ bitbake agltask
$ bitbake agl-demo-platform
```


6. Deploy the image: 
```shell
$ cd AGL/master/build-gsoc-task 
$ runqemu kvm serialstdio slirp publicvnc 
```


7. Deploy the graphics: \
  Open the VNC client \
  Enter the server address as localhost:0

<img width="1440" alt="Screenshot 2024-03-27 at 11 32 19 AM" src="https://github.com/Anuj-S62/meta-agl-task/assets/96018337/dee1fcbd-2dc1-456c-9312-84300fbb342d">

<img width="1440" alt="Screenshot 2024-03-27 at 11 32 31 AM" src="https://github.com/Anuj-S62/meta-agl-task/assets/96018337/bd4ba0f5-a3dc-4537-b661-eeb2eb4ebbc4">

