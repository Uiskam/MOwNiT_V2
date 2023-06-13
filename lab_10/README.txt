Aby uruchomić plik .ipynb można zaimportować go do google collab lub aby
uruchomić lokalnie należy wpisać polecenie w terminalu:
Wymagany jest pyton w wersji 3.10, biblioteka jupyter notebook oraz program pip
Instalcje pythona i pip sa opisane na stronie:
https://www.python.org/downloads/
https://pypi.org/project/pip/

Instalacja jupyter notebook:
pip install jupyter notebook

Uruchomienie notebooka:
jupyter notebook --notebook-dir=ścieżka-do-katalogu-z-plikiem.ipynb

dodatkowo jeżeli nie są zainstalowane należy pobrać biblioteki numpy i matplotlib:
pip install numpy
pip install matplotlib

Do wykonania eksperymentów potrzebne jest wygenereowanie pliku proper_results.csv za pomocą wywoałnia
funkcji generate_data("proper_results")
odpowiednie wywołanie funkcji znajdują się w komentarzach w kodzie 
