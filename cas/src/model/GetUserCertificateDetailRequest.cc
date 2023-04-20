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

#include <alibabacloud/cas/model/GetUserCertificateDetailRequest.h>

using AlibabaCloud::Cas::Model::GetUserCertificateDetailRequest;

GetUserCertificateDetailRequest::GetUserCertificateDetailRequest()
    : RpcServiceRequest("cas", "2020-04-07", "GetUserCertificateDetail") {
  setMethod(HttpRequest::Method::Post);
}

GetUserCertificateDetailRequest::~GetUserCertificateDetailRequest() {}

long GetUserCertificateDetailRequest::getCertId() const {
  return certId_;
}

void GetUserCertificateDetailRequest::setCertId(long certId) {
  certId_ = certId;
  setParameter(std::string("CertId"), std::to_string(certId));
}

std::string GetUserCertificateDetailRequest::getSourceIp() const {
  return sourceIp_;
}

void GetUserCertificateDetailRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

bool GetUserCertificateDetailRequest::getCertFilter() const {
  return certFilter_;
}

void GetUserCertificateDetailRequest::setCertFilter(bool certFilter) {
  certFilter_ = certFilter;
  setParameter(std::string("CertFilter"), certFilter ? "true" : "false");
}

