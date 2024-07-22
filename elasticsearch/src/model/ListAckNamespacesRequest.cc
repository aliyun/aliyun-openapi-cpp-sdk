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

#include <alibabacloud/elasticsearch/model/ListAckNamespacesRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListAckNamespacesRequest;

ListAckNamespacesRequest::ListAckNamespacesRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/ack-clusters/[ClusterId]/namespaces"};
  setMethod(HttpRequest::Method::Get);
}

ListAckNamespacesRequest::~ListAckNamespacesRequest() {}

int ListAckNamespacesRequest::getSize() const {
  return size_;
}

void ListAckNamespacesRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("size"), std::to_string(size));
}

int ListAckNamespacesRequest::getPage() const {
  return page_;
}

void ListAckNamespacesRequest::setPage(int page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

std::string ListAckNamespacesRequest::getClusterId() const {
  return clusterId_;
}

void ListAckNamespacesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

