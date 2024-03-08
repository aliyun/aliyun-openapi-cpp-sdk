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

#include <alibabacloud/dds/model/ModifyAuditLogFilterRequest.h>

using AlibabaCloud::Dds::Model::ModifyAuditLogFilterRequest;

ModifyAuditLogFilterRequest::ModifyAuditLogFilterRequest()
    : RpcServiceRequest("dds", "2015-12-01", "ModifyAuditLogFilter") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAuditLogFilterRequest::~ModifyAuditLogFilterRequest() {}

long ModifyAuditLogFilterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyAuditLogFilterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyAuditLogFilterRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyAuditLogFilterRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyAuditLogFilterRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyAuditLogFilterRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyAuditLogFilterRequest::getRoleType() const {
  return roleType_;
}

void ModifyAuditLogFilterRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string ModifyAuditLogFilterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyAuditLogFilterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyAuditLogFilterRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyAuditLogFilterRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyAuditLogFilterRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyAuditLogFilterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyAuditLogFilterRequest::getFilter() const {
  return filter_;
}

void ModifyAuditLogFilterRequest::setFilter(const std::string &filter) {
  filter_ = filter;
  setParameter(std::string("Filter"), filter);
}

