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

#include <alibabacloud/mts/model/SubmitCoverJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitCoverJobRequest;

SubmitCoverJobRequest::SubmitCoverJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "SubmitCoverJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitCoverJobRequest::~SubmitCoverJobRequest() {}

long SubmitCoverJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SubmitCoverJobRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SubmitCoverJobRequest::getCoverConfig() const {
  return coverConfig_;
}

void SubmitCoverJobRequest::setCoverConfig(const std::string &coverConfig) {
  coverConfig_ = coverConfig;
  setParameter(std::string("CoverConfig"), coverConfig);
}

std::string SubmitCoverJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitCoverJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SubmitCoverJobRequest::getUserData() const {
  return userData_;
}

void SubmitCoverJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitCoverJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SubmitCoverJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SubmitCoverJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SubmitCoverJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SubmitCoverJobRequest::getOwnerId() const {
  return ownerId_;
}

void SubmitCoverJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SubmitCoverJobRequest::getPipelineId() const {
  return pipelineId_;
}

void SubmitCoverJobRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

std::string SubmitCoverJobRequest::getInput() const {
  return input_;
}

void SubmitCoverJobRequest::setInput(const std::string &input) {
  input_ = input;
  setParameter(std::string("Input"), input);
}

