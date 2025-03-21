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

#include <alibabacloud/eiam/model/ListUsersForApplicationRequest.h>

using AlibabaCloud::Eiam::Model::ListUsersForApplicationRequest;

ListUsersForApplicationRequest::ListUsersForApplicationRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "ListUsersForApplication") {
  setMethod(HttpRequest::Method::Post);
}

ListUsersForApplicationRequest::~ListUsersForApplicationRequest() {}

long ListUsersForApplicationRequest::getPageNumber() const {
  return pageNumber_;
}

void ListUsersForApplicationRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListUsersForApplicationRequest::getPageSize() const {
  return pageSize_;
}

void ListUsersForApplicationRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListUsersForApplicationRequest::getApplicationId() const {
  return applicationId_;
}

void ListUsersForApplicationRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::string ListUsersForApplicationRequest::getInstanceId() const {
  return instanceId_;
}

void ListUsersForApplicationRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::vector<ListUsersForApplicationRequest::std::string> ListUsersForApplicationRequest::getUserIds() const {
  return userIds_;
}

void ListUsersForApplicationRequest::setUserIds(const std::vector<ListUsersForApplicationRequest::std::string> &userIds) {
  userIds_ = userIds;
  for(int dep1 = 0; dep1 != userIds.size(); dep1++) {
    setParameter(std::string("UserIds") + "." + std::to_string(dep1 + 1), userIds[dep1]);
  }
}

