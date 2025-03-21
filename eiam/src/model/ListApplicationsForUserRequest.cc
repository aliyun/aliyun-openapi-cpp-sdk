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

#include <alibabacloud/eiam/model/ListApplicationsForUserRequest.h>

using AlibabaCloud::Eiam::Model::ListApplicationsForUserRequest;

ListApplicationsForUserRequest::ListApplicationsForUserRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "ListApplicationsForUser") {
  setMethod(HttpRequest::Method::Post);
}

ListApplicationsForUserRequest::~ListApplicationsForUserRequest() {}

std::string ListApplicationsForUserRequest::getUserId() const {
  return userId_;
}

void ListApplicationsForUserRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

long ListApplicationsForUserRequest::getPageNumber() const {
  return pageNumber_;
}

void ListApplicationsForUserRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListApplicationsForUserRequest::getPageSize() const {
  return pageSize_;
}

void ListApplicationsForUserRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<ListApplicationsForUserRequest::std::string> ListApplicationsForUserRequest::getApplicationIds() const {
  return applicationIds_;
}

void ListApplicationsForUserRequest::setApplicationIds(const std::vector<ListApplicationsForUserRequest::std::string> &applicationIds) {
  applicationIds_ = applicationIds;
  for(int dep1 = 0; dep1 != applicationIds.size(); dep1++) {
    setParameter(std::string("ApplicationIds") + "." + std::to_string(dep1 + 1), applicationIds[dep1]);
  }
}

std::string ListApplicationsForUserRequest::getInstanceId() const {
  return instanceId_;
}

void ListApplicationsForUserRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListApplicationsForUserRequest::getQueryMode() const {
  return queryMode_;
}

void ListApplicationsForUserRequest::setQueryMode(const std::string &queryMode) {
  queryMode_ = queryMode;
  setParameter(std::string("QueryMode"), queryMode);
}

