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

#include <alibabacloud/qianzhou/model/GetDiagnosisResultRequest.h>

using AlibabaCloud::Qianzhou::Model::GetDiagnosisResultRequest;

GetDiagnosisResultRequest::GetDiagnosisResultRequest()
    : RoaServiceRequest("qianzhou", "2021-11-11") {
  setResourcePath("/popapi/GetDiagnosisResult"};
  setMethod(HttpRequest::Method::Get);
}

GetDiagnosisResultRequest::~GetDiagnosisResultRequest() {}

std::string GetDiagnosisResultRequest::getDiagnosisId() const {
  return diagnosisId_;
}

void GetDiagnosisResultRequest::setDiagnosisId(const std::string &diagnosisId) {
  diagnosisId_ = diagnosisId;
  setParameter(std::string("diagnosisId"), diagnosisId);
}

std::string GetDiagnosisResultRequest::getOwnerUid() const {
  return ownerUid_;
}

void GetDiagnosisResultRequest::setOwnerUid(const std::string &ownerUid) {
  ownerUid_ = ownerUid;
  setParameter(std::string("ownerUid"), ownerUid);
}

