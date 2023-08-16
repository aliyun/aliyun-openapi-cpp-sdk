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

#include <alibabacloud/csas/model/ListDynamicRoutesRequest.h>

using AlibabaCloud::Csas::Model::ListDynamicRoutesRequest;

ListDynamicRoutesRequest::ListDynamicRoutesRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ListDynamicRoutes") {
  setMethod(HttpRequest::Method::Get);
}

ListDynamicRoutesRequest::~ListDynamicRoutesRequest() {}

std::string ListDynamicRoutesRequest::getSourceIp() const {
  return sourceIp_;
}

void ListDynamicRoutesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ListDynamicRoutesRequest::getPageSize() const {
  return pageSize_;
}

void ListDynamicRoutesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListDynamicRoutesRequest::getApplicationId() const {
  return applicationId_;
}

void ListDynamicRoutesRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::vector<ListDynamicRoutesRequest::std::string> ListDynamicRoutesRequest::getDynamicRouteIds() const {
  return dynamicRouteIds_;
}

void ListDynamicRoutesRequest::setDynamicRouteIds(const std::vector<ListDynamicRoutesRequest::std::string> &dynamicRouteIds) {
  dynamicRouteIds_ = dynamicRouteIds;
  for(int dep1 = 0; dep1 != dynamicRouteIds.size(); dep1++) {
    setParameter(std::string("DynamicRouteIds") + "." + std::to_string(dep1 + 1), dynamicRouteIds[dep1]);
  }
}

std::string ListDynamicRoutesRequest::getTagId() const {
  return tagId_;
}

void ListDynamicRoutesRequest::setTagId(const std::string &tagId) {
  tagId_ = tagId;
  setParameter(std::string("TagId"), tagId);
}

int ListDynamicRoutesRequest::getCurrentPage() const {
  return currentPage_;
}

void ListDynamicRoutesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::vector<ListDynamicRoutesRequest::std::string> ListDynamicRoutesRequest::getRegionIds() const {
  return regionIds_;
}

void ListDynamicRoutesRequest::setRegionIds(const std::vector<ListDynamicRoutesRequest::std::string> &regionIds) {
  regionIds_ = regionIds;
  for(int dep1 = 0; dep1 != regionIds.size(); dep1++) {
    setParameter(std::string("RegionIds") + "." + std::to_string(dep1 + 1), regionIds[dep1]);
  }
}

std::string ListDynamicRoutesRequest::getNextHop() const {
  return nextHop_;
}

void ListDynamicRoutesRequest::setNextHop(const std::string &nextHop) {
  nextHop_ = nextHop;
  setParameter(std::string("NextHop"), nextHop);
}

std::string ListDynamicRoutesRequest::getName() const {
  return name_;
}

void ListDynamicRoutesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListDynamicRoutesRequest::getStatus() const {
  return status_;
}

void ListDynamicRoutesRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

