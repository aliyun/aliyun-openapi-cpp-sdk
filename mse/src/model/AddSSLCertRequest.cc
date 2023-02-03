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

#include <alibabacloud/mse/model/AddSSLCertRequest.h>

using AlibabaCloud::Mse::Model::AddSSLCertRequest;

AddSSLCertRequest::AddSSLCertRequest()
    : RpcServiceRequest("mse", "2019-05-31", "AddSSLCert") {
  setMethod(HttpRequest::Method::Post);
}

AddSSLCertRequest::~AddSSLCertRequest() {}

std::string AddSSLCertRequest::getMseSessionId() const {
  return mseSessionId_;
}

void AddSSLCertRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string AddSSLCertRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void AddSSLCertRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

long AddSSLCertRequest::getDomainId() const {
  return domainId_;
}

void AddSSLCertRequest::setDomainId(long domainId) {
  domainId_ = domainId;
  setParameter(std::string("DomainId"), std::to_string(domainId));
}

std::string AddSSLCertRequest::getCertIdentifier() const {
  return certIdentifier_;
}

void AddSSLCertRequest::setCertIdentifier(const std::string &certIdentifier) {
  certIdentifier_ = certIdentifier;
  setParameter(std::string("CertIdentifier"), certIdentifier);
}

std::string AddSSLCertRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void AddSSLCertRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

