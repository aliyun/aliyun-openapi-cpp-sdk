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

#include <alibabacloud/facebody/model/CreateBodyPersonRequest.h>

using AlibabaCloud::Facebody::Model::CreateBodyPersonRequest;

CreateBodyPersonRequest::CreateBodyPersonRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "CreateBodyPerson") {
  setMethod(HttpRequest::Method::Post);
}

CreateBodyPersonRequest::~CreateBodyPersonRequest() {}

bool CreateBodyPersonRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void CreateBodyPersonRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string CreateBodyPersonRequest::getOssFile() const {
  return ossFile_;
}

void CreateBodyPersonRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string CreateBodyPersonRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void CreateBodyPersonRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

long CreateBodyPersonRequest::getDbId() const {
  return dbId_;
}

void CreateBodyPersonRequest::setDbId(long dbId) {
  dbId_ = dbId;
  setBodyParameter(std::string("DbId"), std::to_string(dbId));
}

std::string CreateBodyPersonRequest::getName() const {
  return name_;
}

void CreateBodyPersonRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

