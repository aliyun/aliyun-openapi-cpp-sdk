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

#include <alibabacloud/ga/model/DeleteIpSetRequest.h>

using AlibabaCloud::Ga::Model::DeleteIpSetRequest;

DeleteIpSetRequest::DeleteIpSetRequest()
    : RpcServiceRequest("ga", "2019-11-20", "DeleteIpSet") {
  setMethod(HttpRequest::Method::Post);
}

DeleteIpSetRequest::~DeleteIpSetRequest() {}

std::string DeleteIpSetRequest::getClientToken() const {
  return clientToken_;
}

void DeleteIpSetRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteIpSetRequest::getIpSetId() const {
  return ipSetId_;
}

void DeleteIpSetRequest::setIpSetId(const std::string &ipSetId) {
  ipSetId_ = ipSetId;
  setParameter(std::string("IpSetId"), ipSetId);
}

std::string DeleteIpSetRequest::getRegionId() const {
  return regionId_;
}

void DeleteIpSetRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteIpSetRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void DeleteIpSetRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

