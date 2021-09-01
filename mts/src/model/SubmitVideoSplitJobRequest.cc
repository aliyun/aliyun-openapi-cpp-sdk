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

#include <alibabacloud/mts/model/SubmitVideoSplitJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitVideoSplitJobRequest;

SubmitVideoSplitJobRequest::SubmitVideoSplitJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "SubmitVideoSplitJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitVideoSplitJobRequest::~SubmitVideoSplitJobRequest() {}

std::string SubmitVideoSplitJobRequest::getVideoSplitConfig() const {
  return videoSplitConfig_;
}

void SubmitVideoSplitJobRequest::setVideoSplitConfig(const std::string &videoSplitConfig) {
  videoSplitConfig_ = videoSplitConfig;
  setParameter(std::string("VideoSplitConfig"), videoSplitConfig);
}

long SubmitVideoSplitJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SubmitVideoSplitJobRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SubmitVideoSplitJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitVideoSplitJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SubmitVideoSplitJobRequest::getUserData() const {
  return userData_;
}

void SubmitVideoSplitJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitVideoSplitJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SubmitVideoSplitJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SubmitVideoSplitJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SubmitVideoSplitJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SubmitVideoSplitJobRequest::getOwnerId() const {
  return ownerId_;
}

void SubmitVideoSplitJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SubmitVideoSplitJobRequest::getPipelineId() const {
  return pipelineId_;
}

void SubmitVideoSplitJobRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

std::string SubmitVideoSplitJobRequest::getInput() const {
  return input_;
}

void SubmitVideoSplitJobRequest::setInput(const std::string &input) {
  input_ = input;
  setParameter(std::string("Input"), input);
}

