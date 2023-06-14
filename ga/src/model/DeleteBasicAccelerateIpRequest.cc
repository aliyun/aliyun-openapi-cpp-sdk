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

#include <alibabacloud/ga/model/DeleteBasicAccelerateIpRequest.h>

using AlibabaCloud::Ga::Model::DeleteBasicAccelerateIpRequest;

DeleteBasicAccelerateIpRequest::DeleteBasicAccelerateIpRequest()
    : RpcServiceRequest("ga", "2019-11-20", "DeleteBasicAccelerateIp") {
  setMethod(HttpRequest::Method::Post);
}

DeleteBasicAccelerateIpRequest::~DeleteBasicAccelerateIpRequest() {}

std::string DeleteBasicAccelerateIpRequest::getClientToken() const {
  return clientToken_;
}

void DeleteBasicAccelerateIpRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteBasicAccelerateIpRequest::getAccelerateIpId() const {
  return accelerateIpId_;
}

void DeleteBasicAccelerateIpRequest::setAccelerateIpId(const std::string &accelerateIpId) {
  accelerateIpId_ = accelerateIpId;
  setParameter(std::string("AccelerateIpId"), accelerateIpId);
}

std::string DeleteBasicAccelerateIpRequest::getRegionId() const {
  return regionId_;
}

void DeleteBasicAccelerateIpRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

