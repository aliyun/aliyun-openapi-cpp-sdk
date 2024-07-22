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

#include <alibabacloud/elasticsearch/model/CloseManagedIndexRequest.h>

using AlibabaCloud::Elasticsearch::Model::CloseManagedIndexRequest;

CloseManagedIndexRequest::CloseManagedIndexRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/indices/[Index]/close-managed"};
  setMethod(HttpRequest::Method::Post);
}

CloseManagedIndexRequest::~CloseManagedIndexRequest() {}

std::string CloseManagedIndexRequest::getInstanceId() const {
  return instanceId_;
}

void CloseManagedIndexRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CloseManagedIndexRequest::getClientToken() const {
  return clientToken_;
}

void CloseManagedIndexRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CloseManagedIndexRequest::getIndex() const {
  return index_;
}

void CloseManagedIndexRequest::setIndex(const std::string &index) {
  index_ = index;
  setParameter(std::string("Index"), index);
}

