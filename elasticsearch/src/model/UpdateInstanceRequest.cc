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

#include <alibabacloud/elasticsearch/model/UpdateInstanceRequest.h>

using AlibabaCloud::Elasticsearch::Model::UpdateInstanceRequest;

UpdateInstanceRequest::UpdateInstanceRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]"};
  setMethod(HttpRequest::Method::Put);
}

UpdateInstanceRequest::~UpdateInstanceRequest() {}

bool UpdateInstanceRequest::getIgnoreStatus() const {
  return ignoreStatus_;
}

void UpdateInstanceRequest::setIgnoreStatus(bool ignoreStatus) {
  ignoreStatus_ = ignoreStatus;
  setParameter(std::string("ignoreStatus"), ignoreStatus ? "true" : "false");
}

std::string UpdateInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateInstanceRequest::getClientToken() const {
  return clientToken_;
}

void UpdateInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("clientToken"), clientToken);
}

bool UpdateInstanceRequest::getForce() const {
  return force_;
}

void UpdateInstanceRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("force"), force ? "true" : "false");
}

std::string UpdateInstanceRequest::getBody() const {
  return body_;
}

void UpdateInstanceRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

std::string UpdateInstanceRequest::getOrderActionType() const {
  return orderActionType_;
}

void UpdateInstanceRequest::setOrderActionType(const std::string &orderActionType) {
  orderActionType_ = orderActionType;
  setParameter(std::string("orderActionType"), orderActionType);
}

