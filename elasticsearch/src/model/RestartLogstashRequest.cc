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

#include <alibabacloud/elasticsearch/model/RestartLogstashRequest.h>

using AlibabaCloud::Elasticsearch::Model::RestartLogstashRequest;

RestartLogstashRequest::RestartLogstashRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/logstashes/[InstanceId]/actions/restart"};
  setMethod(HttpRequest::Method::Post);
}

RestartLogstashRequest::~RestartLogstashRequest() {}

std::string RestartLogstashRequest::getInstanceId() const {
  return instanceId_;
}

void RestartLogstashRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string RestartLogstashRequest::getClientToken() const {
  return clientToken_;
}

void RestartLogstashRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("clientToken"), clientToken);
}

bool RestartLogstashRequest::getForce() const {
  return force_;
}

void RestartLogstashRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("force"), force ? "true" : "false");
}

std::string RestartLogstashRequest::getBody() const {
  return body_;
}

void RestartLogstashRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

