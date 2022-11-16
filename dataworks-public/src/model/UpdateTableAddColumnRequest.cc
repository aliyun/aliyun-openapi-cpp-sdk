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

#include <alibabacloud/dataworks-public/model/UpdateTableAddColumnRequest.h>

using AlibabaCloud::Dataworks_public::Model::UpdateTableAddColumnRequest;

UpdateTableAddColumnRequest::UpdateTableAddColumnRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "UpdateTableAddColumn") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTableAddColumnRequest::~UpdateTableAddColumnRequest() {}

std::vector<UpdateTableAddColumnRequest::Column> UpdateTableAddColumnRequest::getColumn() const {
  return column_;
}

void UpdateTableAddColumnRequest::setColumn(const std::vector<UpdateTableAddColumnRequest::Column> &column) {
  column_ = column;
  for(int dep1 = 0; dep1 != column.size(); dep1++) {
  auto columnObj = column.at(dep1);
  std::string columnObjStr = std::string("Column") + "." + std::to_string(dep1 + 1);
    setBodyParameter(columnObjStr + ".ColumnNameCn", columnObj.columnNameCn);
    setBodyParameter(columnObjStr + ".Comment", columnObj.comment);
    setBodyParameter(columnObjStr + ".ColumnName", columnObj.columnName);
    setBodyParameter(columnObjStr + ".ColumnType", columnObj.columnType);
  }
}

std::string UpdateTableAddColumnRequest::getTableGuid() const {
  return tableGuid_;
}

void UpdateTableAddColumnRequest::setTableGuid(const std::string &tableGuid) {
  tableGuid_ = tableGuid;
  setParameter(std::string("TableGuid"), tableGuid);
}

