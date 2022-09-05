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

#include <alibabacloud/cdn/model/SetDomainServerCertificateRequest.h>

using AlibabaCloud::Cdn::Model::SetDomainServerCertificateRequest;

SetDomainServerCertificateRequest::SetDomainServerCertificateRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "SetDomainServerCertificate") {
  setMethod(HttpRequest::Method::Post);
}

SetDomainServerCertificateRequest::~SetDomainServerCertificateRequest() {}

std::string SetDomainServerCertificateRequest::getServerCertificate() const {
  return serverCertificate_;
}

void SetDomainServerCertificateRequest::setServerCertificate(const std::string &serverCertificate) {
  serverCertificate_ = serverCertificate;
  setParameter(std::string("ServerCertificate"), serverCertificate);
}

std::string SetDomainServerCertificateRequest::getPrivateKey() const {
  return privateKey_;
}

void SetDomainServerCertificateRequest::setPrivateKey(const std::string &privateKey) {
  privateKey_ = privateKey;
  setParameter(std::string("PrivateKey"), privateKey);
}

std::string SetDomainServerCertificateRequest::getServerCertificateStatus() const {
  return serverCertificateStatus_;
}

void SetDomainServerCertificateRequest::setServerCertificateStatus(const std::string &serverCertificateStatus) {
  serverCertificateStatus_ = serverCertificateStatus;
  setParameter(std::string("ServerCertificateStatus"), serverCertificateStatus);
}

std::string SetDomainServerCertificateRequest::getSecurityToken() const {
  return securityToken_;
}

void SetDomainServerCertificateRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string SetDomainServerCertificateRequest::getCertType() const {
  return certType_;
}

void SetDomainServerCertificateRequest::setCertType(const std::string &certType) {
  certType_ = certType;
  setParameter(std::string("CertType"), certType);
}

std::string SetDomainServerCertificateRequest::getForceSet() const {
  return forceSet_;
}

void SetDomainServerCertificateRequest::setForceSet(const std::string &forceSet) {
  forceSet_ = forceSet;
  setParameter(std::string("ForceSet"), forceSet);
}

std::string SetDomainServerCertificateRequest::getCertName() const {
  return certName_;
}

void SetDomainServerCertificateRequest::setCertName(const std::string &certName) {
  certName_ = certName;
  setParameter(std::string("CertName"), certName);
}

std::string SetDomainServerCertificateRequest::getDomainName() const {
  return domainName_;
}

void SetDomainServerCertificateRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long SetDomainServerCertificateRequest::getOwnerId() const {
  return ownerId_;
}

void SetDomainServerCertificateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

