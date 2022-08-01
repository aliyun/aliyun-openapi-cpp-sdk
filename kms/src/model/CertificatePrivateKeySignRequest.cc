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

#include <alibabacloud/kms/model/CertificatePrivateKeySignRequest.h>

using AlibabaCloud::Kms::Model::CertificatePrivateKeySignRequest;

CertificatePrivateKeySignRequest::CertificatePrivateKeySignRequest()
    : RpcServiceRequest("kms", "2016-01-20", "CertificatePrivateKeySign") {
  setMethod(HttpRequest::Method::Post);
}

CertificatePrivateKeySignRequest::~CertificatePrivateKeySignRequest() {}

std::string CertificatePrivateKeySignRequest::getMessageType() const {
  return messageType_;
}

void CertificatePrivateKeySignRequest::setMessageType(const std::string &messageType) {
  messageType_ = messageType;
  setParameter(std::string("MessageType"), messageType);
}

std::string CertificatePrivateKeySignRequest::getCertificateId() const {
  return certificateId_;
}

void CertificatePrivateKeySignRequest::setCertificateId(const std::string &certificateId) {
  certificateId_ = certificateId;
  setParameter(std::string("CertificateId"), certificateId);
}

std::string CertificatePrivateKeySignRequest::getMessage() const {
  return message_;
}

void CertificatePrivateKeySignRequest::setMessage(const std::string &message) {
  message_ = message;
  setParameter(std::string("Message"), message);
}

std::string CertificatePrivateKeySignRequest::getAlgorithm() const {
  return algorithm_;
}

void CertificatePrivateKeySignRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}

