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

#include <alibabacloud/elasticsearch/model/ListDataStreamsRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListDataStreamsRequest;

ListDataStreamsRequest::ListDataStreamsRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/data-streams"};
  setMethod(HttpRequest::Method::Get);
}

ListDataStreamsRequest::~ListDataStreamsRequest() {}

std::string ListDataStreamsRequest::getInstanceId() const {
  return instanceId_;
}

void ListDataStreamsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

bool ListDataStreamsRequest::getIsManaged() const {
  return isManaged_;
}

void ListDataStreamsRequest::setIsManaged(bool isManaged) {
  isManaged_ = isManaged;
  setParameter(std::string("isManaged"), isManaged ? "true" : "false");
}

std::string ListDataStreamsRequest::getName() const {
  return name_;
}

void ListDataStreamsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("name"), name);
}

