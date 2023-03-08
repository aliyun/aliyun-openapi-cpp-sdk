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

#include <alibabacloud/adb/model/ListSparkAppsRequest.h>

using AlibabaCloud::Adb::Model::ListSparkAppsRequest;

ListSparkAppsRequest::ListSparkAppsRequest()
    : RpcServiceRequest("adb", "2021-12-01", "ListSparkApps") {
  setMethod(HttpRequest::Method::Post);
}

ListSparkAppsRequest::~ListSparkAppsRequest() {}

std::string ListSparkAppsRequest::getResourceGroupName() const {
  return resourceGroupName_;
}

void ListSparkAppsRequest::setResourceGroupName(const std::string &resourceGroupName) {
  resourceGroupName_ = resourceGroupName;
  setParameter(std::string("ResourceGroupName"), resourceGroupName);
}

std::string ListSparkAppsRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ListSparkAppsRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ListSparkAppsRequest::getOrderBy() const {
  return orderBy_;
}

void ListSparkAppsRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

std::string ListSparkAppsRequest::getFilters() const {
  return filters_;
}

void ListSparkAppsRequest::setFilters(const std::string &filters) {
  filters_ = filters;
  setParameter(std::string("Filters"), filters);
}

long ListSparkAppsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListSparkAppsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListSparkAppsRequest::getPageSize() const {
  return pageSize_;
}

void ListSparkAppsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

