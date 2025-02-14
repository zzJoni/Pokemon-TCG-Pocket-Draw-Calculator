#pragma once
#include <string>
#include <string_view>

// Interface class for all cards
class ICard
{
public:
	virtual const std::string_view getName() const { return m_name; };
	virtual const std::string_view getSetNumber() const { return m_setNumber; };
	
	virtual const std::string_view getType() const = 0;
	virtual const std::string_view getSubtype() const = 0;
	virtual void playCard() = 0;

	virtual ~ICard() = 0;

protected:
	// Protects against slicing
	ICard& operator=(const ICard&) = default;

	ICard(const std::string name, const std::string setNumber) : m_name{ name }, m_setNumber{ setNumber } {};

	const std::string m_name{};
	const std::string m_setNumber{};
};
inline ICard::~ICard() = default;


// Interface class for pokemon
class IPokemon : public ICard
{
public:
	virtual const std::string_view getSubtype() const = 0;
	virtual const std::string_view getType() const override { return "pokemon"; };
	 
	// Plays the card (unfinished)
	virtual void playCard() = 0;

	virtual ~IPokemon() = 0;

protected:
	IPokemon& operator=(const IPokemon&) = default;
	IPokemon(const std::string name, const std::string setNumber) : ICard{ name, setNumber } {};
};
inline IPokemon::~IPokemon() = default;


// Class for basic pokemon
class Basic : public IPokemon
{
public:
	Basic(const std::string name, const std::string setNumber) : IPokemon{name, setNumber} {};
	
	virtual const std::string_view getSubtype() const override { return "basic"; };
	virtual void playCard() {};

	virtual ~Basic() = default;
};


// Class for stage 1 pokemon
class Stage1 : public IPokemon
{
public:
	Stage1(const std::string name, const std::string setNumber) : IPokemon{ name, setNumber } {};

	virtual const std::string_view getSubtype() const override { return "stage 1"; };
	virtual void playCard() {};

	virtual ~Stage1() = default;
};


// Class for stage 2 pokemon
class Stage2 : public IPokemon
{
public:
	Stage2(const std::string name, const std::string setNumber) : IPokemon{ name, setNumber } {};

	virtual const std::string_view getSubtype() const override { return "stage 2"; };
	virtual void playCard() override {};

	virtual ~Stage2() = default;
};


// Class for items
class Item : public ICard
{
public:
	Item(const std::string name, const std::string setNumber) : ICard{ name, setNumber } {};
	
	virtual const std::string_view getType() const override { return "item"; };
	virtual const std::string_view getSubtype() const override { return ""; };
	virtual void playCard() override {};

	virtual ~Item() = default;
};


// Class for poketools
class Tool : public Item
{
public:
	Tool(const std::string name, const std::string setNumber) : Item{ name, setNumber } {};
	
	virtual const std::string_view getSubtype() const override { return "tool"; };
	virtual void playCard() override {};

	virtual ~Tool() = default;
};


// Class for supporters
class Supporter : public ICard
{
public:
	Supporter(const std::string name, const std::string setNumber) : ICard{ name, setNumber } {};

	virtual const std::string_view getType() const override { return "supporter"; };
	virtual const std::string_view getSubtype() const override { return ""; };
	virtual void playCard() override {};

	virtual ~Supporter() = default;
};
