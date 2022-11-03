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

#include <alibabacloud/cas/model/EncryptRequest.h>

using AlibabaCloud::Cas::Model::EncryptRequest;

EncryptRequest::EncryptRequest()
    : RpcServiceRequest("cas", "2020-04-07", "Encrypt") {
  setMethod(HttpRequest::Method::Post);
}

EncryptRequest::~EncryptRequest() {}

std::string EncryptRequest::getMessageType() const {
  return messageType_;
}

void EncryptRequest::setMessageType(const std::string &messageType) {
  messageType_ = messageType;
  setParameter(std::string("MessageType"), messageType);
}

std::string EncryptRequest::getPlaintext() const {
  return plaintext_;
}

void EncryptRequest::setPlaintext(const std::string &plaintext) {
  plaintext_ = plaintext;
  setParameter(std::string("Plaintext"), plaintext);
}

std::string EncryptRequest::getSourceIp() const {
  return sourceIp_;
}

void EncryptRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string EncryptRequest::getCertIdentifier() const {
  return certIdentifier_;
}

void EncryptRequest::setCertIdentifier(const std::string &certIdentifier) {
  certIdentifier_ = certIdentifier;
  setParameter(std::string("CertIdentifier"), certIdentifier);
}

std::string EncryptRequest::getAlgorithm() const {
  return algorithm_;
}

void EncryptRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}

