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

#include <alibabacloud/dcdn/model/SetDcdnDomainSSLCertificateRequest.h>

using AlibabaCloud::Dcdn::Model::SetDcdnDomainSSLCertificateRequest;

SetDcdnDomainSSLCertificateRequest::SetDcdnDomainSSLCertificateRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "SetDcdnDomainSSLCertificate") {
  setMethod(HttpRequest::Method::Post);
}

SetDcdnDomainSSLCertificateRequest::~SetDcdnDomainSSLCertificateRequest() {}

std::string SetDcdnDomainSSLCertificateRequest::getSSLProtocol() const {
  return sSLProtocol_;
}

void SetDcdnDomainSSLCertificateRequest::setSSLProtocol(const std::string &sSLProtocol) {
  sSLProtocol_ = sSLProtocol;
  setParameter(std::string("SSLProtocol"), sSLProtocol);
}

long SetDcdnDomainSSLCertificateRequest::getCertId() const {
  return certId_;
}

void SetDcdnDomainSSLCertificateRequest::setCertId(long certId) {
  certId_ = certId;
  setParameter(std::string("CertId"), std::to_string(certId));
}

std::string SetDcdnDomainSSLCertificateRequest::getSecurityToken() const {
  return securityToken_;
}

void SetDcdnDomainSSLCertificateRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string SetDcdnDomainSSLCertificateRequest::getCertType() const {
  return certType_;
}

void SetDcdnDomainSSLCertificateRequest::setCertType(const std::string &certType) {
  certType_ = certType;
  setParameter(std::string("CertType"), certType);
}

std::string SetDcdnDomainSSLCertificateRequest::getSSLPri() const {
  return sSLPri_;
}

void SetDcdnDomainSSLCertificateRequest::setSSLPri(const std::string &sSLPri) {
  sSLPri_ = sSLPri;
  setParameter(std::string("SSLPri"), sSLPri);
}

std::string SetDcdnDomainSSLCertificateRequest::getCertRegion() const {
  return certRegion_;
}

void SetDcdnDomainSSLCertificateRequest::setCertRegion(const std::string &certRegion) {
  certRegion_ = certRegion;
  setParameter(std::string("CertRegion"), certRegion);
}

std::string SetDcdnDomainSSLCertificateRequest::getCertName() const {
  return certName_;
}

void SetDcdnDomainSSLCertificateRequest::setCertName(const std::string &certName) {
  certName_ = certName;
  setParameter(std::string("CertName"), certName);
}

std::string SetDcdnDomainSSLCertificateRequest::getDomainName() const {
  return domainName_;
}

void SetDcdnDomainSSLCertificateRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long SetDcdnDomainSSLCertificateRequest::getOwnerId() const {
  return ownerId_;
}

void SetDcdnDomainSSLCertificateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetDcdnDomainSSLCertificateRequest::getEnv() const {
  return env_;
}

void SetDcdnDomainSSLCertificateRequest::setEnv(const std::string &env) {
  env_ = env;
  setParameter(std::string("Env"), env);
}

std::string SetDcdnDomainSSLCertificateRequest::getSSLPub() const {
  return sSLPub_;
}

void SetDcdnDomainSSLCertificateRequest::setSSLPub(const std::string &sSLPub) {
  sSLPub_ = sSLPub;
  setParameter(std::string("SSLPub"), sSLPub);
}

