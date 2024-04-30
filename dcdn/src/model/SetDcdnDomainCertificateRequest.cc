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

#include <alibabacloud/dcdn/model/SetDcdnDomainCertificateRequest.h>

using AlibabaCloud::Dcdn::Model::SetDcdnDomainCertificateRequest;

SetDcdnDomainCertificateRequest::SetDcdnDomainCertificateRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "SetDcdnDomainCertificate") {
  setMethod(HttpRequest::Method::Post);
}

SetDcdnDomainCertificateRequest::~SetDcdnDomainCertificateRequest() {}

std::string SetDcdnDomainCertificateRequest::getSSLProtocol() const {
  return sSLProtocol_;
}

void SetDcdnDomainCertificateRequest::setSSLProtocol(const std::string &sSLProtocol) {
  sSLProtocol_ = sSLProtocol;
  setParameter(std::string("SSLProtocol"), sSLProtocol);
}

std::string SetDcdnDomainCertificateRequest::getSecurityToken() const {
  return securityToken_;
}

void SetDcdnDomainCertificateRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string SetDcdnDomainCertificateRequest::getCertType() const {
  return certType_;
}

void SetDcdnDomainCertificateRequest::setCertType(const std::string &certType) {
  certType_ = certType;
  setParameter(std::string("CertType"), certType);
}

std::string SetDcdnDomainCertificateRequest::getSSLPri() const {
  return sSLPri_;
}

void SetDcdnDomainCertificateRequest::setSSLPri(const std::string &sSLPri) {
  sSLPri_ = sSLPri;
  setParameter(std::string("SSLPri"), sSLPri);
}

std::string SetDcdnDomainCertificateRequest::getForceSet() const {
  return forceSet_;
}

void SetDcdnDomainCertificateRequest::setForceSet(const std::string &forceSet) {
  forceSet_ = forceSet;
  setParameter(std::string("ForceSet"), forceSet);
}

std::string SetDcdnDomainCertificateRequest::getCertName() const {
  return certName_;
}

void SetDcdnDomainCertificateRequest::setCertName(const std::string &certName) {
  certName_ = certName;
  setParameter(std::string("CertName"), certName);
}

std::string SetDcdnDomainCertificateRequest::getDomainName() const {
  return domainName_;
}

void SetDcdnDomainCertificateRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long SetDcdnDomainCertificateRequest::getOwnerId() const {
  return ownerId_;
}

void SetDcdnDomainCertificateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetDcdnDomainCertificateRequest::getSSLPub() const {
  return sSLPub_;
}

void SetDcdnDomainCertificateRequest::setSSLPub(const std::string &sSLPub) {
  sSLPub_ = sSLPub;
  setParameter(std::string("SSLPub"), sSLPub);
}

std::string SetDcdnDomainCertificateRequest::getRegion() const {
  return region_;
}

void SetDcdnDomainCertificateRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

