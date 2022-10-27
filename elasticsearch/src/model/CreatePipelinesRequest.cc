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

string CreatePipelinesRequest::getInstanceId() const {
  return instanceId_;
}

void CreatePipelinesRequest::setInstanceId(string instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

string CreatePipelinesRequest::getClientToken() const {
  return clientToken_;
}

void CreatePipelinesRequest::setClientToken(string clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), std::to_string(clientToken));
}

boolean CreatePipelinesRequest::getTrigger() const {
  return trigger_;
}

void CreatePipelinesRequest::setTrigger(boolean trigger) {
  trigger_ = trigger;
  setParameter(std::string("trigger"), std::to_string(trigger));
}

string CreatePipelinesRequest::getBody() const {
  return body_;
}

void CreatePipelinesRequest::setBody(string body) {
  body_ = body;
  setBodyParameter(std::string("body"), std::to_string(body));
}

