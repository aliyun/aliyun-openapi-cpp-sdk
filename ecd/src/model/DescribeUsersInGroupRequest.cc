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

#include <alibabacloud/ecd/model/DescribeUsersInGroupRequest.h>

using AlibabaCloud::Ecd::Model::DescribeUsersInGroupRequest;

DescribeUsersInGroupRequest::DescribeUsersInGroupRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeUsersInGroup") {
  setMethod(HttpRequest::Method::Post);
}

DescribeUsersInGroupRequest::~DescribeUsersInGroupRequest() {}

std::vector<std::string> DescribeUsersInGroupRequest::getEndUserIds() const {
  return endUserIds_;
}

void DescribeUsersInGroupRequest::setEndUserIds(const std::vector<std::string> &endUserIds) {
  endUserIds_ = endUserIds;
}

int DescribeUsersInGroupRequest::getConnectState() const {
  return connectState_;
}

void DescribeUsersInGroupRequest::setConnectState(int connectState) {
  connectState_ = connectState;
  setParameter(std::string("ConnectState"), std::to_string(connectState));
}

std::string DescribeUsersInGroupRequest::getOrgId() const {
  return orgId_;
}

void DescribeUsersInGroupRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setParameter(std::string("OrgId"), orgId);
}

std::string DescribeUsersInGroupRequest::getFilter() const {
  return filter_;
}

void DescribeUsersInGroupRequest::setFilter(const std::string &filter) {
  filter_ = filter;
  setParameter(std::string("Filter"), filter);
}

std::string DescribeUsersInGroupRequest::getDesktopGroupId() const {
  return desktopGroupId_;
}

void DescribeUsersInGroupRequest::setDesktopGroupId(const std::string &desktopGroupId) {
  desktopGroupId_ = desktopGroupId;
  setParameter(std::string("DesktopGroupId"), desktopGroupId);
}

std::string DescribeUsersInGroupRequest::getRegionId() const {
  return regionId_;
}

void DescribeUsersInGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeUsersInGroupRequest::getNextToken() const {
  return nextToken_;
}

void DescribeUsersInGroupRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

bool DescribeUsersInGroupRequest::getQueryUserDetail() const {
  return queryUserDetail_;
}

void DescribeUsersInGroupRequest::setQueryUserDetail(bool queryUserDetail) {
  queryUserDetail_ = queryUserDetail;
  setParameter(std::string("QueryUserDetail"), queryUserDetail ? "true" : "false");
}

int DescribeUsersInGroupRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeUsersInGroupRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string DescribeUsersInGroupRequest::getEndUserId() const {
  return endUserId_;
}

void DescribeUsersInGroupRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setParameter(std::string("EndUserId"), endUserId);
}

