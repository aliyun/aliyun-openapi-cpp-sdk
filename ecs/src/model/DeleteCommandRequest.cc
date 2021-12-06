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

#include <alibabacloud/ecs/model/DeleteCommandRequest.h>

using AlibabaCloud::Ecs::Model::DeleteCommandRequest;

DeleteCommandRequest::DeleteCommandRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DeleteCommand") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCommandRequest::~DeleteCommandRequest() {}

long DeleteCommandRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteCommandRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteCommandRequest::getCommandId() const {
  return commandId_;
}

void DeleteCommandRequest::setCommandId(const std::string &commandId) {
  commandId_ = commandId;
  setParameter(std::string("CommandId"), commandId);
}

std::string DeleteCommandRequest::getRegionId() const {
  return regionId_;
}

void DeleteCommandRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteCommandRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteCommandRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteCommandRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteCommandRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteCommandRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteCommandRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

