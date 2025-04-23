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

#include <alibabacloud/eds-user/model/FilterUsersRequest.h>

using AlibabaCloud::Eds_user::Model::FilterUsersRequest;

FilterUsersRequest::FilterUsersRequest()
    : RpcServiceRequest("eds-user", "2021-03-08", "FilterUsers") {
  setMethod(HttpRequest::Method::Post);
}

FilterUsersRequest::~FilterUsersRequest() {}

bool FilterUsersRequest::getIsQueryAllSubOrgs() const {
  return isQueryAllSubOrgs_;
}

void FilterUsersRequest::setIsQueryAllSubOrgs(bool isQueryAllSubOrgs) {
  isQueryAllSubOrgs_ = isQueryAllSubOrgs;
  setParameter(std::string("IsQueryAllSubOrgs"), isQueryAllSubOrgs ? "true" : "false");
}

FilterUsersRequest::OrderParam FilterUsersRequest::getOrderParam() const {
  return orderParam_;
}

void FilterUsersRequest::setOrderParam(const FilterUsersRequest::OrderParam &orderParam) {
  orderParam_ = orderParam;
  setParameter(std::string("OrderParam") + ".OrderField", orderParam.orderField);
  setParameter(std::string("OrderParam") + ".OrderType", orderParam.orderType);
}

std::vector<std::string> FilterUsersRequest::getExcludeEndUserIds() const {
  return excludeEndUserIds_;
}

void FilterUsersRequest::setExcludeEndUserIds(const std::vector<std::string> &excludeEndUserIds) {
  excludeEndUserIds_ = excludeEndUserIds;
}

std::string FilterUsersRequest::getNextToken() const {
  return nextToken_;
}

void FilterUsersRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

bool FilterUsersRequest::getIncludeDesktopCount() const {
  return includeDesktopCount_;
}

void FilterUsersRequest::setIncludeDesktopCount(bool includeDesktopCount) {
  includeDesktopCount_ = includeDesktopCount;
  setParameter(std::string("IncludeDesktopCount"), includeDesktopCount ? "true" : "false");
}

bool FilterUsersRequest::getIncludeSupportIdps() const {
  return includeSupportIdps_;
}

void FilterUsersRequest::setIncludeSupportIdps(bool includeSupportIdps) {
  includeSupportIdps_ = includeSupportIdps;
  setParameter(std::string("IncludeSupportIdps"), includeSupportIdps ? "true" : "false");
}

std::vector<FilterUsersRequest::PropertyFilterParam> FilterUsersRequest::getPropertyFilterParam() const {
  return propertyFilterParam_;
}

void FilterUsersRequest::setPropertyFilterParam(const std::vector<FilterUsersRequest::PropertyFilterParam> &propertyFilterParam) {
  propertyFilterParam_ = propertyFilterParam;
  for(int dep1 = 0; dep1 != propertyFilterParam.size(); dep1++) {
  auto propertyFilterParamObj = propertyFilterParam.at(dep1);
  std::string propertyFilterParamObjStr = std::string("PropertyFilterParam") + "." + std::to_string(dep1 + 1);
    setParameter(propertyFilterParamObjStr + ".PropertyId", std::to_string(propertyFilterParamObj.propertyId));
    setParameter(propertyFilterParamObjStr + ".PropertyValueIds", propertyFilterParamObj.propertyValueIds);
  }
}

bool FilterUsersRequest::getIncludeOrgInfo() const {
  return includeOrgInfo_;
}

void FilterUsersRequest::setIncludeOrgInfo(bool includeOrgInfo) {
  includeOrgInfo_ = includeOrgInfo;
  setParameter(std::string("IncludeOrgInfo"), includeOrgInfo ? "true" : "false");
}

bool FilterUsersRequest::getIncludeDesktopGroupCount() const {
  return includeDesktopGroupCount_;
}

void FilterUsersRequest::setIncludeDesktopGroupCount(bool includeDesktopGroupCount) {
  includeDesktopGroupCount_ = includeDesktopGroupCount;
  setParameter(std::string("IncludeDesktopGroupCount"), includeDesktopGroupCount ? "true" : "false");
}

std::string FilterUsersRequest::getOrgId() const {
  return orgId_;
}

void FilterUsersRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setParameter(std::string("OrgId"), orgId);
}

std::string FilterUsersRequest::getFilter() const {
  return filter_;
}

void FilterUsersRequest::setFilter(const std::string &filter) {
  filter_ = filter;
  setParameter(std::string("Filter"), filter);
}

std::vector<FilterUsersRequest::PropertyKeyValueFilterParam> FilterUsersRequest::getPropertyKeyValueFilterParam() const {
  return propertyKeyValueFilterParam_;
}

void FilterUsersRequest::setPropertyKeyValueFilterParam(const std::vector<FilterUsersRequest::PropertyKeyValueFilterParam> &propertyKeyValueFilterParam) {
  propertyKeyValueFilterParam_ = propertyKeyValueFilterParam;
  for(int dep1 = 0; dep1 != propertyKeyValueFilterParam.size(); dep1++) {
  auto propertyKeyValueFilterParamObj = propertyKeyValueFilterParam.at(dep1);
  std::string propertyKeyValueFilterParamObjStr = std::string("PropertyKeyValueFilterParam") + "." + std::to_string(dep1 + 1);
    setParameter(propertyKeyValueFilterParamObjStr + ".PropertyKey", propertyKeyValueFilterParamObj.propertyKey);
    setParameter(propertyKeyValueFilterParamObjStr + ".PropertyValues", propertyKeyValueFilterParamObj.propertyValues);
  }
}

std::string FilterUsersRequest::getOwnerType() const {
  return ownerType_;
}

void FilterUsersRequest::setOwnerType(const std::string &ownerType) {
  ownerType_ = ownerType;
  setParameter(std::string("OwnerType"), ownerType);
}

long FilterUsersRequest::getMaxResults() const {
  return maxResults_;
}

void FilterUsersRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

int FilterUsersRequest::getStatus() const {
  return status_;
}

void FilterUsersRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

