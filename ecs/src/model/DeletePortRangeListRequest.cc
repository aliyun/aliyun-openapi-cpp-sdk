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

#include <alibabacloud/ecs/model/DeletePortRangeListRequest.h>

using AlibabaCloud::Ecs::Model::DeletePortRangeListRequest;

DeletePortRangeListRequest::DeletePortRangeListRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DeletePortRangeList") {
  setMethod(HttpRequest::Method::Post);
}

DeletePortRangeListRequest::~DeletePortRangeListRequest() {}

long DeletePortRangeListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeletePortRangeListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeletePortRangeListRequest::getRegionId() const {
  return regionId_;
}

void DeletePortRangeListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeletePortRangeListRequest::getPortRangeListId() const {
  return portRangeListId_;
}

void DeletePortRangeListRequest::setPortRangeListId(const std::string &portRangeListId) {
  portRangeListId_ = portRangeListId;
  setParameter(std::string("PortRangeListId"), portRangeListId);
}

std::string DeletePortRangeListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeletePortRangeListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeletePortRangeListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeletePortRangeListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeletePortRangeListRequest::getOwnerId() const {
  return ownerId_;
}

void DeletePortRangeListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

