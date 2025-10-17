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

#include <alibabacloud/polardb/model/ModifyDBNodeDescriptionRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBNodeDescriptionRequest;

ModifyDBNodeDescriptionRequest::ModifyDBNodeDescriptionRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyDBNodeDescription") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBNodeDescriptionRequest::~ModifyDBNodeDescriptionRequest() {}

long ModifyDBNodeDescriptionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBNodeDescriptionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBNodeDescriptionRequest::getDBNodeId() const {
  return dBNodeId_;
}

void ModifyDBNodeDescriptionRequest::setDBNodeId(const std::string &dBNodeId) {
  dBNodeId_ = dBNodeId;
  setParameter(std::string("DBNodeId"), dBNodeId);
}

std::string ModifyDBNodeDescriptionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBNodeDescriptionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBNodeDescriptionRequest::getDBNodeDescription() const {
  return dBNodeDescription_;
}

void ModifyDBNodeDescriptionRequest::setDBNodeDescription(const std::string &dBNodeDescription) {
  dBNodeDescription_ = dBNodeDescription;
  setParameter(std::string("DBNodeDescription"), dBNodeDescription);
}

std::string ModifyDBNodeDescriptionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBNodeDescriptionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBNodeDescriptionRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBNodeDescriptionRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBNodeDescriptionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBNodeDescriptionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBNodeDescriptionRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBNodeDescriptionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

