#pragma once

#include <Assistant.h>
#include <Client.h>

class EthernetAssistant : public Assistant {
   public:

    virtual bool connected() const = 0;

    // create new client and return it, has to be deleted by caller
    virtual Client* create_client() const = 0;

};
