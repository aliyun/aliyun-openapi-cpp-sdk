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

#include <alibabacloud/scdn/model/SetScdnDomainCertificateRequest.h>

using AlibabaCloud::Scdn::Model::SetScdnDomainCertificateRequest;

SetScdnDomainCertificateRequest::SetScdnDomainCertificateRequest()
    : RpcServiceRequest("scdn", "2017-11-15", "SetScdnDomainCertificate") {
  setMethod(HttpRequest::Method::Post);
}

SetScdnDomainCertificateRequest::~SetScdnDomainCertificateRequest() {}

std::string SetScdnDomainCertificateRequest::getSSLProtocol() const {
  return sSLProtocol_;
}

void SetScdnDomainCertificateRequest::setSSLProtocol(const std::string &sSLProtocol) {
  sSLProtocol_ = sSLProtocol;
  setParameter(std::string("SSLProtocol"), sSLProtocol);
}

std::string SetScdnDomainCertificateRequest::getSecurityToken() const {
  return securityToken_;
}

void SetScdnDomainCertificateRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string SetScdnDomainCertificateRequest::getCertType() const {
  return certType_;
}

void SetScdnDomainCertificateRequest::setCertType(const std::string &certType) {
  certType_ = certType;
  setParameter(std::string("CertType"), certType);
}

std::string SetScdnDomainCertificateRequest::getSSLPri() const {
  return sSLPri_;
}

void SetScdnDomainCertificateRequest::setSSLPri(const std::string &sSLPri) {
  sSLPri_ = sSLPri;
  setParameter(std::string("SSLPri"), sSLPri);
}

std::string SetScdnDomainCertificateRequest::getForceSet() const {
  return forceSet_;
}

void SetScdnDomainCertificateRequest::setForceSet(const std::string &forceSet) {
  forceSet_ = forceSet;
  setParameter(std::string("ForceSet"), forceSet);
}

std::string SetScdnDomainCertificateRequest::getCertName() const {
  return certName_;
}

void SetScdnDomainCertificateRequest::setCertName(const std::string &certName) {
  certName_ = certName;
  setParameter(std::string("CertName"), certName);
}

std::string SetScdnDomainCertificateRequest::getDomainName() const {
  return domainName_;
}

void SetScdnDomainCertificateRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long SetScdnDomainCertificateRequest::getOwnerId() const {
  return ownerId_;
}

void SetScdnDomainCertificateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetScdnDomainCertificateRequest::getSSLPub() const {
  return sSLPub_;
}

void SetScdnDomainCertificateRequest::setSSLPub(const std::string &sSLPub) {
  sSLPub_ = sSLPub;
  setParameter(std::string("SSLPub"), sSLPub);
}

std::string SetScdnDomainCertificateRequest::getRegion() const {
  return region_;
}

void SetScdnDomainCertificateRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

