#pragma once

#include <Assistant.h>
#include <Client.h>

class EthernetAssistant : public Assistant {
   public:
    EthernetAssistant(Client& client);

    Client& get_client() { return client; }

   private:
    Client& client;
};
