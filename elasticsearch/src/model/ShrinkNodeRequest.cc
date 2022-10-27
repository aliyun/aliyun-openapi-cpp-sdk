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

#include <alibabacloud/elasticsearch/model/ShrinkNodeRequest.h>

using AlibabaCloud::Elasticsearch::Model::ShrinkNodeRequest;

ShrinkNodeRequest::ShrinkNodeRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/actions/shrink"};
  setMethod(HttpRequest::Method::Post);
}

ShrinkNodeRequest::~ShrinkNodeRequest() {}

boolean ShrinkNodeRequest::getIgnoreStatus() const {
  return ignoreStatus_;
}

void ShrinkNodeRequest::setIgnoreStatus(boolean ignoreStatus) {
  ignoreStatus_ = ignoreStatus;
  setParameter(std::string("ignoreStatus"), std::to_string(ignoreStatus));
}

string ShrinkNodeRequest::getInstanceId() const {
  return instanceId_;
}

void ShrinkNodeRequest::setInstanceId(string instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

string ShrinkNodeRequest::getNodeType() const {
  return nodeType_;
}

void ShrinkNodeRequest::setNodeType(string nodeType) {
  nodeType_ = nodeType;
  setParameter(std::string("nodeType"), std::to_string(nodeType));
}

string ShrinkNodeRequest::getClientToken() const {
  return clientToken_;
}

void ShrinkNodeRequest::setClientToken(string clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("clientToken"), std::to_string(clientToken));
}

integer ShrinkNodeRequest::getCount() const {
  return count_;
}

void ShrinkNodeRequest::setCount(integer count) {
  count_ = count;
  setParameter(std::string("count"), std::to_string(count));
}

std::string ShrinkNodeRequest::getBody() const {
  return body_;
}

void ShrinkNodeRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

