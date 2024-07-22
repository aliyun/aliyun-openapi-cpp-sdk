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

#include <alibabacloud/elasticsearch/model/UpdateIndexTemplateRequest.h>

using AlibabaCloud::Elasticsearch::Model::UpdateIndexTemplateRequest;

UpdateIndexTemplateRequest::UpdateIndexTemplateRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/index-templates/[IndexTemplate]"};
  setMethod(HttpRequest::Method::Put);
}

UpdateIndexTemplateRequest::~UpdateIndexTemplateRequest() {}

std::string UpdateIndexTemplateRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateIndexTemplateRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateIndexTemplateRequest::getClientToken() const {
  return clientToken_;
}

void UpdateIndexTemplateRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateIndexTemplateRequest::getBody() const {
  return body_;
}

void UpdateIndexTemplateRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

std::string UpdateIndexTemplateRequest::getIndexTemplate() const {
  return indexTemplate_;
}

void UpdateIndexTemplateRequest::setIndexTemplate(const std::string &indexTemplate) {
  indexTemplate_ = indexTemplate;
  setParameter(std::string("IndexTemplate"), indexTemplate);
}

