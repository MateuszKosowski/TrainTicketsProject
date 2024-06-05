//
// Created by mateu on 05.06.2024.
//

#ifndef TRAINTICKETS_STORAGECONTEINER_H
#define TRAINTICKETS_STORAGECONTEINER_H

#include "repositories/ClientRepository.h"

class StorageConteiner {
private:
    ClientRepository clientRepository;
public:
    ClientRepositoryPtr getCRepository();


    StorageConteiner();
    ~StorageConteiner();
};

#endif //TRAINTICKETS_STORAGECONTEINER_H
