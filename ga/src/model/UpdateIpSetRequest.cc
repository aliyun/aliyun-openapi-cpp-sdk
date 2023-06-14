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

#include <alibabacloud/ga/model/UpdateIpSetRequest.h>

using AlibabaCloud::Ga::Model::UpdateIpSetRequest;

UpdateIpSetRequest::UpdateIpSetRequest()
    : RpcServiceRequest("ga", "2019-11-20", "UpdateIpSet") {
  setMethod(HttpRequest::Method::Post);
}

UpdateIpSetRequest::~UpdateIpSetRequest() {}

std::string UpdateIpSetRequest::getClientToken() const {
  return clientToken_;
}

void UpdateIpSetRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int UpdateIpSetRequest::getBandwidth() const {
  return bandwidth_;
}

void UpdateIpSetRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string UpdateIpSetRequest::getIpSetId() const {
  return ipSetId_;
}

void UpdateIpSetRequest::setIpSetId(const std::string &ipSetId) {
  ipSetId_ = ipSetId;
  setParameter(std::string("IpSetId"), ipSetId);
}

std::string UpdateIpSetRequest::getRegionId() const {
  return regionId_;
}

void UpdateIpSetRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

