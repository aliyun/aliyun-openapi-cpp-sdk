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

#include <alibabacloud/vod/model/CreateUploadVideoRequest.h>

using AlibabaCloud::Vod::Model::CreateUploadVideoRequest;

CreateUploadVideoRequest::CreateUploadVideoRequest()
    : RpcServiceRequest("vod", "2017-03-21", "CreateUploadVideo") {
  setMethod(HttpRequest::Method::Post);
}

CreateUploadVideoRequest::~CreateUploadVideoRequest() {}

std::string CreateUploadVideoRequest::getTranscodeMode() const {
  return transcodeMode_;
}

void CreateUploadVideoRequest::setTranscodeMode(const std::string &transcodeMode) {
  transcodeMode_ = transcodeMode;
  setParameter(std::string("TranscodeMode"), transcodeMode);
}

std::string CreateUploadVideoRequest::getDescription() const {
  return description_;
}

void CreateUploadVideoRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long CreateUploadVideoRequest::getFileSize() const {
  return fileSize_;
}

void CreateUploadVideoRequest::setFileSize(long fileSize) {
  fileSize_ = fileSize;
  setParameter(std::string("FileSize"), std::to_string(fileSize));
}

std::string CreateUploadVideoRequest::getTitle() const {
  return title_;
}

void CreateUploadVideoRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string CreateUploadVideoRequest::getStorageLocation() const {
  return storageLocation_;
}

void CreateUploadVideoRequest::setStorageLocation(const std::string &storageLocation) {
  storageLocation_ = storageLocation;
  setParameter(std::string("StorageLocation"), storageLocation);
}

std::string CreateUploadVideoRequest::getCoverURL() const {
  return coverURL_;
}

void CreateUploadVideoRequest::setCoverURL(const std::string &coverURL) {
  coverURL_ = coverURL;
  setParameter(std::string("CoverURL"), coverURL);
}

std::string CreateUploadVideoRequest::getUserData() const {
  return userData_;
}

void CreateUploadVideoRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

long CreateUploadVideoRequest::getCateId() const {
  return cateId_;
}

void CreateUploadVideoRequest::setCateId(long cateId) {
  cateId_ = cateId;
  setParameter(std::string("CateId"), std::to_string(cateId));
}

std::string CreateUploadVideoRequest::getWorkflowId() const {
  return workflowId_;
}

void CreateUploadVideoRequest::setWorkflowId(const std::string &workflowId) {
  workflowId_ = workflowId;
  setParameter(std::string("WorkflowId"), workflowId);
}

std::string CreateUploadVideoRequest::getCustomMediaInfo() const {
  return customMediaInfo_;
}

void CreateUploadVideoRequest::setCustomMediaInfo(const std::string &customMediaInfo) {
  customMediaInfo_ = customMediaInfo;
  setParameter(std::string("CustomMediaInfo"), customMediaInfo);
}

std::string CreateUploadVideoRequest::getIP() const {
  return iP_;
}

void CreateUploadVideoRequest::setIP(const std::string &iP) {
  iP_ = iP;
  setParameter(std::string("IP"), iP);
}

std::string CreateUploadVideoRequest::getTags() const {
  return tags_;
}

void CreateUploadVideoRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string CreateUploadVideoRequest::getFileName() const {
  return fileName_;
}

void CreateUploadVideoRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setParameter(std::string("FileName"), fileName);
}

std::string CreateUploadVideoRequest::getTemplateGroupId() const {
  return templateGroupId_;
}

void CreateUploadVideoRequest::setTemplateGroupId(const std::string &templateGroupId) {
  templateGroupId_ = templateGroupId;
  setParameter(std::string("TemplateGroupId"), templateGroupId);
}

std::string CreateUploadVideoRequest::getAppId() const {
  return appId_;
}

void CreateUploadVideoRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

