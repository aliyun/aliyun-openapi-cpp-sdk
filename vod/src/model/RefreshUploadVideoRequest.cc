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

#include <alibabacloud/vod/model/RefreshUploadVideoRequest.h>

using AlibabaCloud::Vod::Model::RefreshUploadVideoRequest;

RefreshUploadVideoRequest::RefreshUploadVideoRequest()
    : RpcServiceRequest("vod", "2017-03-21", "RefreshUploadVideo") {
  setMethod(HttpRequest::Method::Post);
}

RefreshUploadVideoRequest::~RefreshUploadVideoRequest() {}

long RefreshUploadVideoRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RefreshUploadVideoRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RefreshUploadVideoRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RefreshUploadVideoRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RefreshUploadVideoRequest::getVideoId() const {
  return videoId_;
}

void RefreshUploadVideoRequest::setVideoId(const std::string &videoId) {
  videoId_ = videoId;
  setParameter(std::string("VideoId"), videoId);
}

long RefreshUploadVideoRequest::getOwnerId() const {
  return ownerId_;
}

void RefreshUploadVideoRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

