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

#include <alibabacloud/arms/model/ListActivatedAlertsRequest.h>

using AlibabaCloud::ARMS::Model::ListActivatedAlertsRequest;

ListActivatedAlertsRequest::ListActivatedAlertsRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListActivatedAlerts") {
  setMethod(HttpRequest::Method::Post);
}

ListActivatedAlertsRequest::~ListActivatedAlertsRequest() {}

std::string ListActivatedAlertsRequest::getFilter() const {
  return filter_;
}

void ListActivatedAlertsRequest::setFilter(const std::string &filter) {
  filter_ = filter;
  setParameter(std::string("Filter"), filter);
}

std::string ListActivatedAlertsRequest::getRegionId() const {
  return regionId_;
}

void ListActivatedAlertsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListActivatedAlertsRequest::getPageSize() const {
  return pageSize_;
}

void ListActivatedAlertsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListActivatedAlertsRequest::getCurrentPage() const {
  return currentPage_;
}

void ListActivatedAlertsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListActivatedAlertsRequest::getProxyUserId() const {
  return proxyUserId_;
}

void ListActivatedAlertsRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

