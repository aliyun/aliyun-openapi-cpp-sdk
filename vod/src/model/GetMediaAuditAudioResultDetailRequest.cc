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

#include <alibabacloud/vod/model/GetMediaAuditAudioResultDetailRequest.h>

using AlibabaCloud::Vod::Model::GetMediaAuditAudioResultDetailRequest;

GetMediaAuditAudioResultDetailRequest::GetMediaAuditAudioResultDetailRequest()
    : RpcServiceRequest("vod", "2017-03-21", "GetMediaAuditAudioResultDetail") {
  setMethod(HttpRequest::Method::Post);
}

GetMediaAuditAudioResultDetailRequest::~GetMediaAuditAudioResultDetailRequest() {}

std::string GetMediaAuditAudioResultDetailRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetMediaAuditAudioResultDetailRequest::setResourceOwnerId(const std::string &resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), resourceOwnerId);
}

std::string GetMediaAuditAudioResultDetailRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetMediaAuditAudioResultDetailRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetMediaAuditAudioResultDetailRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetMediaAuditAudioResultDetailRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetMediaAuditAudioResultDetailRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetMediaAuditAudioResultDetailRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string GetMediaAuditAudioResultDetailRequest::getOwnerId() const {
  return ownerId_;
}

void GetMediaAuditAudioResultDetailRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string GetMediaAuditAudioResultDetailRequest::getMediaId() const {
  return mediaId_;
}

void GetMediaAuditAudioResultDetailRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

int GetMediaAuditAudioResultDetailRequest::getPageNo() const {
  return pageNo_;
}

void GetMediaAuditAudioResultDetailRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

