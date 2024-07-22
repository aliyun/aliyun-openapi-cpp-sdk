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

#include <alibabacloud/elasticsearch/model/ValidateShrinkNodesRequest.h>

using AlibabaCloud::Elasticsearch::Model::ValidateShrinkNodesRequest;

ValidateShrinkNodesRequest::ValidateShrinkNodesRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/validate-shrink-nodes"};
  setMethod(HttpRequest::Method::Post);
}

ValidateShrinkNodesRequest::~ValidateShrinkNodesRequest() {}

bool ValidateShrinkNodesRequest::getIgnoreStatus() const {
  return ignoreStatus_;
}

void ValidateShrinkNodesRequest::setIgnoreStatus(bool ignoreStatus) {
  ignoreStatus_ = ignoreStatus;
  setParameter(std::string("ignoreStatus"), ignoreStatus ? "true" : "false");
}

std::string ValidateShrinkNodesRequest::getInstanceId() const {
  return instanceId_;
}

void ValidateShrinkNodesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ValidateShrinkNodesRequest::getNodeType() const {
  return nodeType_;
}

void ValidateShrinkNodesRequest::setNodeType(const std::string &nodeType) {
  nodeType_ = nodeType;
  setParameter(std::string("nodeType"), nodeType);
}

int ValidateShrinkNodesRequest::getCount() const {
  return count_;
}

void ValidateShrinkNodesRequest::setCount(int count) {
  count_ = count;
  setParameter(std::string("count"), std::to_string(count));
}

std::string ValidateShrinkNodesRequest::getBody() const {
  return body_;
}

void ValidateShrinkNodesRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

