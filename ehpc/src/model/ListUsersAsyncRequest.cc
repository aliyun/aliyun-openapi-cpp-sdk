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

#include <alibabacloud/ehpc/model/ListUsersAsyncRequest.h>

using AlibabaCloud::EHPC::Model::ListUsersAsyncRequest;

ListUsersAsyncRequest::ListUsersAsyncRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "ListUsersAsync") {
  setMethod(HttpRequest::Method::Get);
}

ListUsersAsyncRequest::~ListUsersAsyncRequest() {}

std::string ListUsersAsyncRequest::getAsyncId() const {
  return asyncId_;
}

void ListUsersAsyncRequest::setAsyncId(const std::string &asyncId) {
  asyncId_ = asyncId;
  setParameter(std::string("AsyncId"), asyncId);
}

std::string ListUsersAsyncRequest::getClusterId() const {
  return clusterId_;
}

void ListUsersAsyncRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

int ListUsersAsyncRequest::getPageNumber() const {
  return pageNumber_;
}

void ListUsersAsyncRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListUsersAsyncRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListUsersAsyncRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int ListUsersAsyncRequest::getPageSize() const {
  return pageSize_;
}

void ListUsersAsyncRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

