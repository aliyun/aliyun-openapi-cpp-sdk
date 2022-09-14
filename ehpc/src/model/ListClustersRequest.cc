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

#include <alibabacloud/ehpc/model/ListClustersRequest.h>

using AlibabaCloud::EHPC::Model::ListClustersRequest;

ListClustersRequest::ListClustersRequest()
    : RpcServiceRequest("ehpc", "2017-07-14", "ListClusters") {
  setMethod(HttpRequest::Method::Get);
}

ListClustersRequest::~ListClustersRequest() {}

int ListClustersRequest::getPageNumber() const {
  return pageNumber_;
}

void ListClustersRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListClustersRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListClustersRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int ListClustersRequest::getPageSize() const {
  return pageSize_;
}

void ListClustersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

