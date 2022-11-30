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

#include <alibabacloud/cas/model/UploadUserCertificateRequest.h>

using AlibabaCloud::Cas::Model::UploadUserCertificateRequest;

UploadUserCertificateRequest::UploadUserCertificateRequest()
    : RpcServiceRequest("cas", "2020-04-07", "UploadUserCertificate") {
  setMethod(HttpRequest::Method::Post);
}

UploadUserCertificateRequest::~UploadUserCertificateRequest() {}

std::string UploadUserCertificateRequest::getEncryptCert() const {
  return encryptCert_;
}

void UploadUserCertificateRequest::setEncryptCert(const std::string &encryptCert) {
  encryptCert_ = encryptCert;
  setParameter(std::string("EncryptCert"), encryptCert);
}

std::string UploadUserCertificateRequest::getCert() const {
  return cert_;
}

void UploadUserCertificateRequest::setCert(const std::string &cert) {
  cert_ = cert;
  setParameter(std::string("Cert"), cert);
}

std::string UploadUserCertificateRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void UploadUserCertificateRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string UploadUserCertificateRequest::getSourceIp() const {
  return sourceIp_;
}

void UploadUserCertificateRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string UploadUserCertificateRequest::getKey() const {
  return key_;
}

void UploadUserCertificateRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

std::string UploadUserCertificateRequest::getEncryptPrivateKey() const {
  return encryptPrivateKey_;
}

void UploadUserCertificateRequest::setEncryptPrivateKey(const std::string &encryptPrivateKey) {
  encryptPrivateKey_ = encryptPrivateKey;
  setParameter(std::string("EncryptPrivateKey"), encryptPrivateKey);
}

std::string UploadUserCertificateRequest::getSignPrivateKey() const {
  return signPrivateKey_;
}

void UploadUserCertificateRequest::setSignPrivateKey(const std::string &signPrivateKey) {
  signPrivateKey_ = signPrivateKey;
  setParameter(std::string("SignPrivateKey"), signPrivateKey);
}

std::string UploadUserCertificateRequest::getSignCert() const {
  return signCert_;
}

void UploadUserCertificateRequest::setSignCert(const std::string &signCert) {
  signCert_ = signCert;
  setParameter(std::string("SignCert"), signCert);
}

std::string UploadUserCertificateRequest::getName() const {
  return name_;
}

void UploadUserCertificateRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

