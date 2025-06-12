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

#include <alibabacloud/clickhouse/model/ModifyDBClusterDescriptionRequest.h>

using AlibabaCloud::Clickhouse::Model::ModifyDBClusterDescriptionRequest;

ModifyDBClusterDescriptionRequest::ModifyDBClusterDescriptionRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "ModifyDBClusterDescription") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterDescriptionRequest::~ModifyDBClusterDescriptionRequest() {}

long ModifyDBClusterDescriptionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBClusterDescriptionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterDescriptionRequest::getDBClusterDescription() const {
  return dBClusterDescription_;
}

void ModifyDBClusterDescriptionRequest::setDBClusterDescription(const std::string &dBClusterDescription) {
  dBClusterDescription_ = dBClusterDescription;
  setParameter(std::string("DBClusterDescription"), dBClusterDescription);
}

std::string ModifyDBClusterDescriptionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBClusterDescriptionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBClusterDescriptionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBClusterDescriptionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBClusterDescriptionRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBClusterDescriptionRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBClusterDescriptionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBClusterDescriptionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBClusterDescriptionRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBClusterDescriptionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

