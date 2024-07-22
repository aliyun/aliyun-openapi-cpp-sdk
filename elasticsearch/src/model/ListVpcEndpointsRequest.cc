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

#include <alibabacloud/elasticsearch/model/ListVpcEndpointsRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListVpcEndpointsRequest;

ListVpcEndpointsRequest::ListVpcEndpointsRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/vpc-endpoints"};
  setMethod(HttpRequest::Method::Get);
}

ListVpcEndpointsRequest::~ListVpcEndpointsRequest() {}

std::string ListVpcEndpointsRequest::getInstanceId() const {
  return instanceId_;
}

void ListVpcEndpointsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListVpcEndpointsRequest::getSize() const {
  return size_;
}

void ListVpcEndpointsRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("size"), std::to_string(size));
}

int ListVpcEndpointsRequest::getPage() const {
  return page_;
}

void ListVpcEndpointsRequest::setPage(int page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

