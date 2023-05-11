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

#include <alibabacloud/alinlp/model/GetDiagnosisChMedicalRequest.h>

using AlibabaCloud::Alinlp::Model::GetDiagnosisChMedicalRequest;

GetDiagnosisChMedicalRequest::GetDiagnosisChMedicalRequest()
    : RpcServiceRequest("alinlp", "2020-06-29", "GetDiagnosisChMedical") {
  setMethod(HttpRequest::Method::Post);
}

GetDiagnosisChMedicalRequest::~GetDiagnosisChMedicalRequest() {}

std::string GetDiagnosisChMedicalRequest::getServiceCode() const {
  return serviceCode_;
}

void GetDiagnosisChMedicalRequest::setServiceCode(const std::string &serviceCode) {
  serviceCode_ = serviceCode;
  setBodyParameter(std::string("ServiceCode"), serviceCode);
}

std::string GetDiagnosisChMedicalRequest::getName() const {
  return name_;
}

void GetDiagnosisChMedicalRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

