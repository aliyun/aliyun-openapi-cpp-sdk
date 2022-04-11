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

#include <alibabacloud/vod/model/SubmitAIImageJobRequest.h>

using AlibabaCloud::Vod::Model::SubmitAIImageJobRequest;

SubmitAIImageJobRequest::SubmitAIImageJobRequest()
    : RpcServiceRequest("vod", "2017-03-21", "SubmitAIImageJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitAIImageJobRequest::~SubmitAIImageJobRequest() {}

std::string SubmitAIImageJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SubmitAIImageJobRequest::setResourceOwnerId(const std::string &resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), resourceOwnerId);
}

std::string SubmitAIImageJobRequest::getAIPipelineId() const {
  return aIPipelineId_;
}

void SubmitAIImageJobRequest::setAIPipelineId(const std::string &aIPipelineId) {
  aIPipelineId_ = aIPipelineId;
  setParameter(std::string("AIPipelineId"), aIPipelineId);
}

std::string SubmitAIImageJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitAIImageJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SubmitAIImageJobRequest::getUserData() const {
  return userData_;
}

void SubmitAIImageJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitAIImageJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SubmitAIImageJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SubmitAIImageJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SubmitAIImageJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string SubmitAIImageJobRequest::getVideoId() const {
  return videoId_;
}

void SubmitAIImageJobRequest::setVideoId(const std::string &videoId) {
  videoId_ = videoId;
  setParameter(std::string("VideoId"), videoId);
}

std::string SubmitAIImageJobRequest::getAITemplateId() const {
  return aITemplateId_;
}

void SubmitAIImageJobRequest::setAITemplateId(const std::string &aITemplateId) {
  aITemplateId_ = aITemplateId;
  setParameter(std::string("AITemplateId"), aITemplateId);
}

std::string SubmitAIImageJobRequest::getOwnerId() const {
  return ownerId_;
}

void SubmitAIImageJobRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

