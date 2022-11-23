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

#include <alibabacloud/dms-enterprise/model/RevokeUserPermissionRequest.h>

using AlibabaCloud::Dms_enterprise::Model::RevokeUserPermissionRequest;

RevokeUserPermissionRequest::RevokeUserPermissionRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "RevokeUserPermission") {
  setMethod(HttpRequest::Method::Post);
}

RevokeUserPermissionRequest::~RevokeUserPermissionRequest() {}

std::string RevokeUserPermissionRequest::getUserId() const {
  return userId_;
}

void RevokeUserPermissionRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

long RevokeUserPermissionRequest::getTid() const {
  return tid_;
}

void RevokeUserPermissionRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string RevokeUserPermissionRequest::getTableId() const {
  return tableId_;
}

void RevokeUserPermissionRequest::setTableId(const std::string &tableId) {
  tableId_ = tableId;
  setParameter(std::string("TableId"), tableId);
}

std::string RevokeUserPermissionRequest::getTableName() const {
  return tableName_;
}

void RevokeUserPermissionRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

std::string RevokeUserPermissionRequest::getPermTypes() const {
  return permTypes_;
}

void RevokeUserPermissionRequest::setPermTypes(const std::string &permTypes) {
  permTypes_ = permTypes;
  setParameter(std::string("PermTypes"), permTypes);
}

std::string RevokeUserPermissionRequest::getUserAccessId() const {
  return userAccessId_;
}

void RevokeUserPermissionRequest::setUserAccessId(const std::string &userAccessId) {
  userAccessId_ = userAccessId;
  setParameter(std::string("UserAccessId"), userAccessId);
}

std::string RevokeUserPermissionRequest::getDsType() const {
  return dsType_;
}

void RevokeUserPermissionRequest::setDsType(const std::string &dsType) {
  dsType_ = dsType;
  setParameter(std::string("DsType"), dsType);
}

long RevokeUserPermissionRequest::getInstanceId() const {
  return instanceId_;
}

void RevokeUserPermissionRequest::setInstanceId(long instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

std::string RevokeUserPermissionRequest::getDbId() const {
  return dbId_;
}

void RevokeUserPermissionRequest::setDbId(const std::string &dbId) {
  dbId_ = dbId;
  setParameter(std::string("DbId"), dbId);
}

bool RevokeUserPermissionRequest::getLogic() const {
  return logic_;
}

void RevokeUserPermissionRequest::setLogic(bool logic) {
  logic_ = logic;
  setParameter(std::string("Logic"), logic ? "true" : "false");
}

