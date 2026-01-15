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

#include <alibabacloud/websitebuild/model/SetAppDomainCertificateRequest.h>

using AlibabaCloud::WebsiteBuild::Model::SetAppDomainCertificateRequest;

SetAppDomainCertificateRequest::SetAppDomainCertificateRequest()
    : RpcServiceRequest("websitebuild", "2025-04-29", "SetAppDomainCertificate") {
  setMethod(HttpRequest::Method::Post);
}

SetAppDomainCertificateRequest::~SetAppDomainCertificateRequest() {}

std::string SetAppDomainCertificateRequest::getDomainName() const {
  return domainName_;
}

void SetAppDomainCertificateRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string SetAppDomainCertificateRequest::getPublicKey() const {
  return publicKey_;
}

void SetAppDomainCertificateRequest::setPublicKey(const std::string &publicKey) {
  publicKey_ = publicKey;
  setParameter(std::string("PublicKey"), publicKey);
}

std::string SetAppDomainCertificateRequest::getCertificateType() const {
  return certificateType_;
}

void SetAppDomainCertificateRequest::setCertificateType(const std::string &certificateType) {
  certificateType_ = certificateType;
  setParameter(std::string("CertificateType"), certificateType);
}

std::string SetAppDomainCertificateRequest::getPrivateKey() const {
  return privateKey_;
}

void SetAppDomainCertificateRequest::setPrivateKey(const std::string &privateKey) {
  privateKey_ = privateKey;
  setParameter(std::string("PrivateKey"), privateKey);
}

std::string SetAppDomainCertificateRequest::getBizId() const {
  return bizId_;
}

void SetAppDomainCertificateRequest::setBizId(const std::string &bizId) {
  bizId_ = bizId;
  setParameter(std::string("BizId"), bizId);
}

std::string SetAppDomainCertificateRequest::getCertificateName() const {
  return certificateName_;
}

void SetAppDomainCertificateRequest::setCertificateName(const std::string &certificateName) {
  certificateName_ = certificateName;
  setParameter(std::string("CertificateName"), certificateName);
}

