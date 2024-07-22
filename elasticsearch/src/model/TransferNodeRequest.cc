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

#include <alibabacloud/elasticsearch/model/TransferNodeRequest.h>

using AlibabaCloud::Elasticsearch::Model::TransferNodeRequest;

TransferNodeRequest::TransferNodeRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/actions/transfer"};
  setMethod(HttpRequest::Method::Post);
}

TransferNodeRequest::~TransferNodeRequest() {}

std::string TransferNodeRequest::getInstanceId() const {
  return instanceId_;
}

void TransferNodeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string TransferNodeRequest::getNodeType() const {
  return nodeType_;
}

void TransferNodeRequest::setNodeType(const std::string &nodeType) {
  nodeType_ = nodeType;
  setParameter(std::string("nodeType"), nodeType);
}

std::string TransferNodeRequest::getClientToken() const {
  return clientToken_;
}

void TransferNodeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("clientToken"), clientToken);
}

