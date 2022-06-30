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

#include <alibabacloud/facebody/model/DeleteBodyPersonRequest.h>

using AlibabaCloud::Facebody::Model::DeleteBodyPersonRequest;

DeleteBodyPersonRequest::DeleteBodyPersonRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "DeleteBodyPerson") {
  setMethod(HttpRequest::Method::Post);
}

DeleteBodyPersonRequest::~DeleteBodyPersonRequest() {}

bool DeleteBodyPersonRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void DeleteBodyPersonRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

long DeleteBodyPersonRequest::getPersonId() const {
  return personId_;
}

void DeleteBodyPersonRequest::setPersonId(long personId) {
  personId_ = personId;
  setBodyParameter(std::string("PersonId"), std::to_string(personId));
}

std::string DeleteBodyPersonRequest::getOssFile() const {
  return ossFile_;
}

void DeleteBodyPersonRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string DeleteBodyPersonRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void DeleteBodyPersonRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

long DeleteBodyPersonRequest::getDbId() const {
  return dbId_;
}

void DeleteBodyPersonRequest::setDbId(long dbId) {
  dbId_ = dbId;
  setBodyParameter(std::string("DbId"), std::to_string(dbId));
}

