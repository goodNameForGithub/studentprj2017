#include "Worker.h"
#include "Server.h"

int main()
{
    Server server(1122);

    Worker::instance()->start();

    LOG_INFO("Threads started!!!");

    Worker::instance()->join();

    LOG_INFO("Threads FINISHED!!!");

    return 0;
}

