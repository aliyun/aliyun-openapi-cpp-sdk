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

#include <alibabacloud/vod/model/SetVodDomainSSLCertificateRequest.h>

using AlibabaCloud::Vod::Model::SetVodDomainSSLCertificateRequest;

SetVodDomainSSLCertificateRequest::SetVodDomainSSLCertificateRequest()
    : RpcServiceRequest("vod", "2017-03-21", "SetVodDomainSSLCertificate") {
  setMethod(HttpRequest::Method::Post);
}

SetVodDomainSSLCertificateRequest::~SetVodDomainSSLCertificateRequest() {}

std::string SetVodDomainSSLCertificateRequest::getSSLProtocol() const {
  return sSLProtocol_;
}

void SetVodDomainSSLCertificateRequest::setSSLProtocol(const std::string &sSLProtocol) {
  sSLProtocol_ = sSLProtocol;
  setParameter(std::string("SSLProtocol"), sSLProtocol);
}

long SetVodDomainSSLCertificateRequest::getCertId() const {
  return certId_;
}

void SetVodDomainSSLCertificateRequest::setCertId(long certId) {
  certId_ = certId;
  setParameter(std::string("CertId"), std::to_string(certId));
}

std::string SetVodDomainSSLCertificateRequest::getSecurityToken() const {
  return securityToken_;
}

void SetVodDomainSSLCertificateRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string SetVodDomainSSLCertificateRequest::getCertType() const {
  return certType_;
}

void SetVodDomainSSLCertificateRequest::setCertType(const std::string &certType) {
  certType_ = certType;
  setParameter(std::string("CertType"), certType);
}

std::string SetVodDomainSSLCertificateRequest::getSSLPri() const {
  return sSLPri_;
}

void SetVodDomainSSLCertificateRequest::setSSLPri(const std::string &sSLPri) {
  sSLPri_ = sSLPri;
  setParameter(std::string("SSLPri"), sSLPri);
}

std::string SetVodDomainSSLCertificateRequest::getCertRegion() const {
  return certRegion_;
}

void SetVodDomainSSLCertificateRequest::setCertRegion(const std::string &certRegion) {
  certRegion_ = certRegion;
  setParameter(std::string("CertRegion"), certRegion);
}

std::string SetVodDomainSSLCertificateRequest::getCertName() const {
  return certName_;
}

void SetVodDomainSSLCertificateRequest::setCertName(const std::string &certName) {
  certName_ = certName;
  setParameter(std::string("CertName"), certName);
}

std::string SetVodDomainSSLCertificateRequest::getDomainName() const {
  return domainName_;
}

void SetVodDomainSSLCertificateRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long SetVodDomainSSLCertificateRequest::getOwnerId() const {
  return ownerId_;
}

void SetVodDomainSSLCertificateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetVodDomainSSLCertificateRequest::getEnv() const {
  return env_;
}

void SetVodDomainSSLCertificateRequest::setEnv(const std::string &env) {
  env_ = env;
  setParameter(std::string("Env"), env);
}

std::string SetVodDomainSSLCertificateRequest::getSSLPub() const {
  return sSLPub_;
}

void SetVodDomainSSLCertificateRequest::setSSLPub(const std::string &sSLPub) {
  sSLPub_ = sSLPub;
  setParameter(std::string("SSLPub"), sSLPub);
}

