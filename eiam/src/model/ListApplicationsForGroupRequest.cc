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

#include <alibabacloud/eiam/model/ListApplicationsForGroupRequest.h>

using AlibabaCloud::Eiam::Model::ListApplicationsForGroupRequest;

ListApplicationsForGroupRequest::ListApplicationsForGroupRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "ListApplicationsForGroup") {
  setMethod(HttpRequest::Method::Post);
}

ListApplicationsForGroupRequest::~ListApplicationsForGroupRequest() {}

long ListApplicationsForGroupRequest::getPageNumber() const {
  return pageNumber_;
}

void ListApplicationsForGroupRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListApplicationsForGroupRequest::getPageSize() const {
  return pageSize_;
}

void ListApplicationsForGroupRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListApplicationsForGroupRequest::getGroupId() const {
  return groupId_;
}

void ListApplicationsForGroupRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::vector<ListApplicationsForGroupRequest::std::string> ListApplicationsForGroupRequest::getApplicationIds() const {
  return applicationIds_;
}

void ListApplicationsForGroupRequest::setApplicationIds(const std::vector<ListApplicationsForGroupRequest::std::string> &applicationIds) {
  applicationIds_ = applicationIds;
  for(int dep1 = 0; dep1 != applicationIds.size(); dep1++) {
    setParameter(std::string("ApplicationIds") + "." + std::to_string(dep1 + 1), applicationIds[dep1]);
  }
}

std::string ListApplicationsForGroupRequest::getInstanceId() const {
  return instanceId_;
}

void ListApplicationsForGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

