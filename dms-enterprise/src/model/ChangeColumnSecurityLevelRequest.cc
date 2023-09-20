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

#include <alibabacloud/dms-enterprise/model/ChangeColumnSecurityLevelRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ChangeColumnSecurityLevelRequest;

ChangeColumnSecurityLevelRequest::ChangeColumnSecurityLevelRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ChangeColumnSecurityLevel") {
  setMethod(HttpRequest::Method::Post);
}

ChangeColumnSecurityLevelRequest::~ChangeColumnSecurityLevelRequest() {}

std::string ChangeColumnSecurityLevelRequest::getNewSensitivityLevel() const {
  return newSensitivityLevel_;
}

void ChangeColumnSecurityLevelRequest::setNewSensitivityLevel(const std::string &newSensitivityLevel) {
  newSensitivityLevel_ = newSensitivityLevel;
  setParameter(std::string("NewSensitivityLevel"), newSensitivityLevel);
}

long ChangeColumnSecurityLevelRequest::getTid() const {
  return tid_;
}

void ChangeColumnSecurityLevelRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string ChangeColumnSecurityLevelRequest::getTableName() const {
  return tableName_;
}

void ChangeColumnSecurityLevelRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

std::string ChangeColumnSecurityLevelRequest::getSchemaName() const {
  return schemaName_;
}

void ChangeColumnSecurityLevelRequest::setSchemaName(const std::string &schemaName) {
  schemaName_ = schemaName;
  setParameter(std::string("SchemaName"), schemaName);
}

bool ChangeColumnSecurityLevelRequest::getIsLogic() const {
  return isLogic_;
}

void ChangeColumnSecurityLevelRequest::setIsLogic(bool isLogic) {
  isLogic_ = isLogic;
  setParameter(std::string("IsLogic"), isLogic ? "true" : "false");
}

std::string ChangeColumnSecurityLevelRequest::getColumnName() const {
  return columnName_;
}

void ChangeColumnSecurityLevelRequest::setColumnName(const std::string &columnName) {
  columnName_ = columnName;
  setParameter(std::string("ColumnName"), columnName);
}

long ChangeColumnSecurityLevelRequest::getDbId() const {
  return dbId_;
}

void ChangeColumnSecurityLevelRequest::setDbId(long dbId) {
  dbId_ = dbId;
  setParameter(std::string("DbId"), std::to_string(dbId));
}

