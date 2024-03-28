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

#include <alibabacloud/devops/model/ListHostGroupsRequest.h>

using AlibabaCloud::Devops::Model::ListHostGroupsRequest;

ListHostGroupsRequest::ListHostGroupsRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/hostGroups"};
  setMethod(HttpRequest::Method::Get);
}

ListHostGroupsRequest::~ListHostGroupsRequest() {}

std::string ListHostGroupsRequest::getPageSort() const {
  return pageSort_;
}

void ListHostGroupsRequest::setPageSort(const std::string &pageSort) {
  pageSort_ = pageSort;
  setParameter(std::string("pageSort"), pageSort);
}

std::string ListHostGroupsRequest::getCreatorAccountIds() const {
  return creatorAccountIds_;
}

void ListHostGroupsRequest::setCreatorAccountIds(const std::string &creatorAccountIds) {
  creatorAccountIds_ = creatorAccountIds;
  setParameter(std::string("creatorAccountIds"), creatorAccountIds);
}

long ListHostGroupsRequest::getCreateStartTime() const {
  return createStartTime_;
}

void ListHostGroupsRequest::setCreateStartTime(long createStartTime) {
  createStartTime_ = createStartTime;
  setParameter(std::string("createStartTime"), std::to_string(createStartTime));
}

std::string ListHostGroupsRequest::getOrganizationId() const {
  return organizationId_;
}

void ListHostGroupsRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListHostGroupsRequest::getPageOrder() const {
  return pageOrder_;
}

void ListHostGroupsRequest::setPageOrder(const std::string &pageOrder) {
  pageOrder_ = pageOrder;
  setParameter(std::string("pageOrder"), pageOrder);
}

std::string ListHostGroupsRequest::getNextToken() const {
  return nextToken_;
}

void ListHostGroupsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("nextToken"), nextToken);
}

std::string ListHostGroupsRequest::getName() const {
  return name_;
}

void ListHostGroupsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("name"), name);
}

std::string ListHostGroupsRequest::getIds() const {
  return ids_;
}

void ListHostGroupsRequest::setIds(const std::string &ids) {
  ids_ = ids;
  setParameter(std::string("ids"), ids);
}

long ListHostGroupsRequest::getMaxResults() const {
  return maxResults_;
}

void ListHostGroupsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("maxResults"), std::to_string(maxResults));
}

long ListHostGroupsRequest::getCreateEndTime() const {
  return createEndTime_;
}

void ListHostGroupsRequest::setCreateEndTime(long createEndTime) {
  createEndTime_ = createEndTime;
  setParameter(std::string("createEndTime"), std::to_string(createEndTime));
}

