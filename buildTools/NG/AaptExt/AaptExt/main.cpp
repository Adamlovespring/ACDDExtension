//
//  main.cpp
//  AaptExt
//
//  Created by BunnyBlue on 6/25/15.
//  Copyright © 2015 BunnyBlue. All rights reserved.
//

#include <iostream>
#include "AaptConfig.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
   
   AaptConfig *mAaptConfig= AaptConfig::getInstance();
    mAaptConfig->initConfigFile("/Users/BunnyBlue/Downloads/aapt_config.txt");
    cout<<mAaptConfig->getConfigByKey(AAPT_CONFIG_PKG);
    return 0;
}
