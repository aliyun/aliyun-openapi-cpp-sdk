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

#include <alibabacloud/elasticsearch/model/UpdatePipelinesRequest.h>

using AlibabaCloud::Elasticsearch::Model::UpdatePipelinesRequest;

UpdatePipelinesRequest::UpdatePipelinesRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/logstashes/[InstanceId]/pipelines"};
  setMethod(HttpRequest::Method::Put);
}

UpdatePipelinesRequest::~UpdatePipelinesRequest() {}

std::string UpdatePipelinesRequest::getInstanceId() const {
  return instanceId_;
}

void UpdatePipelinesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdatePipelinesRequest::getClientToken() const {
  return clientToken_;
}

void UpdatePipelinesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("clientToken"), clientToken);
}

bool UpdatePipelinesRequest::getTrigger() const {
  return trigger_;
}

void UpdatePipelinesRequest::setTrigger(bool trigger) {
  trigger_ = trigger;
  setParameter(std::string("trigger"), trigger ? "true" : "false");
}

std::string UpdatePipelinesRequest::getBody() const {
  return body_;
}

void UpdatePipelinesRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

