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

#include <alibabacloud/dcdn/model/BatchSetDcdnDomainCertificateRequest.h>

using AlibabaCloud::Dcdn::Model::BatchSetDcdnDomainCertificateRequest;

BatchSetDcdnDomainCertificateRequest::BatchSetDcdnDomainCertificateRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "BatchSetDcdnDomainCertificate") {
  setMethod(HttpRequest::Method::Post);
}

BatchSetDcdnDomainCertificateRequest::~BatchSetDcdnDomainCertificateRequest() {}

std::string BatchSetDcdnDomainCertificateRequest::getSSLProtocol() const {
  return sSLProtocol_;
}

void BatchSetDcdnDomainCertificateRequest::setSSLProtocol(const std::string &sSLProtocol) {
  sSLProtocol_ = sSLProtocol;
  setParameter(std::string("SSLProtocol"), sSLProtocol);
}

std::string BatchSetDcdnDomainCertificateRequest::getSecurityToken() const {
  return securityToken_;
}

void BatchSetDcdnDomainCertificateRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string BatchSetDcdnDomainCertificateRequest::getCertType() const {
  return certType_;
}

void BatchSetDcdnDomainCertificateRequest::setCertType(const std::string &certType) {
  certType_ = certType;
  setParameter(std::string("CertType"), certType);
}

std::string BatchSetDcdnDomainCertificateRequest::getSSLPri() const {
  return sSLPri_;
}

void BatchSetDcdnDomainCertificateRequest::setSSLPri(const std::string &sSLPri) {
  sSLPri_ = sSLPri;
  setParameter(std::string("SSLPri"), sSLPri);
}

std::string BatchSetDcdnDomainCertificateRequest::getCertName() const {
  return certName_;
}

void BatchSetDcdnDomainCertificateRequest::setCertName(const std::string &certName) {
  certName_ = certName;
  setParameter(std::string("CertName"), certName);
}

std::string BatchSetDcdnDomainCertificateRequest::getDomainName() const {
  return domainName_;
}

void BatchSetDcdnDomainCertificateRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long BatchSetDcdnDomainCertificateRequest::getOwnerId() const {
  return ownerId_;
}

void BatchSetDcdnDomainCertificateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string BatchSetDcdnDomainCertificateRequest::getSSLPub() const {
  return sSLPub_;
}

void BatchSetDcdnDomainCertificateRequest::setSSLPub(const std::string &sSLPub) {
  sSLPub_ = sSLPub;
  setParameter(std::string("SSLPub"), sSLPub);
}

std::string BatchSetDcdnDomainCertificateRequest::getRegion() const {
  return region_;
}

void BatchSetDcdnDomainCertificateRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

