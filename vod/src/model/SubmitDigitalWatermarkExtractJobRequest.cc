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

#include <alibabacloud/vod/model/SubmitDigitalWatermarkExtractJobRequest.h>

using AlibabaCloud::Vod::Model::SubmitDigitalWatermarkExtractJobRequest;

SubmitDigitalWatermarkExtractJobRequest::SubmitDigitalWatermarkExtractJobRequest()
    : RpcServiceRequest("vod", "2017-03-21", "SubmitDigitalWatermarkExtractJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitDigitalWatermarkExtractJobRequest::~SubmitDigitalWatermarkExtractJobRequest() {}

std::string SubmitDigitalWatermarkExtractJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SubmitDigitalWatermarkExtractJobRequest::setResourceOwnerId(const std::string &resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), resourceOwnerId);
}

std::string SubmitDigitalWatermarkExtractJobRequest::getExtractType() const {
  return extractType_;
}

void SubmitDigitalWatermarkExtractJobRequest::setExtractType(const std::string &extractType) {
  extractType_ = extractType;
  setParameter(std::string("ExtractType"), extractType);
}

std::string SubmitDigitalWatermarkExtractJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitDigitalWatermarkExtractJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SubmitDigitalWatermarkExtractJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SubmitDigitalWatermarkExtractJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SubmitDigitalWatermarkExtractJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SubmitDigitalWatermarkExtractJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string SubmitDigitalWatermarkExtractJobRequest::getOwnerId() const {
  return ownerId_;
}

void SubmitDigitalWatermarkExtractJobRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string SubmitDigitalWatermarkExtractJobRequest::getMediaId() const {
  return mediaId_;
}

void SubmitDigitalWatermarkExtractJobRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

