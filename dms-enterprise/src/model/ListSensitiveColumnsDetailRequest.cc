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

#include <alibabacloud/dms-enterprise/model/ListSensitiveColumnsDetailRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListSensitiveColumnsDetailRequest;

ListSensitiveColumnsDetailRequest::ListSensitiveColumnsDetailRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListSensitiveColumnsDetail") {
  setMethod(HttpRequest::Method::Post);
}

ListSensitiveColumnsDetailRequest::~ListSensitiveColumnsDetailRequest() {}

long ListSensitiveColumnsDetailRequest::getTid() const {
  return tid_;
}

void ListSensitiveColumnsDetailRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string ListSensitiveColumnsDetailRequest::getTableName() const {
  return tableName_;
}

void ListSensitiveColumnsDetailRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

std::string ListSensitiveColumnsDetailRequest::getSchemaName() const {
  return schemaName_;
}

void ListSensitiveColumnsDetailRequest::setSchemaName(const std::string &schemaName) {
  schemaName_ = schemaName;
  setParameter(std::string("SchemaName"), schemaName);
}

std::string ListSensitiveColumnsDetailRequest::getColumnName() const {
  return columnName_;
}

void ListSensitiveColumnsDetailRequest::setColumnName(const std::string &columnName) {
  columnName_ = columnName;
  setParameter(std::string("ColumnName"), columnName);
}

long ListSensitiveColumnsDetailRequest::getDbId() const {
  return dbId_;
}

void ListSensitiveColumnsDetailRequest::setDbId(long dbId) {
  dbId_ = dbId;
  setParameter(std::string("DbId"), std::to_string(dbId));
}

bool ListSensitiveColumnsDetailRequest::getLogic() const {
  return logic_;
}

void ListSensitiveColumnsDetailRequest::setLogic(bool logic) {
  logic_ = logic;
  setParameter(std::string("Logic"), logic ? "true" : "false");
}

