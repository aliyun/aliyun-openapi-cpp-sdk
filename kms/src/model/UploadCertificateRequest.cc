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

#include <alibabacloud/kms/model/UploadCertificateRequest.h>

using AlibabaCloud::Kms::Model::UploadCertificateRequest;

UploadCertificateRequest::UploadCertificateRequest()
    : RpcServiceRequest("kms", "2016-01-20", "UploadCertificate") {
  setMethod(HttpRequest::Method::Post);
}

UploadCertificateRequest::~UploadCertificateRequest() {}

std::string UploadCertificateRequest::getCertificateId() const {
  return certificateId_;
}

void UploadCertificateRequest::setCertificateId(const std::string &certificateId) {
  certificateId_ = certificateId;
  setParameter(std::string("CertificateId"), certificateId);
}

std::string UploadCertificateRequest::getCertificate() const {
  return certificate_;
}

void UploadCertificateRequest::setCertificate(const std::string &certificate) {
  certificate_ = certificate;
  setParameter(std::string("Certificate"), certificate);
}

std::string UploadCertificateRequest::getCertificateChain() const {
  return certificateChain_;
}

void UploadCertificateRequest::setCertificateChain(const std::string &certificateChain) {
  certificateChain_ = certificateChain;
  setParameter(std::string("CertificateChain"), certificateChain);
}

