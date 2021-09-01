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

#include <alibabacloud/mts/model/SubmitMCJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitMCJobRequest;

SubmitMCJobRequest::SubmitMCJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "SubmitMCJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitMCJobRequest::~SubmitMCJobRequest() {}

long SubmitMCJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SubmitMCJobRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SubmitMCJobRequest::getVideo() const {
  return video_;
}

void SubmitMCJobRequest::setVideo(const std::string &video) {
  video_ = video;
  setParameter(std::string("Video"), video);
}

std::string SubmitMCJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitMCJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SubmitMCJobRequest::getUserData() const {
  return userData_;
}

void SubmitMCJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitMCJobRequest::getImages() const {
  return images_;
}

void SubmitMCJobRequest::setImages(const std::string &images) {
  images_ = images;
  setParameter(std::string("Images"), images);
}

std::string SubmitMCJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SubmitMCJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SubmitMCJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SubmitMCJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SubmitMCJobRequest::getOwnerId() const {
  return ownerId_;
}

void SubmitMCJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SubmitMCJobRequest::getCensorConfig() const {
  return censorConfig_;
}

void SubmitMCJobRequest::setCensorConfig(const std::string &censorConfig) {
  censorConfig_ = censorConfig;
  setParameter(std::string("CensorConfig"), censorConfig);
}

std::string SubmitMCJobRequest::getPipelineId() const {
  return pipelineId_;
}

void SubmitMCJobRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

std::string SubmitMCJobRequest::getTexts() const {
  return texts_;
}

void SubmitMCJobRequest::setTexts(const std::string &texts) {
  texts_ = texts;
  setParameter(std::string("Texts"), texts);
}

