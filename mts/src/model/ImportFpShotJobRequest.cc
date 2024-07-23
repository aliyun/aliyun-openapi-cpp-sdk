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

#include <alibabacloud/mts/model/ImportFpShotJobRequest.h>

using AlibabaCloud::Mts::Model::ImportFpShotJobRequest;

ImportFpShotJobRequest::ImportFpShotJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "ImportFpShotJob") {
  setMethod(HttpRequest::Method::Post);
}

ImportFpShotJobRequest::~ImportFpShotJobRequest() {}

long ImportFpShotJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ImportFpShotJobRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ImportFpShotJobRequest::getFpDBId() const {
  return fpDBId_;
}

void ImportFpShotJobRequest::setFpDBId(const std::string &fpDBId) {
  fpDBId_ = fpDBId;
  setParameter(std::string("FpDBId"), fpDBId);
}

std::string ImportFpShotJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ImportFpShotJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ImportFpShotJobRequest::getUserData() const {
  return userData_;
}

void ImportFpShotJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string ImportFpShotJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ImportFpShotJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ImportFpShotJobRequest::getFpImportConfig() const {
  return fpImportConfig_;
}

void ImportFpShotJobRequest::setFpImportConfig(const std::string &fpImportConfig) {
  fpImportConfig_ = fpImportConfig;
  setParameter(std::string("FpImportConfig"), fpImportConfig);
}

std::string ImportFpShotJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ImportFpShotJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ImportFpShotJobRequest::getOwnerId() const {
  return ownerId_;
}

void ImportFpShotJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ImportFpShotJobRequest::getPipelineId() const {
  return pipelineId_;
}

void ImportFpShotJobRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

std::string ImportFpShotJobRequest::getInput() const {
  return input_;
}

void ImportFpShotJobRequest::setInput(const std::string &input) {
  input_ = input;
  setParameter(std::string("Input"), input);
}

