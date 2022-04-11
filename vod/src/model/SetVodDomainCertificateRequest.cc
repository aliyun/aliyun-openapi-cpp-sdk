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

#include <alibabacloud/vod/model/SetVodDomainCertificateRequest.h>

using AlibabaCloud::Vod::Model::SetVodDomainCertificateRequest;

SetVodDomainCertificateRequest::SetVodDomainCertificateRequest()
    : RpcServiceRequest("vod", "2017-03-21", "SetVodDomainCertificate") {
  setMethod(HttpRequest::Method::Post);
}

SetVodDomainCertificateRequest::~SetVodDomainCertificateRequest() {}

std::string SetVodDomainCertificateRequest::getSSLProtocol() const {
  return sSLProtocol_;
}

void SetVodDomainCertificateRequest::setSSLProtocol(const std::string &sSLProtocol) {
  sSLProtocol_ = sSLProtocol;
  setParameter(std::string("SSLProtocol"), sSLProtocol);
}

std::string SetVodDomainCertificateRequest::getSecurityToken() const {
  return securityToken_;
}

void SetVodDomainCertificateRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string SetVodDomainCertificateRequest::getSSLPri() const {
  return sSLPri_;
}

void SetVodDomainCertificateRequest::setSSLPri(const std::string &sSLPri) {
  sSLPri_ = sSLPri;
  setParameter(std::string("SSLPri"), sSLPri);
}

std::string SetVodDomainCertificateRequest::getCertName() const {
  return certName_;
}

void SetVodDomainCertificateRequest::setCertName(const std::string &certName) {
  certName_ = certName;
  setParameter(std::string("CertName"), certName);
}

std::string SetVodDomainCertificateRequest::getDomainName() const {
  return domainName_;
}

void SetVodDomainCertificateRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long SetVodDomainCertificateRequest::getOwnerId() const {
  return ownerId_;
}

void SetVodDomainCertificateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetVodDomainCertificateRequest::getSSLPub() const {
  return sSLPub_;
}

void SetVodDomainCertificateRequest::setSSLPub(const std::string &sSLPub) {
  sSLPub_ = sSLPub;
  setParameter(std::string("SSLPub"), sSLPub);
}

std::string SetVodDomainCertificateRequest::getRegion() const {
  return region_;
}

void SetVodDomainCertificateRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

