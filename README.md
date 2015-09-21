# face_recognition
Este programa es para el reconocimiento de rostros, creado por Pouyan Ziafati de la universidad de Luxemburgo, este progrma lo he utilizado para el reconocimiento de rostros de nuestro robot, su programa se basa en 3 archivos en c++, sin embargo tiene que lanzar un topico desde tu terminal lo que provoca que no pueda ser autosuficiente el programa en si, para esto he creado el archivo fr_order.cpp que lo que hace es poder mandar un mensaje al cliente para poder inicializar sin la necesidad de usar la terminal de ubuntu.

Para poder compilar los programas solo es necesario descargar la carpeta face_recognition la cual se pone dentro del tu espacio de trabajo y compilarlo con el comando "catkin_make"

Lo que se requiere para que el progrma funcione adecuadamente es, en primer lugar usar una camara por ip o mandar un topico con la imagen solicitada por el programa del cliente. Una vez obtenida la imagen es solo cuestion de lanzar el launch con el siguiente comando "roslaunch face_recognition reconocimiento.launch" con el cual lanzaras los tres archivos necesarios para el reconocimiento de rostros. 
