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

#include <alibabacloud/dcdn/model/DescribeDcdnIpInfoRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnIpInfoRequest;

DescribeDcdnIpInfoRequest::DescribeDcdnIpInfoRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnIpInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnIpInfoRequest::~DescribeDcdnIpInfoRequest() {}

std::string DescribeDcdnIpInfoRequest::getIP() const {
  return iP_;
}

void DescribeDcdnIpInfoRequest::setIP(const std::string &iP) {
  iP_ = iP;
  setParameter(std::string("IP"), iP);
}

