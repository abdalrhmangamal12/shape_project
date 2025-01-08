all: build install run clean
cc=g++ 
program_name=main

# this makefile is  useful than .sh file because it give you options to run project completely without 
#do steps of building like in .sh also it give you more options to organize project  
build:clean
	mkdir build 
	
	cd build &&  $(cc) -S ../src/*.cpp 

	$(cc) build/*.s -o $(program_name)
install:
	mkdir install 
	mv $(program_name) install/
run:
	@./install/$(program_name)

clean:
	rm -rf build
