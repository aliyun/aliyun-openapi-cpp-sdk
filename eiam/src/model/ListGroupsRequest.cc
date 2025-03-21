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

#include <alibabacloud/eiam/model/ListGroupsRequest.h>

using AlibabaCloud::Eiam::Model::ListGroupsRequest;

ListGroupsRequest::ListGroupsRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "ListGroups") {
  setMethod(HttpRequest::Method::Post);
}

ListGroupsRequest::~ListGroupsRequest() {}

long ListGroupsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListGroupsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListGroupsRequest::getPageSize() const {
  return pageSize_;
}

void ListGroupsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListGroupsRequest::getGroupNameStartsWith() const {
  return groupNameStartsWith_;
}

void ListGroupsRequest::setGroupNameStartsWith(const std::string &groupNameStartsWith) {
  groupNameStartsWith_ = groupNameStartsWith;
  setParameter(std::string("GroupNameStartsWith"), groupNameStartsWith);
}

std::string ListGroupsRequest::getGroupExternalId() const {
  return groupExternalId_;
}

void ListGroupsRequest::setGroupExternalId(const std::string &groupExternalId) {
  groupExternalId_ = groupExternalId;
  setParameter(std::string("GroupExternalId"), groupExternalId);
}

std::string ListGroupsRequest::getGroupName() const {
  return groupName_;
}

void ListGroupsRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string ListGroupsRequest::getInstanceId() const {
  return instanceId_;
}

void ListGroupsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::vector<ListGroupsRequest::std::string> ListGroupsRequest::getGroupIds() const {
  return groupIds_;
}

void ListGroupsRequest::setGroupIds(const std::vector<ListGroupsRequest::std::string> &groupIds) {
  groupIds_ = groupIds;
  for(int dep1 = 0; dep1 != groupIds.size(); dep1++) {
    setParameter(std::string("GroupIds") + "." + std::to_string(dep1 + 1), groupIds[dep1]);
  }
}

