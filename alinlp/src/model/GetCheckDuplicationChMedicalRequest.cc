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

#include <alibabacloud/alinlp/model/GetCheckDuplicationChMedicalRequest.h>

using AlibabaCloud::Alinlp::Model::GetCheckDuplicationChMedicalRequest;

GetCheckDuplicationChMedicalRequest::GetCheckDuplicationChMedicalRequest()
    : RpcServiceRequest("alinlp", "2020-06-29", "GetCheckDuplicationChMedical") {
  setMethod(HttpRequest::Method::Post);
}

GetCheckDuplicationChMedicalRequest::~GetCheckDuplicationChMedicalRequest() {}

std::string GetCheckDuplicationChMedicalRequest::getServiceCode() const {
  return serviceCode_;
}

void GetCheckDuplicationChMedicalRequest::setServiceCode(const std::string &serviceCode) {
  serviceCode_ = serviceCode;
  setBodyParameter(std::string("ServiceCode"), serviceCode);
}

std::string GetCheckDuplicationChMedicalRequest::getOriginT() const {
  return originT_;
}

void GetCheckDuplicationChMedicalRequest::setOriginT(const std::string &originT) {
  originT_ = originT;
  setBodyParameter(std::string("OriginT"), originT);
}

std::string GetCheckDuplicationChMedicalRequest::getOriginQ() const {
  return originQ_;
}

void GetCheckDuplicationChMedicalRequest::setOriginQ(const std::string &originQ) {
  originQ_ = originQ;
  setBodyParameter(std::string("OriginQ"), originQ);
}

