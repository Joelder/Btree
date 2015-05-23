#ifndef NO_BINARIO_HPP
#define NO_BINARIO_HPP

#include <cstdlib>
#include <vector>

template<typename T>
class NoBinario {
protected:
	T* dado;
	NoBinario<T>* esquerda;
	NoBinario<T>* direita;
	std::vector<NoBinario<T>*> elementos;  //!< Elementos acessados durante
										   // o percurso realizado

public:
	NoBinario<T>(const T& dado) {
		this->esquerda = NULL;
		this->direita = NULL;
		this->dado = dado;
	}

	virtual ~NoBinario();

	T* getDado() {
		return this->dado;
	}

	std::vector<NoBinario<T>*> getElementos() {

	}

	NoBinario<T>* getEsquerda() {
		return this->esquerda;
	}

	NoBinario<T>* getDireita() {
		return this->direita;
	}

	T* busca(const T& dado, NoBinario<T>* arv) {
		while (arv != NULL && arv->dado != dado) {
			if (arv->dado < dado) {
				arv = arv->direita;
			} else {
				arv = arv->esquerda;
			}
		}
		return arv;
	}

	NoBinario<T>* inserir(const T& dado, NoBinario<T>* arv) {
		if (arv->dado > dado) {
			// inserção à esquerda
			if (arv->esquerda == NULL) {
				NoBinario<T>* no = new NoBinario<T>(dado);
				arv->esquerda = no;
				return no;
			} else {
				return inserir(dado, arv->esquerda);
			}
		} else {
			// inserção à direita
			if (arv->direita == NULL) {
				NoBinario<T>* no = new NoBinario<T>(dado);
				arv->direita = no;
				return no;
			} else {
				return inserir(dado, arv->direita);
			}
		}
	}

	NoBinario<T>* remover(NoBinario<T>* arv, const T& dado) {

		if(arv == NULL) {
			return arv;
		} else {
			if(arv->dado > dado) {
				return remover(arv->esquerda, dado);
			} else if(arv->dado < dado){

			} else {

			}
		}


	}
	NoBinario<T>* minimo(NoBinario<T>* nodo) {

	}
	void preOrdem(NoBinario<T>* nodo) {

	}
	void emOrdem(NoBinario<T>* nodo) {

	}
	void posOrdem(NoBinario<T>* nodo) {

	}
};

#endif /* NO_BINARIO_HPP */
