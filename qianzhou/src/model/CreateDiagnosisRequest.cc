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

#include <alibabacloud/qianzhou/model/CreateDiagnosisRequest.h>

using AlibabaCloud::Qianzhou::Model::CreateDiagnosisRequest;

CreateDiagnosisRequest::CreateDiagnosisRequest()
    : RoaServiceRequest("qianzhou", "2021-11-11") {
  setResourcePath("/popapi/createDiagnosis"};
  setMethod(HttpRequest::Method::Post);
}

CreateDiagnosisRequest::~CreateDiagnosisRequest() {}

std::string CreateDiagnosisRequest::getDiagnosisType() const {
  return diagnosisType_;
}

void CreateDiagnosisRequest::setDiagnosisType(const std::string &diagnosisType) {
  diagnosisType_ = diagnosisType;
  setParameter(std::string("diagnosisType"), diagnosisType);
}

std::string CreateDiagnosisRequest::getClusterID() const {
  return clusterID_;
}

void CreateDiagnosisRequest::setClusterID(const std::string &clusterID) {
  clusterID_ = clusterID;
  setParameter(std::string("clusterID"), clusterID);
}

std::string CreateDiagnosisRequest::getBody() const {
  return body_;
}

void CreateDiagnosisRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

