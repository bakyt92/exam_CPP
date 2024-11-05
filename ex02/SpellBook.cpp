#include "SpellBook.hpp"

SpellBook::SpellBook(const SpellBook &src)
{
    this->book = src.book;
    *this = src;
}
    SpellBook& SpellBook::operator=(const SpellBook &rhs)
    {
        if (this != &rhs)
        {
            this->book = rhs.book;
        }
        return (*this);
    }

SpellBook::SpellBook(/* args */)
{

}
    void SpellBook::learnSpell(ASpell* spell_n)
    {
        if (spell_n)
        {
            book.insert(std::pair<std::string, ASpell*>(spell_n->getName(), spell_n->clone()));
        }
    }

    void SpellBook::forgetSpell(std::string const &spell_n)
    {
        std::map<std::string, ASpell*>::iterator iter = book.find(spell_n);
        if (iter != book.end())
        {
            delete iter->second;
        }
        book.erase(spell_n);
    }
// proverka!!!!!
    ASpell* SpellBook::createSpell(std::string const &spell_c)
    {
        std::map<std::string, ASpell*>::iterator iter = book.find(spell_c);
        if (iter != book.end())
        {
            return(book[spell_c]);
        }
        return NULL;
    }

    SpellBook::~SpellBook(/* args */)
{
    std::map<std::string, ASpell*>::iterator iter = book.begin();
    while (iter != book.end())
    {
        delete iter->second;
        iter++;
    }
    book.clear();
}