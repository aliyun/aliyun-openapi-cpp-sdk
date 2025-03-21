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

#include <alibabacloud/eiam/model/ListGroupsForApplicationRequest.h>

using AlibabaCloud::Eiam::Model::ListGroupsForApplicationRequest;

ListGroupsForApplicationRequest::ListGroupsForApplicationRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "ListGroupsForApplication") {
  setMethod(HttpRequest::Method::Post);
}

ListGroupsForApplicationRequest::~ListGroupsForApplicationRequest() {}

long ListGroupsForApplicationRequest::getPageNumber() const {
  return pageNumber_;
}

void ListGroupsForApplicationRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListGroupsForApplicationRequest::getPageSize() const {
  return pageSize_;
}

void ListGroupsForApplicationRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListGroupsForApplicationRequest::getApplicationId() const {
  return applicationId_;
}

void ListGroupsForApplicationRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::string ListGroupsForApplicationRequest::getInstanceId() const {
  return instanceId_;
}

void ListGroupsForApplicationRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::vector<ListGroupsForApplicationRequest::std::string> ListGroupsForApplicationRequest::getGroupIds() const {
  return groupIds_;
}

void ListGroupsForApplicationRequest::setGroupIds(const std::vector<ListGroupsForApplicationRequest::std::string> &groupIds) {
  groupIds_ = groupIds;
  for(int dep1 = 0; dep1 != groupIds.size(); dep1++) {
    setParameter(std::string("GroupIds") + "." + std::to_string(dep1 + 1), groupIds[dep1]);
  }
}

