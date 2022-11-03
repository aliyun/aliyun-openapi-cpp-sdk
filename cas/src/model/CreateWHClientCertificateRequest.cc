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

#include <alibabacloud/cas/model/CreateWHClientCertificateRequest.h>

using AlibabaCloud::Cas::Model::CreateWHClientCertificateRequest;

CreateWHClientCertificateRequest::CreateWHClientCertificateRequest()
    : RpcServiceRequest("cas", "2020-04-07", "CreateWHClientCertificate") {
  setMethod(HttpRequest::Method::Post);
}

CreateWHClientCertificateRequest::~CreateWHClientCertificateRequest() {}

std::string CreateWHClientCertificateRequest::getCsr() const {
  return csr_;
}

void CreateWHClientCertificateRequest::setCsr(const std::string &csr) {
  csr_ = csr;
  setParameter(std::string("Csr"), csr);
}

std::string CreateWHClientCertificateRequest::getCommonName() const {
  return commonName_;
}

void CreateWHClientCertificateRequest::setCommonName(const std::string &commonName) {
  commonName_ = commonName;
  setParameter(std::string("CommonName"), commonName);
}

std::string CreateWHClientCertificateRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateWHClientCertificateRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string CreateWHClientCertificateRequest::getSanValue() const {
  return sanValue_;
}

void CreateWHClientCertificateRequest::setSanValue(const std::string &sanValue) {
  sanValue_ = sanValue;
  setParameter(std::string("SanValue"), sanValue);
}

std::string CreateWHClientCertificateRequest::getAlgorithm() const {
  return algorithm_;
}

void CreateWHClientCertificateRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}

long CreateWHClientCertificateRequest::getAfterTime() const {
  return afterTime_;
}

void CreateWHClientCertificateRequest::setAfterTime(long afterTime) {
  afterTime_ = afterTime;
  setParameter(std::string("AfterTime"), std::to_string(afterTime));
}

long CreateWHClientCertificateRequest::getSanType() const {
  return sanType_;
}

void CreateWHClientCertificateRequest::setSanType(long sanType) {
  sanType_ = sanType;
  setParameter(std::string("SanType"), std::to_string(sanType));
}

long CreateWHClientCertificateRequest::getDays() const {
  return days_;
}

void CreateWHClientCertificateRequest::setDays(long days) {
  days_ = days;
  setParameter(std::string("Days"), std::to_string(days));
}

long CreateWHClientCertificateRequest::getBeforeTime() const {
  return beforeTime_;
}

void CreateWHClientCertificateRequest::setBeforeTime(long beforeTime) {
  beforeTime_ = beforeTime;
  setParameter(std::string("BeforeTime"), std::to_string(beforeTime));
}

std::string CreateWHClientCertificateRequest::getParentIdentifier() const {
  return parentIdentifier_;
}

void CreateWHClientCertificateRequest::setParentIdentifier(const std::string &parentIdentifier) {
  parentIdentifier_ = parentIdentifier;
  setParameter(std::string("ParentIdentifier"), parentIdentifier);
}

