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

#include <alibabacloud/mts/model/SubmitInnerJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitInnerJobRequest;

SubmitInnerJobRequest::SubmitInnerJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "SubmitInnerJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitInnerJobRequest::~SubmitInnerJobRequest() {}

long SubmitInnerJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SubmitInnerJobRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SubmitInnerJobRequest::getVideo() const {
  return video_;
}

void SubmitInnerJobRequest::setVideo(const std::string &video) {
  video_ = video;
  setParameter(std::string("Video"), video);
}

std::string SubmitInnerJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitInnerJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

long SubmitInnerJobRequest::getUid() const {
  return uid_;
}

void SubmitInnerJobRequest::setUid(long uid) {
  uid_ = uid;
  setParameter(std::string("Uid"), std::to_string(uid));
}

std::string SubmitInnerJobRequest::getImages() const {
  return images_;
}

void SubmitInnerJobRequest::setImages(const std::string &images) {
  images_ = images;
  setParameter(std::string("Images"), images);
}

std::string SubmitInnerJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SubmitInnerJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long SubmitInnerJobRequest::getOwnerId() const {
  return ownerId_;
}

void SubmitInnerJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SubmitInnerJobRequest::getPipelineId() const {
  return pipelineId_;
}

void SubmitInnerJobRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

std::string SubmitInnerJobRequest::getConfig() const {
  return config_;
}

void SubmitInnerJobRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

