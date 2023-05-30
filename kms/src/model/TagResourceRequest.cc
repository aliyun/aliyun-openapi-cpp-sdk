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

#include <alibabacloud/kms/model/TagResourceRequest.h>

using AlibabaCloud::Kms::Model::TagResourceRequest;

TagResourceRequest::TagResourceRequest()
    : RpcServiceRequest("kms", "2016-01-20", "TagResource") {
  setMethod(HttpRequest::Method::Post);
}

TagResourceRequest::~TagResourceRequest() {}

std::string TagResourceRequest::getCertificateId() const {
  return certificateId_;
}

void TagResourceRequest::setCertificateId(const std::string &certificateId) {
  certificateId_ = certificateId;
  setParameter(std::string("CertificateId"), certificateId);
}

std::string TagResourceRequest::getKeyId() const {
  return keyId_;
}

void TagResourceRequest::setKeyId(const std::string &keyId) {
  keyId_ = keyId;
  setParameter(std::string("KeyId"), keyId);
}

std::string TagResourceRequest::getTags() const {
  return tags_;
}

void TagResourceRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string TagResourceRequest::getSecretName() const {
  return secretName_;
}

void TagResourceRequest::setSecretName(const std::string &secretName) {
  secretName_ = secretName;
  setParameter(std::string("SecretName"), secretName);
}

