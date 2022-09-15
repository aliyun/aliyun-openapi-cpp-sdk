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

#include <alibabacloud/live/model/SetLiveDomainCertificateRequest.h>

using AlibabaCloud::Live::Model::SetLiveDomainCertificateRequest;

SetLiveDomainCertificateRequest::SetLiveDomainCertificateRequest()
    : RpcServiceRequest("live", "2016-11-01", "SetLiveDomainCertificate") {
  setMethod(HttpRequest::Method::Post);
}

SetLiveDomainCertificateRequest::~SetLiveDomainCertificateRequest() {}

std::string SetLiveDomainCertificateRequest::getSSLProtocol() const {
  return sSLProtocol_;
}

void SetLiveDomainCertificateRequest::setSSLProtocol(const std::string &sSLProtocol) {
  sSLProtocol_ = sSLProtocol;
  setParameter(std::string("SSLProtocol"), sSLProtocol);
}

std::string SetLiveDomainCertificateRequest::getSecurityToken() const {
  return securityToken_;
}

void SetLiveDomainCertificateRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string SetLiveDomainCertificateRequest::getCertType() const {
  return certType_;
}

void SetLiveDomainCertificateRequest::setCertType(const std::string &certType) {
  certType_ = certType;
  setParameter(std::string("CertType"), certType);
}

std::string SetLiveDomainCertificateRequest::getSSLPri() const {
  return sSLPri_;
}

void SetLiveDomainCertificateRequest::setSSLPri(const std::string &sSLPri) {
  sSLPri_ = sSLPri;
  setParameter(std::string("SSLPri"), sSLPri);
}

std::string SetLiveDomainCertificateRequest::getForceSet() const {
  return forceSet_;
}

void SetLiveDomainCertificateRequest::setForceSet(const std::string &forceSet) {
  forceSet_ = forceSet;
  setParameter(std::string("ForceSet"), forceSet);
}

std::string SetLiveDomainCertificateRequest::getCertName() const {
  return certName_;
}

void SetLiveDomainCertificateRequest::setCertName(const std::string &certName) {
  certName_ = certName;
  setParameter(std::string("CertName"), certName);
}

std::string SetLiveDomainCertificateRequest::getDomainName() const {
  return domainName_;
}

void SetLiveDomainCertificateRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long SetLiveDomainCertificateRequest::getOwnerId() const {
  return ownerId_;
}

void SetLiveDomainCertificateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetLiveDomainCertificateRequest::getSSLPub() const {
  return sSLPub_;
}

void SetLiveDomainCertificateRequest::setSSLPub(const std::string &sSLPub) {
  sSLPub_ = sSLPub;
  setParameter(std::string("SSLPub"), sSLPub);
}

