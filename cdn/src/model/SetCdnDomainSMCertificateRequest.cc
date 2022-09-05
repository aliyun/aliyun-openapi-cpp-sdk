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

#include <alibabacloud/cdn/model/SetCdnDomainSMCertificateRequest.h>

using AlibabaCloud::Cdn::Model::SetCdnDomainSMCertificateRequest;

SetCdnDomainSMCertificateRequest::SetCdnDomainSMCertificateRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "SetCdnDomainSMCertificate") {
  setMethod(HttpRequest::Method::Post);
}

SetCdnDomainSMCertificateRequest::~SetCdnDomainSMCertificateRequest() {}

std::string SetCdnDomainSMCertificateRequest::getSSLProtocol() const {
  return sSLProtocol_;
}

void SetCdnDomainSMCertificateRequest::setSSLProtocol(const std::string &sSLProtocol) {
  sSLProtocol_ = sSLProtocol;
  setParameter(std::string("SSLProtocol"), sSLProtocol);
}

std::string SetCdnDomainSMCertificateRequest::getDomainName() const {
  return domainName_;
}

void SetCdnDomainSMCertificateRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long SetCdnDomainSMCertificateRequest::getOwnerId() const {
  return ownerId_;
}

void SetCdnDomainSMCertificateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetCdnDomainSMCertificateRequest::getSecurityToken() const {
  return securityToken_;
}

void SetCdnDomainSMCertificateRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string SetCdnDomainSMCertificateRequest::getCertIdentifier() const {
  return certIdentifier_;
}

void SetCdnDomainSMCertificateRequest::setCertIdentifier(const std::string &certIdentifier) {
  certIdentifier_ = certIdentifier;
  setParameter(std::string("CertIdentifier"), certIdentifier);
}

