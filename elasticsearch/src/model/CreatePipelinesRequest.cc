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

#include <alibabacloud/elasticsearch/model/CreatePipelinesRequest.h>

using AlibabaCloud::Elasticsearch::Model::CreatePipelinesRequest;

CreatePipelinesRequest::CreatePipelinesRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/logstashes/[InstanceId]/pipelines"};
  setMethod(HttpRequest::Method::Post);
}

CreatePipelinesRequest::~CreatePipelinesRequest() {}

std::string CreatePipelinesRequest::getInstanceId() const {
  return instanceId_;
}

void CreatePipelinesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreatePipelinesRequest::getClientToken() const {
  return clientToken_;
}

void CreatePipelinesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool CreatePipelinesRequest::getTrigger() const {
  return trigger_;
}

void CreatePipelinesRequest::setTrigger(bool trigger) {
  trigger_ = trigger;
  setParameter(std::string("trigger"), trigger ? "true" : "false");
}

std::string CreatePipelinesRequest::getBody() const {
  return body_;
}

void CreatePipelinesRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

