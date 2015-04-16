default: build

PRODUCTS=	\
	example-all-pass	\
	example-with-failure

build: $(PRODUCTS)

clean:
	rm -vf $(PRODUCTS)
