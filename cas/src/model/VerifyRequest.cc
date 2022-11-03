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

#include <alibabacloud/cas/model/VerifyRequest.h>

using AlibabaCloud::Cas::Model::VerifyRequest;

VerifyRequest::VerifyRequest()
    : RpcServiceRequest("cas", "2020-04-07", "Verify") {
  setMethod(HttpRequest::Method::Post);
}

VerifyRequest::~VerifyRequest() {}

std::string VerifyRequest::getMessageType() const {
  return messageType_;
}

void VerifyRequest::setMessageType(const std::string &messageType) {
  messageType_ = messageType;
  setParameter(std::string("MessageType"), messageType);
}

std::string VerifyRequest::getSigningAlgorithm() const {
  return signingAlgorithm_;
}

void VerifyRequest::setSigningAlgorithm(const std::string &signingAlgorithm) {
  signingAlgorithm_ = signingAlgorithm;
  setParameter(std::string("SigningAlgorithm"), signingAlgorithm);
}

std::string VerifyRequest::getMessage() const {
  return message_;
}

void VerifyRequest::setMessage(const std::string &message) {
  message_ = message;
  setParameter(std::string("Message"), message);
}

std::string VerifyRequest::getSignatureValue() const {
  return signatureValue_;
}

void VerifyRequest::setSignatureValue(const std::string &signatureValue) {
  signatureValue_ = signatureValue;
  setParameter(std::string("SignatureValue"), signatureValue);
}

std::string VerifyRequest::getSourceIp() const {
  return sourceIp_;
}

void VerifyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string VerifyRequest::getCertIdentifier() const {
  return certIdentifier_;
}

void VerifyRequest::setCertIdentifier(const std::string &certIdentifier) {
  certIdentifier_ = certIdentifier;
  setParameter(std::string("CertIdentifier"), certIdentifier);
}

