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

#include <alibabacloud/ice/model/CreateUploadMediaRequest.h>

using AlibabaCloud::ICE::Model::CreateUploadMediaRequest;

CreateUploadMediaRequest::CreateUploadMediaRequest()
    : RpcServiceRequest("ice", "2020-11-09", "CreateUploadMedia") {
  setMethod(HttpRequest::Method::Post);
}

CreateUploadMediaRequest::~CreateUploadMediaRequest() {}

std::string CreateUploadMediaRequest::getEntityId() const {
  return entityId_;
}

void CreateUploadMediaRequest::setEntityId(const std::string &entityId) {
  entityId_ = entityId;
  setParameter(std::string("EntityId"), entityId);
}

std::string CreateUploadMediaRequest::getUserData() const {
  return userData_;
}

void CreateUploadMediaRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string CreateUploadMediaRequest::getBiz() const {
  return biz_;
}

void CreateUploadMediaRequest::setBiz(const std::string &biz) {
  biz_ = biz;
  setParameter(std::string("Biz"), biz);
}

std::string CreateUploadMediaRequest::getFileInfo() const {
  return fileInfo_;
}

void CreateUploadMediaRequest::setFileInfo(const std::string &fileInfo) {
  fileInfo_ = fileInfo;
  setParameter(std::string("FileInfo"), fileInfo);
}

std::string CreateUploadMediaRequest::getMediaMetaData() const {
  return mediaMetaData_;
}

void CreateUploadMediaRequest::setMediaMetaData(const std::string &mediaMetaData) {
  mediaMetaData_ = mediaMetaData;
  setParameter(std::string("MediaMetaData"), mediaMetaData);
}

std::string CreateUploadMediaRequest::getPostProcessConfig() const {
  return postProcessConfig_;
}

void CreateUploadMediaRequest::setPostProcessConfig(const std::string &postProcessConfig) {
  postProcessConfig_ = postProcessConfig;
  setParameter(std::string("PostProcessConfig"), postProcessConfig);
}

std::string CreateUploadMediaRequest::getUploadSource() const {
  return uploadSource_;
}

void CreateUploadMediaRequest::setUploadSource(const std::string &uploadSource) {
  uploadSource_ = uploadSource;
  setParameter(std::string("UploadSource"), uploadSource);
}

std::string CreateUploadMediaRequest::getAppId() const {
  return appId_;
}

void CreateUploadMediaRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string CreateUploadMediaRequest::getUploadTargetConfig() const {
  return uploadTargetConfig_;
}

void CreateUploadMediaRequest::setUploadTargetConfig(const std::string &uploadTargetConfig) {
  uploadTargetConfig_ = uploadTargetConfig;
  setParameter(std::string("UploadTargetConfig"), uploadTargetConfig);
}

