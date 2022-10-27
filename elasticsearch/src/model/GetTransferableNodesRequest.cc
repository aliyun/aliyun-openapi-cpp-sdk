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

#include <alibabacloud/elasticsearch/model/GetTransferableNodesRequest.h>

using AlibabaCloud::Elasticsearch::Model::GetTransferableNodesRequest;

GetTransferableNodesRequest::GetTransferableNodesRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/transferable-nodes"};
  setMethod(HttpRequest::Method::Get);
}

GetTransferableNodesRequest::~GetTransferableNodesRequest() {}

string GetTransferableNodesRequest::getInstanceId() const {
  return instanceId_;
}

void GetTransferableNodesRequest::setInstanceId(string instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

string GetTransferableNodesRequest::getNodeType() const {
  return nodeType_;
}

void GetTransferableNodesRequest::setNodeType(string nodeType) {
  nodeType_ = nodeType;
  setParameter(std::string("nodeType"), std::to_string(nodeType));
}

integer GetTransferableNodesRequest::getCount() const {
  return count_;
}

void GetTransferableNodesRequest::setCount(integer count) {
  count_ = count;
  setParameter(std::string("count"), std::to_string(count));
}

