#include <eosio/eosio.hpp>

using namespace eosio;


class tic : contract {
    public:
        using contract::contract;

        // Post a message
        [[eosio::action]] void welcome(name host) {
            print("Welcome <host>");
        }
};