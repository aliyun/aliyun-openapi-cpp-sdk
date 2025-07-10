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

#include <alibabacloud/vpc/model/GetTrafficMirrorServiceStatusRequest.h>

using AlibabaCloud::Vpc::Model::GetTrafficMirrorServiceStatusRequest;

GetTrafficMirrorServiceStatusRequest::GetTrafficMirrorServiceStatusRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "GetTrafficMirrorServiceStatus") {
  setMethod(HttpRequest::Method::Post);
}

GetTrafficMirrorServiceStatusRequest::~GetTrafficMirrorServiceStatusRequest() {}

long GetTrafficMirrorServiceStatusRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetTrafficMirrorServiceStatusRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetTrafficMirrorServiceStatusRequest::getClientToken() const {
  return clientToken_;
}

void GetTrafficMirrorServiceStatusRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string GetTrafficMirrorServiceStatusRequest::getRegionId() const {
  return regionId_;
}

void GetTrafficMirrorServiceStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetTrafficMirrorServiceStatusRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetTrafficMirrorServiceStatusRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetTrafficMirrorServiceStatusRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetTrafficMirrorServiceStatusRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GetTrafficMirrorServiceStatusRequest::getOwnerId() const {
  return ownerId_;
}

void GetTrafficMirrorServiceStatusRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

