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

#include <alibabacloud/ga/model/GetBasicIpSetRequest.h>

using AlibabaCloud::Ga::Model::GetBasicIpSetRequest;

GetBasicIpSetRequest::GetBasicIpSetRequest()
    : RpcServiceRequest("ga", "2019-11-20", "GetBasicIpSet") {
  setMethod(HttpRequest::Method::Post);
}

GetBasicIpSetRequest::~GetBasicIpSetRequest() {}

std::string GetBasicIpSetRequest::getClientToken() const {
  return clientToken_;
}

void GetBasicIpSetRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string GetBasicIpSetRequest::getIpSetId() const {
  return ipSetId_;
}

void GetBasicIpSetRequest::setIpSetId(const std::string &ipSetId) {
  ipSetId_ = ipSetId;
  setParameter(std::string("IpSetId"), ipSetId);
}

std::string GetBasicIpSetRequest::getRegionId() const {
  return regionId_;
}

void GetBasicIpSetRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

