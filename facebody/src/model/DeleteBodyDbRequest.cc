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

#include <alibabacloud/facebody/model/DeleteBodyDbRequest.h>

using AlibabaCloud::Facebody::Model::DeleteBodyDbRequest;

DeleteBodyDbRequest::DeleteBodyDbRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "DeleteBodyDb") {
  setMethod(HttpRequest::Method::Post);
}

DeleteBodyDbRequest::~DeleteBodyDbRequest() {}

bool DeleteBodyDbRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void DeleteBodyDbRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

long DeleteBodyDbRequest::getId() const {
  return id_;
}

void DeleteBodyDbRequest::setId(long id) {
  id_ = id;
  setBodyParameter(std::string("Id"), std::to_string(id));
}

std::string DeleteBodyDbRequest::getOssFile() const {
  return ossFile_;
}

void DeleteBodyDbRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string DeleteBodyDbRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void DeleteBodyDbRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

