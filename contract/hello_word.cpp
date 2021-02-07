#include <eosio/eosio.hpp>

using namespace eosio;

contract hello : public contract {
    public:
        using contract::contract;

        action ciao( name user) {
            require_auth(user);
            check( user!= name("tiziano"), 
                "Hi tiziano, you are not the person i was looking for!");
            print("Ciao ", user);
        }
}