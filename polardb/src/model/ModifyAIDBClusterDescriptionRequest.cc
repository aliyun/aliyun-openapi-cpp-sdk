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

#include <alibabacloud/polardb/model/ModifyAIDBClusterDescriptionRequest.h>

using AlibabaCloud::Polardb::Model::ModifyAIDBClusterDescriptionRequest;

ModifyAIDBClusterDescriptionRequest::ModifyAIDBClusterDescriptionRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyAIDBClusterDescription") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAIDBClusterDescriptionRequest::~ModifyAIDBClusterDescriptionRequest() {}

long ModifyAIDBClusterDescriptionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyAIDBClusterDescriptionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyAIDBClusterDescriptionRequest::getDBClusterDescription() const {
  return dBClusterDescription_;
}

void ModifyAIDBClusterDescriptionRequest::setDBClusterDescription(const std::string &dBClusterDescription) {
  dBClusterDescription_ = dBClusterDescription;
  setParameter(std::string("DBClusterDescription"), dBClusterDescription);
}

std::string ModifyAIDBClusterDescriptionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyAIDBClusterDescriptionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyAIDBClusterDescriptionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyAIDBClusterDescriptionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyAIDBClusterDescriptionRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyAIDBClusterDescriptionRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyAIDBClusterDescriptionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyAIDBClusterDescriptionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyAIDBClusterDescriptionRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyAIDBClusterDescriptionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

