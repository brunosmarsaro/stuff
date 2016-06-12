#!/bin/bash
echo "Would you like to install Cuda 7.5? [y | n]"
read _cu;
if [ $_cu == "y" ];
then
	sudo apt-get install nvidia-361-updates -y
	sudo apt-get install nvidia-361-updates-dev -y
	sudo apt-get install nvidia-prime -y 
	sudo apt-get install nvidia-profiler -y
	sudo apt-get install nvidia-settings  -y
	sudo apt-get install nvidia-visual-profiler -y
	
	sudo apt-get install libcuda1-361-updates -y
	sudo apt-get install libcudart7.5:amd64 -y
	sudo apt-get install nvidia-cuda-dev -y
	sudo apt-get install nvidia-cuda-doc -y
	sudo apt-get install nvidia-cuda-gdb -y
	sudo apt-get install nvidia-cuda-toolkit -y

	sudo apt-get install nvidia-opencl-dev:amd64 -y
	sudo apt-get install nvidia-opencl-icd-361-updates -y
fi

# Adding Python Deep Learning Libs!
echo "Would you like to install pip3? [y | n]";
read _p;
if [ $_p == "y" ];
then
	sudo apt-get install python3-pip -y
    sudo apt-get install python3-dev -y
	
	echo "Would you like to install TensorFlow 0.9? [y | n]";
	read _libtf;
	if [ $_libtf == "y" ];
	then
		export TF_BINARY_URL=https://storage.googleapis.com/tensorflow/linux/gpu/tensorflow-0.9.0rc0-cp35-cp35m-linux_x86_64.whl
		sudo pip3 install --upgrade $TF_BINARY_URL
	fi
	
	echo "Would you like to install Theano? [y | n]";
	read _libth;
	if [ $_libth == "y" ];
	then 
		sudo pip3 install theano
	fi
fi
