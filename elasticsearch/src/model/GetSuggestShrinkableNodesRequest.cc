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

#include <alibabacloud/elasticsearch/model/GetSuggestShrinkableNodesRequest.h>

using AlibabaCloud::Elasticsearch::Model::GetSuggestShrinkableNodesRequest;

GetSuggestShrinkableNodesRequest::GetSuggestShrinkableNodesRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/suggest-shrinkable-nodes"};
  setMethod(HttpRequest::Method::Get);
}

GetSuggestShrinkableNodesRequest::~GetSuggestShrinkableNodesRequest() {}

boolean GetSuggestShrinkableNodesRequest::getIgnoreStatus() const {
  return ignoreStatus_;
}

void GetSuggestShrinkableNodesRequest::setIgnoreStatus(boolean ignoreStatus) {
  ignoreStatus_ = ignoreStatus;
  setParameter(std::string("ignoreStatus"), std::to_string(ignoreStatus));
}

string GetSuggestShrinkableNodesRequest::getInstanceId() const {
  return instanceId_;
}

void GetSuggestShrinkableNodesRequest::setInstanceId(string instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

string GetSuggestShrinkableNodesRequest::getNodeType() const {
  return nodeType_;
}

void GetSuggestShrinkableNodesRequest::setNodeType(string nodeType) {
  nodeType_ = nodeType;
  setParameter(std::string("nodeType"), std::to_string(nodeType));
}

integer GetSuggestShrinkableNodesRequest::getCount() const {
  return count_;
}

void GetSuggestShrinkableNodesRequest::setCount(integer count) {
  count_ = count;
  setParameter(std::string("count"), std::to_string(count));
}

