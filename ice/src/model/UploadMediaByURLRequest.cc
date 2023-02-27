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

#include <alibabacloud/ice/model/UploadMediaByURLRequest.h>

using AlibabaCloud::ICE::Model::UploadMediaByURLRequest;

UploadMediaByURLRequest::UploadMediaByURLRequest()
    : RpcServiceRequest("ice", "2020-11-09", "UploadMediaByURL") {
  setMethod(HttpRequest::Method::Post);
}

UploadMediaByURLRequest::~UploadMediaByURLRequest() {}

std::string UploadMediaByURLRequest::getEntityId() const {
  return entityId_;
}

void UploadMediaByURLRequest::setEntityId(const std::string &entityId) {
  entityId_ = entityId;
  setParameter(std::string("EntityId"), entityId);
}

std::string UploadMediaByURLRequest::getUserData() const {
  return userData_;
}

void UploadMediaByURLRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string UploadMediaByURLRequest::getBiz() const {
  return biz_;
}

void UploadMediaByURLRequest::setBiz(const std::string &biz) {
  biz_ = biz;
  setParameter(std::string("Biz"), biz);
}

std::string UploadMediaByURLRequest::getMediaMetaData() const {
  return mediaMetaData_;
}

void UploadMediaByURLRequest::setMediaMetaData(const std::string &mediaMetaData) {
  mediaMetaData_ = mediaMetaData;
  setParameter(std::string("MediaMetaData"), mediaMetaData);
}

std::string UploadMediaByURLRequest::getPostProcessConfig() const {
  return postProcessConfig_;
}

void UploadMediaByURLRequest::setPostProcessConfig(const std::string &postProcessConfig) {
  postProcessConfig_ = postProcessConfig;
  setParameter(std::string("PostProcessConfig"), postProcessConfig);
}

std::string UploadMediaByURLRequest::getUploadSource() const {
  return uploadSource_;
}

void UploadMediaByURLRequest::setUploadSource(const std::string &uploadSource) {
  uploadSource_ = uploadSource;
  setParameter(std::string("UploadSource"), uploadSource);
}

std::string UploadMediaByURLRequest::getUploadURLs() const {
  return uploadURLs_;
}

void UploadMediaByURLRequest::setUploadURLs(const std::string &uploadURLs) {
  uploadURLs_ = uploadURLs;
  setParameter(std::string("UploadURLs"), uploadURLs);
}

std::string UploadMediaByURLRequest::getAppId() const {
  return appId_;
}

void UploadMediaByURLRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string UploadMediaByURLRequest::getUploadTargetConfig() const {
  return uploadTargetConfig_;
}

void UploadMediaByURLRequest::setUploadTargetConfig(const std::string &uploadTargetConfig) {
  uploadTargetConfig_ = uploadTargetConfig;
  setParameter(std::string("UploadTargetConfig"), uploadTargetConfig);
}

