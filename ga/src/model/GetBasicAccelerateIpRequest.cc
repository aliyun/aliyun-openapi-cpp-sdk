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

#include <alibabacloud/ga/model/GetBasicAccelerateIpRequest.h>

using AlibabaCloud::Ga::Model::GetBasicAccelerateIpRequest;

GetBasicAccelerateIpRequest::GetBasicAccelerateIpRequest()
    : RpcServiceRequest("ga", "2019-11-20", "GetBasicAccelerateIp") {
  setMethod(HttpRequest::Method::Post);
}

GetBasicAccelerateIpRequest::~GetBasicAccelerateIpRequest() {}

std::string GetBasicAccelerateIpRequest::getClientToken() const {
  return clientToken_;
}

void GetBasicAccelerateIpRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string GetBasicAccelerateIpRequest::getAccelerateIpId() const {
  return accelerateIpId_;
}

void GetBasicAccelerateIpRequest::setAccelerateIpId(const std::string &accelerateIpId) {
  accelerateIpId_ = accelerateIpId;
  setParameter(std::string("AccelerateIpId"), accelerateIpId);
}

std::string GetBasicAccelerateIpRequest::getRegionId() const {
  return regionId_;
}

void GetBasicAccelerateIpRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

