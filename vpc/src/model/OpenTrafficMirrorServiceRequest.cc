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

#include <alibabacloud/vpc/model/OpenTrafficMirrorServiceRequest.h>

using AlibabaCloud::Vpc::Model::OpenTrafficMirrorServiceRequest;

OpenTrafficMirrorServiceRequest::OpenTrafficMirrorServiceRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "OpenTrafficMirrorService") {
  setMethod(HttpRequest::Method::Post);
}

OpenTrafficMirrorServiceRequest::~OpenTrafficMirrorServiceRequest() {}

long OpenTrafficMirrorServiceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void OpenTrafficMirrorServiceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string OpenTrafficMirrorServiceRequest::getClientToken() const {
  return clientToken_;
}

void OpenTrafficMirrorServiceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string OpenTrafficMirrorServiceRequest::getRegionId() const {
  return regionId_;
}

void OpenTrafficMirrorServiceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string OpenTrafficMirrorServiceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void OpenTrafficMirrorServiceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string OpenTrafficMirrorServiceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void OpenTrafficMirrorServiceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long OpenTrafficMirrorServiceRequest::getOwnerId() const {
  return ownerId_;
}

void OpenTrafficMirrorServiceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

