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

#include <alibabacloud/facebody/model/UpdateFaceEntityRequest.h>

using AlibabaCloud::Facebody::Model::UpdateFaceEntityRequest;

UpdateFaceEntityRequest::UpdateFaceEntityRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "UpdateFaceEntity") {
  setMethod(HttpRequest::Method::Post);
}

UpdateFaceEntityRequest::~UpdateFaceEntityRequest() {}

std::string UpdateFaceEntityRequest::getEntityId() const {
  return entityId_;
}

void UpdateFaceEntityRequest::setEntityId(const std::string &entityId) {
  entityId_ = entityId;
  setBodyParameter(std::string("EntityId"), entityId);
}

bool UpdateFaceEntityRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void UpdateFaceEntityRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string UpdateFaceEntityRequest::getOssFile() const {
  return ossFile_;
}

void UpdateFaceEntityRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string UpdateFaceEntityRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void UpdateFaceEntityRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string UpdateFaceEntityRequest::getLabels() const {
  return labels_;
}

void UpdateFaceEntityRequest::setLabels(const std::string &labels) {
  labels_ = labels;
  setBodyParameter(std::string("Labels"), labels);
}

std::string UpdateFaceEntityRequest::getDbName() const {
  return dbName_;
}

void UpdateFaceEntityRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setBodyParameter(std::string("DbName"), dbName);
}

