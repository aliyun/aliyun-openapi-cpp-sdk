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

#include <alibabacloud/elasticsearch/model/OpenDiagnosisRequest.h>

using AlibabaCloud::Elasticsearch::Model::OpenDiagnosisRequest;

OpenDiagnosisRequest::OpenDiagnosisRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/diagnosis/instances/[InstanceId]/actions/open-diagnosis"};
  setMethod(HttpRequest::Method::Post);
}

OpenDiagnosisRequest::~OpenDiagnosisRequest() {}

std::string OpenDiagnosisRequest::getInstanceId() const {
  return instanceId_;
}

void OpenDiagnosisRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string OpenDiagnosisRequest::getClientToken() const {
  return clientToken_;
}

void OpenDiagnosisRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string OpenDiagnosisRequest::getLang() const {
  return lang_;
}

void OpenDiagnosisRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("lang"), lang);
}

