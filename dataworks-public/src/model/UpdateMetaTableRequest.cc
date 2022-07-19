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

#include <alibabacloud/dataworks-public/model/UpdateMetaTableRequest.h>

using AlibabaCloud::Dataworks_public::Model::UpdateMetaTableRequest;

UpdateMetaTableRequest::UpdateMetaTableRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "UpdateMetaTable") {
  setMethod(HttpRequest::Method::Post);
}

UpdateMetaTableRequest::~UpdateMetaTableRequest() {}

std::string UpdateMetaTableRequest::getSchema() const {
  return schema_;
}

void UpdateMetaTableRequest::setSchema(const std::string &schema) {
  schema_ = schema;
  setParameter(std::string("Schema"), schema);
}

int UpdateMetaTableRequest::getVisibility() const {
  return visibility_;
}

void UpdateMetaTableRequest::setVisibility(int visibility) {
  visibility_ = visibility;
  setParameter(std::string("Visibility"), std::to_string(visibility));
}

std::string UpdateMetaTableRequest::getCaption() const {
  return caption_;
}

void UpdateMetaTableRequest::setCaption(const std::string &caption) {
  caption_ = caption;
  setParameter(std::string("Caption"), caption);
}

std::string UpdateMetaTableRequest::getNewOwnerId() const {
  return newOwnerId_;
}

void UpdateMetaTableRequest::setNewOwnerId(const std::string &newOwnerId) {
  newOwnerId_ = newOwnerId;
  setParameter(std::string("NewOwnerId"), newOwnerId);
}

std::string UpdateMetaTableRequest::getTableGuid() const {
  return tableGuid_;
}

void UpdateMetaTableRequest::setTableGuid(const std::string &tableGuid) {
  tableGuid_ = tableGuid;
  setParameter(std::string("TableGuid"), tableGuid);
}

std::string UpdateMetaTableRequest::getAddedLabels() const {
  return addedLabels_;
}

void UpdateMetaTableRequest::setAddedLabels(const std::string &addedLabels) {
  addedLabels_ = addedLabels;
  setBodyParameter(std::string("AddedLabels"), addedLabels);
}

std::string UpdateMetaTableRequest::getRemovedLabels() const {
  return removedLabels_;
}

void UpdateMetaTableRequest::setRemovedLabels(const std::string &removedLabels) {
  removedLabels_ = removedLabels;
  setBodyParameter(std::string("RemovedLabels"), removedLabels);
}

int UpdateMetaTableRequest::getEnvType() const {
  return envType_;
}

void UpdateMetaTableRequest::setEnvType(int envType) {
  envType_ = envType;
  setParameter(std::string("EnvType"), std::to_string(envType));
}

std::string UpdateMetaTableRequest::getTableName() const {
  return tableName_;
}

void UpdateMetaTableRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

long UpdateMetaTableRequest::getProjectId() const {
  return projectId_;
}

void UpdateMetaTableRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

long UpdateMetaTableRequest::getCategoryId() const {
  return categoryId_;
}

void UpdateMetaTableRequest::setCategoryId(long categoryId) {
  categoryId_ = categoryId;
  setParameter(std::string("CategoryId"), std::to_string(categoryId));
}

