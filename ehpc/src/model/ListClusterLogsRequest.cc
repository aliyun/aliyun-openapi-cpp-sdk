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

#include <alibabacloud/ehpc/model/ListClusterLogsRequest.h>

using AlibabaCloud::EHPC::Model::ListClusterLogsRequest;

ListClusterLogsRequest::ListClusterLogsRequest()
    : RpcServiceRequest("ehpc", "2017-07-14", "ListClusterLogs") {
  setMethod(HttpRequest::Method::Get);
}

ListClusterLogsRequest::~ListClusterLogsRequest() {}

std::string ListClusterLogsRequest::getClusterId() const {
  return clusterId_;
}

void ListClusterLogsRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

int ListClusterLogsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListClusterLogsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListClusterLogsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListClusterLogsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int ListClusterLogsRequest::getPageSize() const {
  return pageSize_;
}

void ListClusterLogsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

