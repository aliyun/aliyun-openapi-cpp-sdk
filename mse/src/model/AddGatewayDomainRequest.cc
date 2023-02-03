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

#include <alibabacloud/mse/model/AddGatewayDomainRequest.h>

using AlibabaCloud::Mse::Model::AddGatewayDomainRequest;

AddGatewayDomainRequest::AddGatewayDomainRequest()
    : RpcServiceRequest("mse", "2019-05-31", "AddGatewayDomain") {
  setMethod(HttpRequest::Method::Post);
}

AddGatewayDomainRequest::~AddGatewayDomainRequest() {}

std::string AddGatewayDomainRequest::getMseSessionId() const {
  return mseSessionId_;
}

void AddGatewayDomainRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string AddGatewayDomainRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void AddGatewayDomainRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string AddGatewayDomainRequest::getTlsMax() const {
  return tlsMax_;
}

void AddGatewayDomainRequest::setTlsMax(const std::string &tlsMax) {
  tlsMax_ = tlsMax;
  setParameter(std::string("TlsMax"), tlsMax);
}

std::string AddGatewayDomainRequest::getProtocol() const {
  return protocol_;
}

void AddGatewayDomainRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

bool AddGatewayDomainRequest::getMustHttps() const {
  return mustHttps_;
}

void AddGatewayDomainRequest::setMustHttps(bool mustHttps) {
  mustHttps_ = mustHttps;
  setParameter(std::string("MustHttps"), mustHttps ? "true" : "false");
}

std::string AddGatewayDomainRequest::getHttp2() const {
  return http2_;
}

void AddGatewayDomainRequest::setHttp2(const std::string &http2) {
  http2_ = http2;
  setParameter(std::string("Http2"), http2);
}

std::string AddGatewayDomainRequest::getTlsMin() const {
  return tlsMin_;
}

void AddGatewayDomainRequest::setTlsMin(const std::string &tlsMin) {
  tlsMin_ = tlsMin;
  setParameter(std::string("TlsMin"), tlsMin);
}

std::string AddGatewayDomainRequest::getCertIdentifier() const {
  return certIdentifier_;
}

void AddGatewayDomainRequest::setCertIdentifier(const std::string &certIdentifier) {
  certIdentifier_ = certIdentifier;
  setParameter(std::string("CertIdentifier"), certIdentifier);
}

std::string AddGatewayDomainRequest::getName() const {
  return name_;
}

void AddGatewayDomainRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string AddGatewayDomainRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void AddGatewayDomainRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

