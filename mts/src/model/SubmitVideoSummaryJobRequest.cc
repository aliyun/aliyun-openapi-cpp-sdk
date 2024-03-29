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

#include <alibabacloud/mts/model/SubmitVideoSummaryJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitVideoSummaryJobRequest;

SubmitVideoSummaryJobRequest::SubmitVideoSummaryJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "SubmitVideoSummaryJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitVideoSummaryJobRequest::~SubmitVideoSummaryJobRequest() {}

long SubmitVideoSummaryJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SubmitVideoSummaryJobRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SubmitVideoSummaryJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitVideoSummaryJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SubmitVideoSummaryJobRequest::getUserData() const {
  return userData_;
}

void SubmitVideoSummaryJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitVideoSummaryJobRequest::getVideoSummaryConfig() const {
  return videoSummaryConfig_;
}

void SubmitVideoSummaryJobRequest::setVideoSummaryConfig(const std::string &videoSummaryConfig) {
  videoSummaryConfig_ = videoSummaryConfig;
  setParameter(std::string("VideoSummaryConfig"), videoSummaryConfig);
}

std::string SubmitVideoSummaryJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SubmitVideoSummaryJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SubmitVideoSummaryJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SubmitVideoSummaryJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SubmitVideoSummaryJobRequest::getOwnerId() const {
  return ownerId_;
}

void SubmitVideoSummaryJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SubmitVideoSummaryJobRequest::getPipelineId() const {
  return pipelineId_;
}

void SubmitVideoSummaryJobRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

std::string SubmitVideoSummaryJobRequest::getInput() const {
  return input_;
}

void SubmitVideoSummaryJobRequest::setInput(const std::string &input) {
  input_ = input;
  setParameter(std::string("Input"), input);
}

