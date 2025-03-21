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

#include <alibabacloud/eiam/model/ListInstancesRequest.h>

using AlibabaCloud::Eiam::Model::ListInstancesRequest;

ListInstancesRequest::ListInstancesRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "ListInstances") {
  setMethod(HttpRequest::Method::Post);
}

ListInstancesRequest::~ListInstancesRequest() {}

long ListInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListInstancesRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListInstancesRequest::getPageSize() const {
  return pageSize_;
}

void ListInstancesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<ListInstancesRequest::std::string> ListInstancesRequest::getInstanceIds() const {
  return instanceIds_;
}

void ListInstancesRequest::setInstanceIds(const std::vector<ListInstancesRequest::std::string> &instanceIds) {
  instanceIds_ = instanceIds;
  for(int dep1 = 0; dep1 != instanceIds.size(); dep1++) {
    setParameter(std::string("InstanceIds") + "." + std::to_string(dep1 + 1), instanceIds[dep1]);
  }
}

std::string ListInstancesRequest::getStatus() const {
  return status_;
}

void ListInstancesRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

