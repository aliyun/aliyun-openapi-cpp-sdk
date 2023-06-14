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

#include <alibabacloud/ga/model/CreateBasicIpSetRequest.h>

using AlibabaCloud::Ga::Model::CreateBasicIpSetRequest;

CreateBasicIpSetRequest::CreateBasicIpSetRequest()
    : RpcServiceRequest("ga", "2019-11-20", "CreateBasicIpSet") {
  setMethod(HttpRequest::Method::Post);
}

CreateBasicIpSetRequest::~CreateBasicIpSetRequest() {}

std::string CreateBasicIpSetRequest::getClientToken() const {
  return clientToken_;
}

void CreateBasicIpSetRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

long CreateBasicIpSetRequest::getBandwidth() const {
  return bandwidth_;
}

void CreateBasicIpSetRequest::setBandwidth(long bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string CreateBasicIpSetRequest::getIspType() const {
  return ispType_;
}

void CreateBasicIpSetRequest::setIspType(const std::string &ispType) {
  ispType_ = ispType;
  setParameter(std::string("IspType"), ispType);
}

std::string CreateBasicIpSetRequest::getAccelerateRegionId() const {
  return accelerateRegionId_;
}

void CreateBasicIpSetRequest::setAccelerateRegionId(const std::string &accelerateRegionId) {
  accelerateRegionId_ = accelerateRegionId;
  setParameter(std::string("AccelerateRegionId"), accelerateRegionId);
}

std::string CreateBasicIpSetRequest::getRegionId() const {
  return regionId_;
}

void CreateBasicIpSetRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateBasicIpSetRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void CreateBasicIpSetRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

