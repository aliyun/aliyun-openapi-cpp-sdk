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

#include <alibabacloud/dms-enterprise/model/GrantUserPermissionRequest.h>

using AlibabaCloud::Dms_enterprise::Model::GrantUserPermissionRequest;

GrantUserPermissionRequest::GrantUserPermissionRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "GrantUserPermission") {
  setMethod(HttpRequest::Method::Post);
}

GrantUserPermissionRequest::~GrantUserPermissionRequest() {}

std::string GrantUserPermissionRequest::getExpireDate() const {
  return expireDate_;
}

void GrantUserPermissionRequest::setExpireDate(const std::string &expireDate) {
  expireDate_ = expireDate;
  setParameter(std::string("ExpireDate"), expireDate);
}

std::string GrantUserPermissionRequest::getUserId() const {
  return userId_;
}

void GrantUserPermissionRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

long GrantUserPermissionRequest::getTid() const {
  return tid_;
}

void GrantUserPermissionRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string GrantUserPermissionRequest::getTableId() const {
  return tableId_;
}

void GrantUserPermissionRequest::setTableId(const std::string &tableId) {
  tableId_ = tableId;
  setParameter(std::string("TableId"), tableId);
}

std::string GrantUserPermissionRequest::getTableName() const {
  return tableName_;
}

void GrantUserPermissionRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

std::string GrantUserPermissionRequest::getPermTypes() const {
  return permTypes_;
}

void GrantUserPermissionRequest::setPermTypes(const std::string &permTypes) {
  permTypes_ = permTypes;
  setParameter(std::string("PermTypes"), permTypes);
}

std::string GrantUserPermissionRequest::getDsType() const {
  return dsType_;
}

void GrantUserPermissionRequest::setDsType(const std::string &dsType) {
  dsType_ = dsType;
  setParameter(std::string("DsType"), dsType);
}

long GrantUserPermissionRequest::getInstanceId() const {
  return instanceId_;
}

void GrantUserPermissionRequest::setInstanceId(long instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

std::string GrantUserPermissionRequest::getDbId() const {
  return dbId_;
}

void GrantUserPermissionRequest::setDbId(const std::string &dbId) {
  dbId_ = dbId;
  setParameter(std::string("DbId"), dbId);
}

bool GrantUserPermissionRequest::getLogic() const {
  return logic_;
}

void GrantUserPermissionRequest::setLogic(bool logic) {
  logic_ = logic;
  setParameter(std::string("Logic"), logic ? "true" : "false");
}

