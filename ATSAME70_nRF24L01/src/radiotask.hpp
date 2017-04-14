#ifndef RADIOTASK_HPP_
#define RADIOTASK_HPP_

#include <xXx/components/wireless/nrf24l01p/nrf24l01p_esb.hpp>
#include <xXx/os/simpletask.hpp>
#include <xXx/templates/queue.hpp>

#include "drivers/gpio/gpio.hpp"

using namespace xXx;

class RadioTask : public SimpleTask {
   private:
    nRF24L01P_ESB &_receiver;
    Queue<Package_t> _queue;
    Gpio _led;

   public:
    RadioTask(nRF24L01P_ESB &receiver);
    ~RadioTask();
    void setup();
    void loop();
};

#endif /* RADIOTASK_HPP_ */
