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

#include <alibabacloud/vod/model/GetMediaDNAResultRequest.h>

using AlibabaCloud::Vod::Model::GetMediaDNAResultRequest;

GetMediaDNAResultRequest::GetMediaDNAResultRequest()
    : RpcServiceRequest("vod", "2017-03-21", "GetMediaDNAResult") {
  setMethod(HttpRequest::Method::Post);
}

GetMediaDNAResultRequest::~GetMediaDNAResultRequest() {}

std::string GetMediaDNAResultRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetMediaDNAResultRequest::setResourceOwnerId(const std::string &resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), resourceOwnerId);
}

std::string GetMediaDNAResultRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetMediaDNAResultRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetMediaDNAResultRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetMediaDNAResultRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string GetMediaDNAResultRequest::getOwnerId() const {
  return ownerId_;
}

void GetMediaDNAResultRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string GetMediaDNAResultRequest::getMediaId() const {
  return mediaId_;
}

void GetMediaDNAResultRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

std::string GetMediaDNAResultRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetMediaDNAResultRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

