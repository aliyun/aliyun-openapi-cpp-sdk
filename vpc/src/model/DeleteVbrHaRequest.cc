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

#include <alibabacloud/vpc/model/DeleteVbrHaRequest.h>

using AlibabaCloud::Vpc::Model::DeleteVbrHaRequest;

DeleteVbrHaRequest::DeleteVbrHaRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeleteVbrHa") {
  setMethod(HttpRequest::Method::Post);
}

DeleteVbrHaRequest::~DeleteVbrHaRequest() {}

long DeleteVbrHaRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteVbrHaRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteVbrHaRequest::getClientToken() const {
  return clientToken_;
}

void DeleteVbrHaRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteVbrHaRequest::getRegionId() const {
  return regionId_;
}

void DeleteVbrHaRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DeleteVbrHaRequest::getDryRun() const {
  return dryRun_;
}

void DeleteVbrHaRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteVbrHaRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteVbrHaRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteVbrHaRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteVbrHaRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteVbrHaRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteVbrHaRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteVbrHaRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteVbrHaRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

