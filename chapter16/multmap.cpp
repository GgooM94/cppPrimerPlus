#include<iostream>
#include<string>
#include<map>
#include<algorithm>

using namespace std;
typedef int KeyType;
typedef pair<const KeyType, string>Pair;
typedef multimap<KeyType, string>MapCode;

int main(void) {
	MapCode codes;
	codes.insert(Pair(415, "샌프란시스코"));
	codes.insert(Pair(510, "오클랜드"));
	codes.insert(Pair(718, "브루클린"));
	codes.insert(Pair(718, "스탠튼 섬 "));
	codes.insert(Pair(415, "샌라파엘"));
	codes.insert(Pair(510, "버클리"));

	cout << "지역 코드가 415인 도시 수: " << codes.count(415) << endl;
	cout << "지역 코드가 718인 도시 수: " << codes.count(718) << endl;
	cout << "지역 코드가 510인 도시 수: " << codes.count(510) << endl;
	cout << "지역 코드\t도시\n";
	MapCode::iterator it;
	for (it = codes.begin(); it != codes.end(); ++it)
		cout << "      " << (*it).first << "\t" << (*it).second << endl;

	pair<MapCode::iterator, MapCode::iterator> range = codes.equal_range(718);
	cout << "지역 코드가 718인 도시들:\n";
	for (it = range.first; it != range.second; ++it)
		cout << (*it).second << endl;
}