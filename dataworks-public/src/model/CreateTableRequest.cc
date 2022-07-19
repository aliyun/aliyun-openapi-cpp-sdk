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

#include <alibabacloud/dataworks-public/model/CreateTableRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateTableRequest;

CreateTableRequest::CreateTableRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateTable") {
  setMethod(HttpRequest::Method::Post);
}

CreateTableRequest::~CreateTableRequest() {}

std::string CreateTableRequest::getSchema() const {
  return schema_;
}

void CreateTableRequest::setSchema(const std::string &schema) {
  schema_ = schema;
  setParameter(std::string("Schema"), schema);
}

std::string CreateTableRequest::getClientToken() const {
  return clientToken_;
}

void CreateTableRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<CreateTableRequest::Columns> CreateTableRequest::getColumns() const {
  return columns_;
}

void CreateTableRequest::setColumns(const std::vector<CreateTableRequest::Columns> &columns) {
  columns_ = columns;
  for(int dep1 = 0; dep1 != columns.size(); dep1++) {
  auto columnsObj = columns.at(dep1);
  std::string columnsObjStr = std::string("Columns") + "." + std::to_string(dep1 + 1);
    setBodyParameter(columnsObjStr + ".SeqNumber", std::to_string(columnsObj.seqNumber));
    setBodyParameter(columnsObjStr + ".IsPartitionCol", columnsObj.isPartitionCol ? "true" : "false");
    setBodyParameter(columnsObjStr + ".ColumnNameCn", columnsObj.columnNameCn);
    setBodyParameter(columnsObjStr + ".Length", std::to_string(columnsObj.length));
    setBodyParameter(columnsObjStr + ".Comment", columnsObj.comment);
    setBodyParameter(columnsObjStr + ".ColumnName", columnsObj.columnName);
    setBodyParameter(columnsObjStr + ".ColumnType", columnsObj.columnType);
  }
}

int CreateTableRequest::getLifeCycle() const {
  return lifeCycle_;
}

void CreateTableRequest::setLifeCycle(int lifeCycle) {
  lifeCycle_ = lifeCycle;
  setParameter(std::string("LifeCycle"), std::to_string(lifeCycle));
}

std::vector<CreateTableRequest::Themes> CreateTableRequest::getThemes() const {
  return themes_;
}

void CreateTableRequest::setThemes(const std::vector<CreateTableRequest::Themes> &themes) {
  themes_ = themes;
  for(int dep1 = 0; dep1 != themes.size(); dep1++) {
  auto themesObj = themes.at(dep1);
  std::string themesObjStr = std::string("Themes") + "." + std::to_string(dep1 + 1);
    setBodyParameter(themesObjStr + ".ThemeLevel", std::to_string(themesObj.themeLevel));
    setBodyParameter(themesObjStr + ".ThemeId", std::to_string(themesObj.themeId));
  }
}

long CreateTableRequest::getLogicalLevelId() const {
  return logicalLevelId_;
}

void CreateTableRequest::setLogicalLevelId(long logicalLevelId) {
  logicalLevelId_ = logicalLevelId;
  setParameter(std::string("LogicalLevelId"), std::to_string(logicalLevelId));
}

std::string CreateTableRequest::getEndpoint() const {
  return endpoint_;
}

void CreateTableRequest::setEndpoint(const std::string &endpoint) {
  endpoint_ = endpoint;
  setBodyParameter(std::string("Endpoint"), endpoint);
}

int CreateTableRequest::getEnvType() const {
  return envType_;
}

void CreateTableRequest::setEnvType(int envType) {
  envType_ = envType;
  setBodyParameter(std::string("EnvType"), std::to_string(envType));
}

int CreateTableRequest::getHasPart() const {
  return hasPart_;
}

void CreateTableRequest::setHasPart(int hasPart) {
  hasPart_ = hasPart;
  setParameter(std::string("HasPart"), std::to_string(hasPart));
}

std::string CreateTableRequest::getTableName() const {
  return tableName_;
}

void CreateTableRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

std::string CreateTableRequest::getAppGuid() const {
  return appGuid_;
}

void CreateTableRequest::setAppGuid(const std::string &appGuid) {
  appGuid_ = appGuid;
  setParameter(std::string("AppGuid"), appGuid);
}

long CreateTableRequest::getProjectId() const {
  return projectId_;
}

void CreateTableRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

long CreateTableRequest::getCategoryId() const {
  return categoryId_;
}

void CreateTableRequest::setCategoryId(long categoryId) {
  categoryId_ = categoryId;
  setParameter(std::string("CategoryId"), std::to_string(categoryId));
}

int CreateTableRequest::getVisibility() const {
  return visibility_;
}

void CreateTableRequest::setVisibility(int visibility) {
  visibility_ = visibility;
  setParameter(std::string("Visibility"), std::to_string(visibility));
}

long CreateTableRequest::getPhysicsLevelId() const {
  return physicsLevelId_;
}

void CreateTableRequest::setPhysicsLevelId(long physicsLevelId) {
  physicsLevelId_ = physicsLevelId;
  setParameter(std::string("PhysicsLevelId"), std::to_string(physicsLevelId));
}

std::string CreateTableRequest::getOwnerId() const {
  return ownerId_;
}

void CreateTableRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

int CreateTableRequest::getIsView() const {
  return isView_;
}

void CreateTableRequest::setIsView(int isView) {
  isView_ = isView;
  setParameter(std::string("IsView"), std::to_string(isView));
}

std::string CreateTableRequest::getExternalTableType() const {
  return externalTableType_;
}

void CreateTableRequest::setExternalTableType(const std::string &externalTableType) {
  externalTableType_ = externalTableType;
  setParameter(std::string("ExternalTableType"), externalTableType);
}

std::string CreateTableRequest::getLocation() const {
  return location_;
}

void CreateTableRequest::setLocation(const std::string &location) {
  location_ = location;
  setParameter(std::string("Location"), location);
}

std::string CreateTableRequest::getComment() const {
  return comment_;
}

void CreateTableRequest::setComment(const std::string &comment) {
  comment_ = comment;
  setParameter(std::string("Comment"), comment);
}

