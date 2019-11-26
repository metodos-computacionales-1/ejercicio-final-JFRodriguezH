uno : 
	c++ pendulo.cpp -o pendulo.out
	./pendulo.out 100000 1.4 1
	python pendulo.py
	./pendulo.out 100000 1.44 1
	python pendulo.py
	./pendulo.out 100000 1.465 1
	python pendulo.py
	rm pendulo.dat pendulo.out
	
dos : 
	c++ pendulo.cpp -o pendulo.out
	./pendulo.out 10000 1.35 2
	./pendulo.out 10000 1.36 2
	./pendulo.out 10000 1.37 2
	./pendulo.out 10000 1.38 2
	./pendulo.out 10000 1.39 2
	./pendulo.out 10000 1.4 2
	./pendulo.out 10000 1.41 2
	./pendulo.out 10000 1.42 2
	./pendulo.out 10000 1.43 2
	./pendulo.out 10000 1.44 2
	./pendulo.out 10000 1.45 2
	./pendulo.out 10000 1.46 2
	./pendulo.out 10000 1.47 2
	./pendulo.out 10000 1.48 2
	./pendulo.out 10000 1.49 2
	./pendulo.out 10000 1.5 2
	python pendulo_dos.py
	rm pendulo_1.35.dat pendulo_1.36.dat pendulo_1.37.dat pendulo_1.38.dat pendulo_1.39.dat pendulo_1.4.dat pendulo_1.41.dat pendulo_1.42.dat pendulo_1.43.dat pendulo_1.44.dat pendulo_1.45.dat pendulo_1.46.dat pendulo_1.47.dat pendulo_1.48.dat pendulo_1.49.dat pendulo_1.5.dat pendulo.out