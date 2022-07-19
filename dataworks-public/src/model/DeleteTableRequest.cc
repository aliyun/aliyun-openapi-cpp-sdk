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

#include <alibabacloud/dataworks-public/model/DeleteTableRequest.h>

using AlibabaCloud::Dataworks_public::Model::DeleteTableRequest;

DeleteTableRequest::DeleteTableRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "DeleteTable") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTableRequest::~DeleteTableRequest() {}

std::string DeleteTableRequest::getSchema() const {
  return schema_;
}

void DeleteTableRequest::setSchema(const std::string &schema) {
  schema_ = schema;
  setParameter(std::string("Schema"), schema);
}

int DeleteTableRequest::getEnvType() const {
  return envType_;
}

void DeleteTableRequest::setEnvType(int envType) {
  envType_ = envType;
  setParameter(std::string("EnvType"), std::to_string(envType));
}

std::string DeleteTableRequest::getTableName() const {
  return tableName_;
}

void DeleteTableRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

std::string DeleteTableRequest::getAppGuid() const {
  return appGuid_;
}

void DeleteTableRequest::setAppGuid(const std::string &appGuid) {
  appGuid_ = appGuid;
  setParameter(std::string("AppGuid"), appGuid);
}

long DeleteTableRequest::getProjectId() const {
  return projectId_;
}

void DeleteTableRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

