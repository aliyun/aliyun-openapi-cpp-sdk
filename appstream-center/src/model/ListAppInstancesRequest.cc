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

#include <alibabacloud/appstream-center/model/ListAppInstancesRequest.h>

using AlibabaCloud::Appstream_center::Model::ListAppInstancesRequest;

ListAppInstancesRequest::ListAppInstancesRequest()
    : RpcServiceRequest("appstream-center", "2021-09-01", "ListAppInstances") {
  setMethod(HttpRequest::Method::Post);
}

ListAppInstancesRequest::~ListAppInstancesRequest() {}

int ListAppInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAppInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListAppInstancesRequest::getAppInstanceGroupId() const {
  return appInstanceGroupId_;
}

void ListAppInstancesRequest::setAppInstanceGroupId(const std::string &appInstanceGroupId) {
  appInstanceGroupId_ = appInstanceGroupId;
  setParameter(std::string("AppInstanceGroupId"), appInstanceGroupId);
}

int ListAppInstancesRequest::getPageSize() const {
  return pageSize_;
}

void ListAppInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListAppInstancesRequest::getAppInstanceId() const {
  return appInstanceId_;
}

void ListAppInstancesRequest::setAppInstanceId(const std::string &appInstanceId) {
  appInstanceId_ = appInstanceId;
  setParameter(std::string("AppInstanceId"), appInstanceId);
}

std::vector<std::string> ListAppInstancesRequest::getStatus() const {
  return status_;
}

void ListAppInstancesRequest::setStatus(const std::vector<std::string> &status) {
  status_ = status;
}

