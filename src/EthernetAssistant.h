#pragma once

#include <Assistant.h>
#include <Client.h>

class EthernetAssistant : public Assistant {
   public:
    EthernetAssistant(Client& client);

    Client& get_client() const { return client; }

    int available() const { return client.available(); };
    uint8_t connected() const { return client.connected(); };

   private:
    Client& client;
};
