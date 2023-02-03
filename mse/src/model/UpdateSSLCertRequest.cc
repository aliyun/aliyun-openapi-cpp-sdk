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

#include <alibabacloud/mse/model/UpdateSSLCertRequest.h>

using AlibabaCloud::Mse::Model::UpdateSSLCertRequest;

UpdateSSLCertRequest::UpdateSSLCertRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateSSLCert") {
  setMethod(HttpRequest::Method::Post);
}

UpdateSSLCertRequest::~UpdateSSLCertRequest() {}

std::string UpdateSSLCertRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateSSLCertRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateSSLCertRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void UpdateSSLCertRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

long UpdateSSLCertRequest::getDomainId() const {
  return domainId_;
}

void UpdateSSLCertRequest::setDomainId(long domainId) {
  domainId_ = domainId;
  setParameter(std::string("DomainId"), std::to_string(domainId));
}

std::string UpdateSSLCertRequest::getCertIdentifier() const {
  return certIdentifier_;
}

void UpdateSSLCertRequest::setCertIdentifier(const std::string &certIdentifier) {
  certIdentifier_ = certIdentifier;
  setParameter(std::string("CertIdentifier"), certIdentifier);
}

std::string UpdateSSLCertRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateSSLCertRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

