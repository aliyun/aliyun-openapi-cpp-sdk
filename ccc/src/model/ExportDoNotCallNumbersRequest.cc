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

#include <alibabacloud/ccc/model/ExportDoNotCallNumbersRequest.h>

using AlibabaCloud::CCC::Model::ExportDoNotCallNumbersRequest;

ExportDoNotCallNumbersRequest::ExportDoNotCallNumbersRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ExportDoNotCallNumbers") {
  setMethod(HttpRequest::Method::Post);
}

ExportDoNotCallNumbersRequest::~ExportDoNotCallNumbersRequest() {}

std::string ExportDoNotCallNumbersRequest::getSearchPattern() const {
  return searchPattern_;
}

void ExportDoNotCallNumbersRequest::setSearchPattern(const std::string &searchPattern) {
  searchPattern_ = searchPattern;
  setParameter(std::string("SearchPattern"), searchPattern);
}

std::string ExportDoNotCallNumbersRequest::getInstanceId() const {
  return instanceId_;
}

void ExportDoNotCallNumbersRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ExportDoNotCallNumbersRequest::getScope() const {
  return scope_;
}

void ExportDoNotCallNumbersRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

