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

#include <alibabacloud/facebody/model/DeleteFaceEntityRequest.h>

using AlibabaCloud::Facebody::Model::DeleteFaceEntityRequest;

DeleteFaceEntityRequest::DeleteFaceEntityRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "DeleteFaceEntity") {
  setMethod(HttpRequest::Method::Post);
}

DeleteFaceEntityRequest::~DeleteFaceEntityRequest() {}

std::string DeleteFaceEntityRequest::getEntityId() const {
  return entityId_;
}

void DeleteFaceEntityRequest::setEntityId(const std::string &entityId) {
  entityId_ = entityId;
  setBodyParameter(std::string("EntityId"), entityId);
}

bool DeleteFaceEntityRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void DeleteFaceEntityRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string DeleteFaceEntityRequest::getOssFile() const {
  return ossFile_;
}

void DeleteFaceEntityRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string DeleteFaceEntityRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void DeleteFaceEntityRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string DeleteFaceEntityRequest::getDbName() const {
  return dbName_;
}

void DeleteFaceEntityRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setBodyParameter(std::string("DbName"), dbName);
}

