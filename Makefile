help:
	@echo "build                     -> builds executables."
	@echo "launch                    -> runs executables. "
	@echo "clean                     -> deletes executables. "
	@echo "run                       -> builds, runs and deletes executables. "
	@echo " "
	@echo " "
	@echo " "
	@echo " "
	@echo " "
	@echo " "

build: src/*.cpp include/*.h
	g++ -Iinclude src/*.cpp -o bin/main -lraylib

launch: bin/main
	./bin/main

clean:
	rm -rf bin/*

run: build launch clean
