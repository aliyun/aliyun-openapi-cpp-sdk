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

#include <alibabacloud/mts/model/SubmitMediaInfoJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitMediaInfoJobRequest;

SubmitMediaInfoJobRequest::SubmitMediaInfoJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "SubmitMediaInfoJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitMediaInfoJobRequest::~SubmitMediaInfoJobRequest() {}

long SubmitMediaInfoJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SubmitMediaInfoJobRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SubmitMediaInfoJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitMediaInfoJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SubmitMediaInfoJobRequest::getUserData() const {
  return userData_;
}

void SubmitMediaInfoJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitMediaInfoJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SubmitMediaInfoJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SubmitMediaInfoJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SubmitMediaInfoJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SubmitMediaInfoJobRequest::getOwnerId() const {
  return ownerId_;
}

void SubmitMediaInfoJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SubmitMediaInfoJobRequest::getPipelineId() const {
  return pipelineId_;
}

void SubmitMediaInfoJobRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

std::string SubmitMediaInfoJobRequest::getInput() const {
  return input_;
}

void SubmitMediaInfoJobRequest::setInput(const std::string &input) {
  input_ = input;
  setParameter(std::string("Input"), input);
}

bool SubmitMediaInfoJobRequest::getAsync() const {
  return async_;
}

void SubmitMediaInfoJobRequest::setAsync(bool async) {
  async_ = async;
  setParameter(std::string("Async"), async ? "true" : "false");
}

