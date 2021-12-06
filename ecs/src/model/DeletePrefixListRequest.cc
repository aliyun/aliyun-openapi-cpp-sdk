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

#include <alibabacloud/ecs/model/DeletePrefixListRequest.h>

using AlibabaCloud::Ecs::Model::DeletePrefixListRequest;

DeletePrefixListRequest::DeletePrefixListRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DeletePrefixList") {
  setMethod(HttpRequest::Method::Post);
}

DeletePrefixListRequest::~DeletePrefixListRequest() {}

long DeletePrefixListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeletePrefixListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeletePrefixListRequest::getRegionId() const {
  return regionId_;
}

void DeletePrefixListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeletePrefixListRequest::getPrefixListId() const {
  return prefixListId_;
}

void DeletePrefixListRequest::setPrefixListId(const std::string &prefixListId) {
  prefixListId_ = prefixListId;
  setParameter(std::string("PrefixListId"), prefixListId);
}

std::string DeletePrefixListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeletePrefixListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeletePrefixListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeletePrefixListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeletePrefixListRequest::getOwnerId() const {
  return ownerId_;
}

void DeletePrefixListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

