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

#include <alibabacloud/hitsdb/model/SwitchLSQLV3MySQLServiceRequest.h>

using AlibabaCloud::Hitsdb::Model::SwitchLSQLV3MySQLServiceRequest;

SwitchLSQLV3MySQLServiceRequest::SwitchLSQLV3MySQLServiceRequest()
    : RpcServiceRequest("hitsdb", "2020-06-15", "SwitchLSQLV3MySQLService") {
  setMethod(HttpRequest::Method::Post);
}

SwitchLSQLV3MySQLServiceRequest::~SwitchLSQLV3MySQLServiceRequest() {}

int SwitchLSQLV3MySQLServiceRequest::getActionType() const {
  return actionType_;
}

void SwitchLSQLV3MySQLServiceRequest::setActionType(int actionType) {
  actionType_ = actionType;
  setParameter(std::string("ActionType"), std::to_string(actionType));
}

long SwitchLSQLV3MySQLServiceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SwitchLSQLV3MySQLServiceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SwitchLSQLV3MySQLServiceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SwitchLSQLV3MySQLServiceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SwitchLSQLV3MySQLServiceRequest::getSecurityToken() const {
  return securityToken_;
}

void SwitchLSQLV3MySQLServiceRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string SwitchLSQLV3MySQLServiceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SwitchLSQLV3MySQLServiceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SwitchLSQLV3MySQLServiceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SwitchLSQLV3MySQLServiceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SwitchLSQLV3MySQLServiceRequest::getOwnerId() const {
  return ownerId_;
}

void SwitchLSQLV3MySQLServiceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SwitchLSQLV3MySQLServiceRequest::getInstanceId() const {
  return instanceId_;
}

void SwitchLSQLV3MySQLServiceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

