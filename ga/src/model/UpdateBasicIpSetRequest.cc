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

#include <alibabacloud/ga/model/UpdateBasicIpSetRequest.h>

using AlibabaCloud::Ga::Model::UpdateBasicIpSetRequest;

UpdateBasicIpSetRequest::UpdateBasicIpSetRequest()
    : RpcServiceRequest("ga", "2019-11-20", "UpdateBasicIpSet") {
  setMethod(HttpRequest::Method::Post);
}

UpdateBasicIpSetRequest::~UpdateBasicIpSetRequest() {}

std::string UpdateBasicIpSetRequest::getClientToken() const {
  return clientToken_;
}

void UpdateBasicIpSetRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int UpdateBasicIpSetRequest::getBandwidth() const {
  return bandwidth_;
}

void UpdateBasicIpSetRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string UpdateBasicIpSetRequest::getIpSetId() const {
  return ipSetId_;
}

void UpdateBasicIpSetRequest::setIpSetId(const std::string &ipSetId) {
  ipSetId_ = ipSetId;
  setParameter(std::string("IpSetId"), ipSetId);
}

std::string UpdateBasicIpSetRequest::getRegionId() const {
  return regionId_;
}

void UpdateBasicIpSetRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

