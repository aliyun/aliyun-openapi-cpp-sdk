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

#include <alibabacloud/eds-user/model/DescribeUsersRequest.h>

using AlibabaCloud::Eds_user::Model::DescribeUsersRequest;

DescribeUsersRequest::DescribeUsersRequest()
    : RpcServiceRequest("eds-user", "2021-03-08", "DescribeUsers") {
  setMethod(HttpRequest::Method::Post);
}

DescribeUsersRequest::~DescribeUsersRequest() {}

bool DescribeUsersRequest::getIsQueryAllSubOrgs() const {
  return isQueryAllSubOrgs_;
}

void DescribeUsersRequest::setIsQueryAllSubOrgs(bool isQueryAllSubOrgs) {
  isQueryAllSubOrgs_ = isQueryAllSubOrgs;
  setBodyParameter(std::string("IsQueryAllSubOrgs"), isQueryAllSubOrgs ? "true" : "false");
}

std::vector<std::string> DescribeUsersRequest::getEndUserIds() const {
  return endUserIds_;
}

void DescribeUsersRequest::setEndUserIds(const std::vector<std::string> &endUserIds) {
  endUserIds_ = endUserIds;
}

std::vector<std::string> DescribeUsersRequest::getExcludeEndUserIds() const {
  return excludeEndUserIds_;
}

void DescribeUsersRequest::setExcludeEndUserIds(const std::vector<std::string> &excludeEndUserIds) {
  excludeEndUserIds_ = excludeEndUserIds;
}

std::string DescribeUsersRequest::getNextToken() const {
  return nextToken_;
}

void DescribeUsersRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeUsersRequest::getSolutionId() const {
  return solutionId_;
}

void DescribeUsersRequest::setSolutionId(const std::string &solutionId) {
  solutionId_ = solutionId;
  setBodyParameter(std::string("SolutionId"), solutionId);
}

std::map<std::string, bool> DescribeUsersRequest::getFilterWithAssignedResources() const {
  return filterWithAssignedResources_;
}

void DescribeUsersRequest::setFilterWithAssignedResources(const std::map<std::string, bool> &filterWithAssignedResources) {
  filterWithAssignedResources_ = filterWithAssignedResources;
  for(auto const &iter1 : filterWithAssignedResources) {
    setBodyParameter(std::string("FilterWithAssignedResources") + "." + iter1.first, iter1.second ? "true" : "false");
  }
}

std::string DescribeUsersRequest::getGroupId() const {
  return groupId_;
}

void DescribeUsersRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setBodyParameter(std::string("GroupId"), groupId);
}

std::string DescribeUsersRequest::getOrgId() const {
  return orgId_;
}

void DescribeUsersRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

std::map<std::string, std::string> DescribeUsersRequest::getFilterWithAssignedResource() const {
  return filterWithAssignedResource_;
}

void DescribeUsersRequest::setFilterWithAssignedResource(const std::map<std::string, std::string> &filterWithAssignedResource) {
  filterWithAssignedResource_ = filterWithAssignedResource;
  for(auto const &iter1 : filterWithAssignedResource) {
    setParameter(std::string("FilterWithAssignedResource") + "." + iter1.first, iter1.second);
  }
}

std::string DescribeUsersRequest::getFilter() const {
  return filter_;
}

void DescribeUsersRequest::setFilter(const std::string &filter) {
  filter_ = filter;
  setParameter(std::string("Filter"), filter);
}

std::string DescribeUsersRequest::getBizType() const {
  return bizType_;
}

void DescribeUsersRequest::setBizType(const std::string &bizType) {
  bizType_ = bizType;
  setBodyParameter(std::string("BizType"), bizType);
}

long DescribeUsersRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeUsersRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::map<std::string, ObjectOfAny> DescribeUsersRequest::getShowExtras() const {
  return showExtras_;
}

void DescribeUsersRequest::setShowExtras(const std::map<std::string, ObjectOfAny> &showExtras) {
  showExtras_ = showExtras;
  for(auto const &iter1 : showExtras) {
    setBodyParameter(std::string("ShowExtras") + "." + iter1.first, std::to_string(iter1.second));
  }
}

int DescribeUsersRequest::getStatus() const {
  return status_;
}

void DescribeUsersRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

