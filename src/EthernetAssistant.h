#pragma once

#include <Assistant.h>
#include <Client.h>

class EthernetAssistant : public Assistant {
   public:
    EthernetAssistant(Client& client);

    Client& get_client() { return client; }

    int available() { return client.available(); };
    uint8_t connected() { return client.connected(); };

   private:
    Client& client;
};
