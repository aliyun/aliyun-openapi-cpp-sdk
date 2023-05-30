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

#include <alibabacloud/kms/model/CertificatePublicKeyVerifyRequest.h>

using AlibabaCloud::Kms::Model::CertificatePublicKeyVerifyRequest;

CertificatePublicKeyVerifyRequest::CertificatePublicKeyVerifyRequest()
    : RpcServiceRequest("kms", "2016-01-20", "CertificatePublicKeyVerify") {
  setMethod(HttpRequest::Method::Post);
}

CertificatePublicKeyVerifyRequest::~CertificatePublicKeyVerifyRequest() {}

std::string CertificatePublicKeyVerifyRequest::getMessageType() const {
  return messageType_;
}

void CertificatePublicKeyVerifyRequest::setMessageType(const std::string &messageType) {
  messageType_ = messageType;
  setParameter(std::string("MessageType"), messageType);
}

std::string CertificatePublicKeyVerifyRequest::getCertificateId() const {
  return certificateId_;
}

void CertificatePublicKeyVerifyRequest::setCertificateId(const std::string &certificateId) {
  certificateId_ = certificateId;
  setParameter(std::string("CertificateId"), certificateId);
}

std::string CertificatePublicKeyVerifyRequest::getMessage() const {
  return message_;
}

void CertificatePublicKeyVerifyRequest::setMessage(const std::string &message) {
  message_ = message;
  setParameter(std::string("Message"), message);
}

std::string CertificatePublicKeyVerifyRequest::getSignatureValue() const {
  return signatureValue_;
}

void CertificatePublicKeyVerifyRequest::setSignatureValue(const std::string &signatureValue) {
  signatureValue_ = signatureValue;
  setParameter(std::string("SignatureValue"), signatureValue);
}

std::string CertificatePublicKeyVerifyRequest::getAlgorithm() const {
  return algorithm_;
}

void CertificatePublicKeyVerifyRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}

