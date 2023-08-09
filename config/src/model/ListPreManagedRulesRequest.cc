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

#include <alibabacloud/config/model/ListPreManagedRulesRequest.h>

using AlibabaCloud::Config::Model::ListPreManagedRulesRequest;

ListPreManagedRulesRequest::ListPreManagedRulesRequest()
    : RpcServiceRequest("config", "2020-09-07", "ListPreManagedRules") {
  setMethod(HttpRequest::Method::Post);
}

ListPreManagedRulesRequest::~ListPreManagedRulesRequest() {}

std::vector<ListPreManagedRulesRequest::std::string> ListPreManagedRulesRequest::getResourceTypes() const {
  return resourceTypes_;
}

void ListPreManagedRulesRequest::setResourceTypes(const std::vector<ListPreManagedRulesRequest::std::string> &resourceTypes) {
  resourceTypes_ = resourceTypes;
  for(int dep1 = 0; dep1 != resourceTypes.size(); dep1++) {
    setBodyParameter(std::string("ResourceTypes") + "." + std::to_string(dep1 + 1), resourceTypes[dep1]);
  }
}

long ListPreManagedRulesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListPreManagedRulesRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListPreManagedRulesRequest::getPageSize() const {
  return pageSize_;
}

void ListPreManagedRulesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListPreManagedRulesRequest::getResourceTypeFormat() const {
  return resourceTypeFormat_;
}

void ListPreManagedRulesRequest::setResourceTypeFormat(const std::string &resourceTypeFormat) {
  resourceTypeFormat_ = resourceTypeFormat;
  setBodyParameter(std::string("ResourceTypeFormat"), resourceTypeFormat);
}

