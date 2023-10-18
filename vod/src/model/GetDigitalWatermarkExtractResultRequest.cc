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

#include <alibabacloud/vod/model/GetDigitalWatermarkExtractResultRequest.h>

using AlibabaCloud::Vod::Model::GetDigitalWatermarkExtractResultRequest;

GetDigitalWatermarkExtractResultRequest::GetDigitalWatermarkExtractResultRequest()
    : RpcServiceRequest("vod", "2017-03-21", "GetDigitalWatermarkExtractResult") {
  setMethod(HttpRequest::Method::Post);
}

GetDigitalWatermarkExtractResultRequest::~GetDigitalWatermarkExtractResultRequest() {}

std::string GetDigitalWatermarkExtractResultRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetDigitalWatermarkExtractResultRequest::setResourceOwnerId(const std::string &resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), resourceOwnerId);
}

std::string GetDigitalWatermarkExtractResultRequest::getExtractType() const {
  return extractType_;
}

void GetDigitalWatermarkExtractResultRequest::setExtractType(const std::string &extractType) {
  extractType_ = extractType;
  setParameter(std::string("ExtractType"), extractType);
}

std::string GetDigitalWatermarkExtractResultRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetDigitalWatermarkExtractResultRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetDigitalWatermarkExtractResultRequest::getJobId() const {
  return jobId_;
}

void GetDigitalWatermarkExtractResultRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string GetDigitalWatermarkExtractResultRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetDigitalWatermarkExtractResultRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetDigitalWatermarkExtractResultRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetDigitalWatermarkExtractResultRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string GetDigitalWatermarkExtractResultRequest::getOwnerId() const {
  return ownerId_;
}

void GetDigitalWatermarkExtractResultRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string GetDigitalWatermarkExtractResultRequest::getMediaId() const {
  return mediaId_;
}

void GetDigitalWatermarkExtractResultRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

