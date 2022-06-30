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

#include <alibabacloud/facebody/model/ListBodyPersonRequest.h>

using AlibabaCloud::Facebody::Model::ListBodyPersonRequest;

ListBodyPersonRequest::ListBodyPersonRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "ListBodyPerson") {
  setMethod(HttpRequest::Method::Get);
}

ListBodyPersonRequest::~ListBodyPersonRequest() {}

bool ListBodyPersonRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void ListBodyPersonRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

long ListBodyPersonRequest::getLimit() const {
  return limit_;
}

void ListBodyPersonRequest::setLimit(long limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), std::to_string(limit));
}

std::string ListBodyPersonRequest::getOssFile() const {
  return ossFile_;
}

void ListBodyPersonRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

long ListBodyPersonRequest::getOffset() const {
  return offset_;
}

void ListBodyPersonRequest::setOffset(long offset) {
  offset_ = offset;
  setParameter(std::string("Offset"), std::to_string(offset));
}

std::string ListBodyPersonRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void ListBodyPersonRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

long ListBodyPersonRequest::getDbId() const {
  return dbId_;
}

void ListBodyPersonRequest::setDbId(long dbId) {
  dbId_ = dbId;
  setParameter(std::string("DbId"), std::to_string(dbId));
}

