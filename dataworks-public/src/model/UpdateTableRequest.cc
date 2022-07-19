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

#include <alibabacloud/dataworks-public/model/UpdateTableRequest.h>

using AlibabaCloud::Dataworks_public::Model::UpdateTableRequest;

UpdateTableRequest::UpdateTableRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "UpdateTable") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTableRequest::~UpdateTableRequest() {}

std::string UpdateTableRequest::getSchema() const {
  return schema_;
}

void UpdateTableRequest::setSchema(const std::string &schema) {
  schema_ = schema;
  setParameter(std::string("Schema"), schema);
}

std::vector<UpdateTableRequest::Columns> UpdateTableRequest::getColumns() const {
  return columns_;
}

void UpdateTableRequest::setColumns(const std::vector<UpdateTableRequest::Columns> &columns) {
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

int UpdateTableRequest::getLifeCycle() const {
  return lifeCycle_;
}

void UpdateTableRequest::setLifeCycle(int lifeCycle) {
  lifeCycle_ = lifeCycle;
  setParameter(std::string("LifeCycle"), std::to_string(lifeCycle));
}

std::vector<UpdateTableRequest::Themes> UpdateTableRequest::getThemes() const {
  return themes_;
}

void UpdateTableRequest::setThemes(const std::vector<UpdateTableRequest::Themes> &themes) {
  themes_ = themes;
  for(int dep1 = 0; dep1 != themes.size(); dep1++) {
  auto themesObj = themes.at(dep1);
  std::string themesObjStr = std::string("Themes") + "." + std::to_string(dep1 + 1);
    setBodyParameter(themesObjStr + ".ThemeLevel", std::to_string(themesObj.themeLevel));
    setBodyParameter(themesObjStr + ".ThemeId", std::to_string(themesObj.themeId));
  }
}

long UpdateTableRequest::getLogicalLevelId() const {
  return logicalLevelId_;
}

void UpdateTableRequest::setLogicalLevelId(long logicalLevelId) {
  logicalLevelId_ = logicalLevelId;
  setParameter(std::string("LogicalLevelId"), std::to_string(logicalLevelId));
}

std::string UpdateTableRequest::getEndpoint() const {
  return endpoint_;
}

void UpdateTableRequest::setEndpoint(const std::string &endpoint) {
  endpoint_ = endpoint;
  setBodyParameter(std::string("Endpoint"), endpoint);
}

int UpdateTableRequest::getEnvType() const {
  return envType_;
}

void UpdateTableRequest::setEnvType(int envType) {
  envType_ = envType;
  setBodyParameter(std::string("EnvType"), std::to_string(envType));
}

int UpdateTableRequest::getHasPart() const {
  return hasPart_;
}

void UpdateTableRequest::setHasPart(int hasPart) {
  hasPart_ = hasPart;
  setParameter(std::string("HasPart"), std::to_string(hasPart));
}

std::string UpdateTableRequest::getTableName() const {
  return tableName_;
}

void UpdateTableRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

std::string UpdateTableRequest::getAppGuid() const {
  return appGuid_;
}

void UpdateTableRequest::setAppGuid(const std::string &appGuid) {
  appGuid_ = appGuid;
  setParameter(std::string("AppGuid"), appGuid);
}

long UpdateTableRequest::getProjectId() const {
  return projectId_;
}

void UpdateTableRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

long UpdateTableRequest::getCategoryId() const {
  return categoryId_;
}

void UpdateTableRequest::setCategoryId(long categoryId) {
  categoryId_ = categoryId;
  setParameter(std::string("CategoryId"), std::to_string(categoryId));
}

int UpdateTableRequest::getVisibility() const {
  return visibility_;
}

void UpdateTableRequest::setVisibility(int visibility) {
  visibility_ = visibility;
  setParameter(std::string("Visibility"), std::to_string(visibility));
}

long UpdateTableRequest::getPhysicsLevelId() const {
  return physicsLevelId_;
}

void UpdateTableRequest::setPhysicsLevelId(long physicsLevelId) {
  physicsLevelId_ = physicsLevelId;
  setParameter(std::string("PhysicsLevelId"), std::to_string(physicsLevelId));
}

std::string UpdateTableRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateTableRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

int UpdateTableRequest::getIsView() const {
  return isView_;
}

void UpdateTableRequest::setIsView(int isView) {
  isView_ = isView;
  setParameter(std::string("IsView"), std::to_string(isView));
}

std::string UpdateTableRequest::getExternalTableType() const {
  return externalTableType_;
}

void UpdateTableRequest::setExternalTableType(const std::string &externalTableType) {
  externalTableType_ = externalTableType;
  setParameter(std::string("ExternalTableType"), externalTableType);
}

std::string UpdateTableRequest::getLocation() const {
  return location_;
}

void UpdateTableRequest::setLocation(const std::string &location) {
  location_ = location;
  setParameter(std::string("Location"), location);
}

std::string UpdateTableRequest::getComment() const {
  return comment_;
}

void UpdateTableRequest::setComment(const std::string &comment) {
  comment_ = comment;
  setParameter(std::string("Comment"), comment);
}

bool UpdateTableRequest::getCreateIfNotExists() const {
  return createIfNotExists_;
}

void UpdateTableRequest::setCreateIfNotExists(bool createIfNotExists) {
  createIfNotExists_ = createIfNotExists;
  setParameter(std::string("CreateIfNotExists"), createIfNotExists ? "true" : "false");
}

