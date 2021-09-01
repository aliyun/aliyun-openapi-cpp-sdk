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

#include <alibabacloud/mts/model/SubmitFpShotJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitFpShotJobRequest;

SubmitFpShotJobRequest::SubmitFpShotJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "SubmitFpShotJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitFpShotJobRequest::~SubmitFpShotJobRequest() {}

long SubmitFpShotJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SubmitFpShotJobRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SubmitFpShotJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitFpShotJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SubmitFpShotJobRequest::getUserData() const {
  return userData_;
}

void SubmitFpShotJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitFpShotJobRequest::getFpShotConfig() const {
  return fpShotConfig_;
}

void SubmitFpShotJobRequest::setFpShotConfig(const std::string &fpShotConfig) {
  fpShotConfig_ = fpShotConfig;
  setParameter(std::string("FpShotConfig"), fpShotConfig);
}

std::string SubmitFpShotJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SubmitFpShotJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SubmitFpShotJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SubmitFpShotJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SubmitFpShotJobRequest::getOwnerId() const {
  return ownerId_;
}

void SubmitFpShotJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SubmitFpShotJobRequest::getPipelineId() const {
  return pipelineId_;
}

void SubmitFpShotJobRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

std::string SubmitFpShotJobRequest::getInput() const {
  return input_;
}

void SubmitFpShotJobRequest::setInput(const std::string &input) {
  input_ = input;
  setParameter(std::string("Input"), input);
}

