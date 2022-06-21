/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/amptest/model/HuichengTestGrayThirdRequest.h>

using AlibabaCloud::AmpTest::Model::HuichengTestGrayThirdRequest;

HuichengTestGrayThirdRequest::HuichengTestGrayThirdRequest()
    : RpcServiceRequest("amptest", "2020-12-30", "HuichengTestGrayThird") {
  setMethod(HttpRequest::Method::Post);
}

HuichengTestGrayThirdRequest::~HuichengTestGrayThirdRequest() {}

HuichengTestGrayThirdRequest::Home HuichengTestGrayThirdRequest::getHome() const {
  return home_;
}

void HuichengTestGrayThirdRequest::setHome(const HuichengTestGrayThirdRequest::Home &home) {
  home_ = home;
  setParameter(std::string("Home") + ".Address.T.Class", home.address.t._class);
  setParameter(std::string("Home") + ".Address.Location.Late", std::to_string(home.address.location.late));
  setParameter(std::string("Home") + ".Address.Location.Lon", std::to_string(home.address.location.lon));
  setParameter(std::string("Home") + ".Address.Detail", home.address.detail);
  setParameter(std::string("Home") + ".T.Class", home.t._class);
  for(int dep1 = 0; dep1 != home.phoneNumbers.size(); dep1++) {
    setParameter(std::string("Home") + ".PhoneNumbers." + std::to_string(dep1 + 1), home.phoneNumbers[dep1]);
  }
  for(auto const &iter1 : home.dMap) {
    setParameter(std::string("Home") + ".DMap." + iter1.first + ".Location.Late", std::to_string(iter1.second.location.late));
    setParameter(std::string("Home") + ".DMap." + iter1.first + ".Location.Lon", std::to_string(iter1.second.location.lon));
    setParameter(std::string("Home") + ".DMap." + iter1.first + ".Detail", iter1.second.detail);
  }
  for(auto const &iter1 : home.nameToAge) {
    setParameter(std::string("Home") + ".NameToAge." + iter1.first, std::to_string(iter1.second));
  }
  for(int dep1 = 0; dep1 != home.locations.size(); dep1++) {
    setParameter(std::string("Home") + ".Locations." + std::to_string(dep1 + 1) + ".Late", std::to_string(home.locations[dep1].late));
    setParameter(std::string("Home") + ".Locations." + std::to_string(dep1 + 1) + ".Lon", std::to_string(home.locations[dep1].lon));
  }
}

