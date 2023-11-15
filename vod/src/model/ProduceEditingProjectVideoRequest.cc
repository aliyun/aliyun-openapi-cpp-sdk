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

#include <alibabacloud/vod/model/ProduceEditingProjectVideoRequest.h>

using AlibabaCloud::Vod::Model::ProduceEditingProjectVideoRequest;

ProduceEditingProjectVideoRequest::ProduceEditingProjectVideoRequest()
    : RpcServiceRequest("vod", "2017-03-21", "ProduceEditingProjectVideo") {
  setMethod(HttpRequest::Method::Post);
}

ProduceEditingProjectVideoRequest::~ProduceEditingProjectVideoRequest() {}

long ProduceEditingProjectVideoRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ProduceEditingProjectVideoRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ProduceEditingProjectVideoRequest::getDescription() const {
  return description_;
}

void ProduceEditingProjectVideoRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ProduceEditingProjectVideoRequest::getTitle() const {
  return title_;
}

void ProduceEditingProjectVideoRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string ProduceEditingProjectVideoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ProduceEditingProjectVideoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ProduceEditingProjectVideoRequest::getCoverURL() const {
  return coverURL_;
}

void ProduceEditingProjectVideoRequest::setCoverURL(const std::string &coverURL) {
  coverURL_ = coverURL;
  setParameter(std::string("CoverURL"), coverURL);
}

std::string ProduceEditingProjectVideoRequest::getUserData() const {
  return userData_;
}

void ProduceEditingProjectVideoRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string ProduceEditingProjectVideoRequest::getProduceConfig() const {
  return produceConfig_;
}

void ProduceEditingProjectVideoRequest::setProduceConfig(const std::string &produceConfig) {
  produceConfig_ = produceConfig;
  setParameter(std::string("ProduceConfig"), produceConfig);
}

std::string ProduceEditingProjectVideoRequest::getProjectId() const {
  return projectId_;
}

void ProduceEditingProjectVideoRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), projectId);
}

std::string ProduceEditingProjectVideoRequest::getMediaMetadata() const {
  return mediaMetadata_;
}

void ProduceEditingProjectVideoRequest::setMediaMetadata(const std::string &mediaMetadata) {
  mediaMetadata_ = mediaMetadata;
  setParameter(std::string("MediaMetadata"), mediaMetadata);
}

std::string ProduceEditingProjectVideoRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ProduceEditingProjectVideoRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ProduceEditingProjectVideoRequest::getOwnerId() const {
  return ownerId_;
}

void ProduceEditingProjectVideoRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ProduceEditingProjectVideoRequest::getAppId() const {
  return appId_;
}

void ProduceEditingProjectVideoRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string ProduceEditingProjectVideoRequest::getTimeline() const {
  return timeline_;
}

void ProduceEditingProjectVideoRequest::setTimeline(const std::string &timeline) {
  timeline_ = timeline;
  setParameter(std::string("Timeline"), timeline);
}

