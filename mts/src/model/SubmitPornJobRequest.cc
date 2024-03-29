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

#include <alibabacloud/mts/model/SubmitPornJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitPornJobRequest;

SubmitPornJobRequest::SubmitPornJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "SubmitPornJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitPornJobRequest::~SubmitPornJobRequest() {}

long SubmitPornJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SubmitPornJobRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SubmitPornJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitPornJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SubmitPornJobRequest::getUserData() const {
  return userData_;
}

void SubmitPornJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitPornJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SubmitPornJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SubmitPornJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SubmitPornJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SubmitPornJobRequest::getOwnerId() const {
  return ownerId_;
}

void SubmitPornJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SubmitPornJobRequest::getPipelineId() const {
  return pipelineId_;
}

void SubmitPornJobRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

std::string SubmitPornJobRequest::getInput() const {
  return input_;
}

void SubmitPornJobRequest::setInput(const std::string &input) {
  input_ = input;
  setParameter(std::string("Input"), input);
}

std::string SubmitPornJobRequest::getPornConfig() const {
  return pornConfig_;
}

void SubmitPornJobRequest::setPornConfig(const std::string &pornConfig) {
  pornConfig_ = pornConfig;
  setParameter(std::string("PornConfig"), pornConfig);
}

