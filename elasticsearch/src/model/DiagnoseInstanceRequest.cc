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

#include <alibabacloud/elasticsearch/model/DiagnoseInstanceRequest.h>

using AlibabaCloud::Elasticsearch::Model::DiagnoseInstanceRequest;

DiagnoseInstanceRequest::DiagnoseInstanceRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/diagnosis/instances/[InstanceId]/actions/diagnose"};
  setMethod(HttpRequest::Method::Post);
}

DiagnoseInstanceRequest::~DiagnoseInstanceRequest() {}

string DiagnoseInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void DiagnoseInstanceRequest::setInstanceId(string instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

string DiagnoseInstanceRequest::getClientToken() const {
  return clientToken_;
}

void DiagnoseInstanceRequest::setClientToken(string clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), std::to_string(clientToken));
}

string DiagnoseInstanceRequest::getLang() const {
  return lang_;
}

void DiagnoseInstanceRequest::setLang(string lang) {
  lang_ = lang;
  setParameter(std::string("lang"), std::to_string(lang));
}

std::string DiagnoseInstanceRequest::getBody() const {
  return body_;
}

void DiagnoseInstanceRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

