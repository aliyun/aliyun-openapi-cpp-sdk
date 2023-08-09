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

#include <alibabacloud/config/model/ListRemediationsRequest.h>

using AlibabaCloud::Config::Model::ListRemediationsRequest;

ListRemediationsRequest::ListRemediationsRequest()
    : RpcServiceRequest("config", "2020-09-07", "ListRemediations") {
  setMethod(HttpRequest::Method::Post);
}

ListRemediationsRequest::~ListRemediationsRequest() {}

std::string ListRemediationsRequest::getConfigRuleIds() const {
  return configRuleIds_;
}

void ListRemediationsRequest::setConfigRuleIds(const std::string &configRuleIds) {
  configRuleIds_ = configRuleIds;
  setParameter(std::string("ConfigRuleIds"), configRuleIds);
}

long ListRemediationsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListRemediationsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListRemediationsRequest::getPageSize() const {
  return pageSize_;
}

void ListRemediationsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

