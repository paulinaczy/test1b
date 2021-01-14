# Kolokwium I - Muzyka
_Czas pracy: 90 minut_

## Zadanie 1
Napisz klasę `Artysta`, która posiada:
- prywatne pole typu `std::string`, reprezentujące pseudonim danego muzyka
- prywatne pole typu `unsigned`, reprezentujące miesięczną liczbą sluchaczy
- publiczny konstruktor domyślny, tworzący muzyka `"Anonim"` o zerowej liczbie słuchaczy
- publiczny konstruktor parametryczny `Artysta(const std::string&, unsigned)`, który wykorzystuje listę inicjalizacyjną do nadania wartości polom klasy
- publiczną metodę `void graj(std::ostream&) const`, która drukuje do podanego strumienia tekst "[pseudonim]: [liczba fanów]"
- publiczny getter `const std::string& getPseudonim() const`, zwracający liczbę pseudonim
- publiczny getter `unsigned getSluchacze() const`, zwracający liczbę słuchaczy

**Uwaga**: zwróć uwagę na poprawne formatowanie w metodzie `graj`. Między wartościami odpowiednich pól powinny się znaleźć jedynie znaki dwukropka i spacji.

## Zadanie 2
Zmodyfikuj klasę `Artysta` tak, aby metoda `graj` była wirtualna. Następnie napisz klasy `PopGwiazda` oraz `RapGwiazda`, publicznie dziedziczące po klasie `Artysta`. Dodaj do nich konstruktory, przyjmujące stałą referencję do `std::string` oraz `unsigned`, które tworzą odpowiednio obiekt bazowy. Ponad to, niech nadpisują one metodę `graj` tak, aby:
- `PopGwiazda` drukowała do podanego strumienia tekst `"PopGwiazda: [pseudonim]"`
- `RapGwiazda` drukowała do podanego strumienia tekst `"RapGwiazda: [pseudonim]"`

Następnie napisz funkcję `stworzArtyste`, która:
- przyjmuje przez stałą referencję obiekt typu `std::string`
- zwraca wskaźnik do obiektu typu `Artysta`
- jeżeli podany string zaczyna się od wielkiej litery, tworzy pod zwracanym adresem obiekt typu `PopGwiazda` o pseudonimie `BTS` i liczbie słuchaczy 1234
- jeżeli podany string zaczyna się od małej litery, tworzy pod zwracanym adresem obiekt typu `RapGwiazda` o pseudonimie `Ye` i liczbie słuchaczy 4321

Na koniec dokonaj modyfikacji klasy `Artysta` potrzebnej do poprawnego usuwania obiektów klas `PopGwiazda` i `RapGwiazda` przez wskaźnik na obiekt `Artysta`.

**Podpowiedź**: Dostęp do pierwszego znaku string można uzyskać za pomocą metody `front`. Funkcja `std::toupper` służy do konwersji na wielkie litery. Aby sprawdzić wielkość litery można zatem np. porównać ją do wyniku takiej konwersji.

## Zadanie 3
Napisz szablon klasy `ArtystaPlusInstrument`, który:
- sparametryzowany jest jednym typem
- posiada prywatne pole `a` typu `Artysta`
- posiada prywatne pole `i` typu, którym jest sparametryzowany
- posiada publiczny konstruktor parametryczny `ArtystaPlusInstrument(const Artysta&, const T&)`, inicjalizujący odpowiednio pola klasy `ArtystaPlusInstrument<T>`
- posiada publiczną metodę `unsigned koncert()`, która zwraca wynik zawołania metody `liczbaUczestnikow` obiektu `i` z argumentem będącym liczbą słuchaczy artysty `a`.

## Zadanie 4
Napisz funkcję `stworzZespol`, która:
- przyjmuje jako pierwszy argument liczbę całkowitą
- przyjmuje jako drugi argument stałą referencję do obiektu typu `std::string`
- jeżeli długość podanego stringa nie jest równa podanej liczbie całkowitej, rzuca wyjątkiem typu `std::logic_error` ("treść" wyjątku, czyli tekst podany do jego konstruktora może być dowolny)
- zwraca wektor (w znaczeniu std::vector) obiektów typu `Artysta`
- zwracany wektor powinien mieć długość równą podanemu pierwszemu argumentowi
- liczba słuchaczy pierwszego artysty w wektorze powinna być równa 1, drugiego 2, trzeciego 3, itd.
- pseudonim każdego artysty w wektorze równy jest podanemu stringowi

**Podpowiedź**: długość stringa można sprawdzić przy pomocy metody `size`

## Zadanie 5
Napisz algorytm (szablon funkcji) `liczPopularnych`, który:
- przyjmuje 2 argumenty typu, którym jest sparametryzowany - iteratory do początku i za koniec zakresu obiektów typu `Artysta`
- zwraca liczbę artystów, których liczba słuchaczy jest ściśle większa niż 1000
- używa w tym celu algorytmu `std::count_if` (przydatne będzie przeciążenie nr 3 z dokumentacji na cppreference.com)
