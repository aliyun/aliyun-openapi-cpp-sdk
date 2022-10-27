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

#include <alibabacloud/elasticsearch/model/AddConnectableClusterRequest.h>

using AlibabaCloud::Elasticsearch::Model::AddConnectableClusterRequest;

AddConnectableClusterRequest::AddConnectableClusterRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/connected-clusters"};
  setMethod(HttpRequest::Method::Post);
}

AddConnectableClusterRequest::~AddConnectableClusterRequest() {}

string AddConnectableClusterRequest::getInstanceId() const {
  return instanceId_;
}

void AddConnectableClusterRequest::setInstanceId(string instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

string AddConnectableClusterRequest::getClientToken() const {
  return clientToken_;
}

void AddConnectableClusterRequest::setClientToken(string clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("clientToken"), std::to_string(clientToken));
}

string AddConnectableClusterRequest::getBody() const {
  return body_;
}

void AddConnectableClusterRequest::setBody(string body) {
  body_ = body;
  setBodyParameter(std::string("body"), std::to_string(body));
}

