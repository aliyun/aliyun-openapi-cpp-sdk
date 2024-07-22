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

#include <alibabacloud/elasticsearch/model/UpdateTemplateRequest.h>

using AlibabaCloud::Elasticsearch::Model::UpdateTemplateRequest;

UpdateTemplateRequest::UpdateTemplateRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/templates/[TemplateName]"};
  setMethod(HttpRequest::Method::Post);
}

UpdateTemplateRequest::~UpdateTemplateRequest() {}

std::string UpdateTemplateRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateTemplateRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateTemplateRequest::getClientToken() const {
  return clientToken_;
}

void UpdateTemplateRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateTemplateRequest::getTemplateName() const {
  return templateName_;
}

void UpdateTemplateRequest::setTemplateName(const std::string &templateName) {
  templateName_ = templateName;
  setParameter(std::string("TemplateName"), templateName);
}

std::string UpdateTemplateRequest::getBody() const {
  return body_;
}

void UpdateTemplateRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

