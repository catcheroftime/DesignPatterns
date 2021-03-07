#ifndef GOPIECES_H
#define GOPIECES_H

#include <iostream>
#include <map>

#define SAFE_DELETE(p) if(p){delete p; p=nullptr;}

using namespace std;

class GoPieces
{
public:
    GoPieces(string color) : m_color(color) {}
    virtual ~GoPieces() {}
    virtual void moveTo(string person, int x, int y) = 0;

private:
    string m_color;
};

class WhiteGoPieces : public GoPieces
{
public:
    WhiteGoPieces(): GoPieces("white") {}

    virtual void moveTo(string person, int x, int y){
        cout << person << " 将白色棋子放置在: (" << x << ","<< y<< ")"<< endl;
    }
};

class BlackGoPieces : public GoPieces
{
public:
    BlackGoPieces(): GoPieces("black") {}

    virtual void moveTo(string person, int x, int y){
        cout << person << " 将黑色棋子放置在: (" << x << ","<< y<< ")"<< endl;
    }
};

class GoPiecesFactory
{
public:
    ~GoPiecesFactory() {
        for (auto iter = m_goPieces.begin(); iter != m_goPieces.end();iter++)
        {
            auto piece = iter->second;
            SAFE_DELETE(piece);
        }
        m_goPieces.clear();
    }

    GoPieces* GetGoPieces(string color) {
        auto it = m_goPieces.find(color);
        if (it != m_goPieces.end()) {
            return it->second;
        } else {
            GoPieces* temp = nullptr;
            if (color == "black")
                temp = new BlackGoPieces();
            else
                temp = new WhiteGoPieces();

            m_goPieces.insert({color,temp});
            return temp;
        }
    }

private:
    map<string, GoPieces*> m_goPieces;
};

#endif // GOPIECES_H
