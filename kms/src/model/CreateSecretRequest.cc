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

#include <alibabacloud/kms/model/CreateSecretRequest.h>

using AlibabaCloud::Kms::Model::CreateSecretRequest;

CreateSecretRequest::CreateSecretRequest()
    : RpcServiceRequest("kms", "2016-01-20", "CreateSecret") {
  setMethod(HttpRequest::Method::Post);
}

CreateSecretRequest::~CreateSecretRequest() {}

std::string CreateSecretRequest::getSecretType() const {
  return secretType_;
}

void CreateSecretRequest::setSecretType(const std::string &secretType) {
  secretType_ = secretType;
  setParameter(std::string("SecretType"), secretType);
}

std::string CreateSecretRequest::getDescription() const {
  return description_;
}

void CreateSecretRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateSecretRequest::getRotationInterval() const {
  return rotationInterval_;
}

void CreateSecretRequest::setRotationInterval(const std::string &rotationInterval) {
  rotationInterval_ = rotationInterval;
  setParameter(std::string("RotationInterval"), rotationInterval);
}

bool CreateSecretRequest::getEnableAutomaticRotation() const {
  return enableAutomaticRotation_;
}

void CreateSecretRequest::setEnableAutomaticRotation(bool enableAutomaticRotation) {
  enableAutomaticRotation_ = enableAutomaticRotation;
  setParameter(std::string("EnableAutomaticRotation"), enableAutomaticRotation ? "true" : "false");
}

std::string CreateSecretRequest::getEncryptionKeyId() const {
  return encryptionKeyId_;
}

void CreateSecretRequest::setEncryptionKeyId(const std::string &encryptionKeyId) {
  encryptionKeyId_ = encryptionKeyId;
  setParameter(std::string("EncryptionKeyId"), encryptionKeyId);
}

std::string CreateSecretRequest::getTags() const {
  return tags_;
}

void CreateSecretRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string CreateSecretRequest::getExtendedConfig() const {
  return extendedConfig_;
}

void CreateSecretRequest::setExtendedConfig(const std::string &extendedConfig) {
  extendedConfig_ = extendedConfig;
  setParameter(std::string("ExtendedConfig"), extendedConfig);
}

std::string CreateSecretRequest::getVersionId() const {
  return versionId_;
}

void CreateSecretRequest::setVersionId(const std::string &versionId) {
  versionId_ = versionId;
  setParameter(std::string("VersionId"), versionId);
}

std::string CreateSecretRequest::getDKMSInstanceId() const {
  return dKMSInstanceId_;
}

void CreateSecretRequest::setDKMSInstanceId(const std::string &dKMSInstanceId) {
  dKMSInstanceId_ = dKMSInstanceId;
  setParameter(std::string("DKMSInstanceId"), dKMSInstanceId);
}

std::string CreateSecretRequest::getSecretData() const {
  return secretData_;
}

void CreateSecretRequest::setSecretData(const std::string &secretData) {
  secretData_ = secretData;
  setParameter(std::string("SecretData"), secretData);
}

std::string CreateSecretRequest::getSecretName() const {
  return secretName_;
}

void CreateSecretRequest::setSecretName(const std::string &secretName) {
  secretName_ = secretName;
  setParameter(std::string("SecretName"), secretName);
}

std::string CreateSecretRequest::getSecretDataType() const {
  return secretDataType_;
}

void CreateSecretRequest::setSecretDataType(const std::string &secretDataType) {
  secretDataType_ = secretDataType;
  setParameter(std::string("SecretDataType"), secretDataType);
}

std::string CreateSecretRequest::getPolicy() const {
  return policy_;
}

void CreateSecretRequest::setPolicy(const std::string &policy) {
  policy_ = policy;
  setParameter(std::string("Policy"), policy);
}

