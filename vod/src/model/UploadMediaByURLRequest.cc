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

#include <alibabacloud/vod/model/UploadMediaByURLRequest.h>

using AlibabaCloud::Vod::Model::UploadMediaByURLRequest;

UploadMediaByURLRequest::UploadMediaByURLRequest()
    : RpcServiceRequest("vod", "2017-03-21", "UploadMediaByURL") {
  setMethod(HttpRequest::Method::Post);
}

UploadMediaByURLRequest::~UploadMediaByURLRequest() {}

std::string UploadMediaByURLRequest::getMessageCallback() const {
  return messageCallback_;
}

void UploadMediaByURLRequest::setMessageCallback(const std::string &messageCallback) {
  messageCallback_ = messageCallback;
  setParameter(std::string("MessageCallback"), messageCallback);
}

std::string UploadMediaByURLRequest::getSessionId() const {
  return sessionId_;
}

void UploadMediaByURLRequest::setSessionId(const std::string &sessionId) {
  sessionId_ = sessionId;
  setParameter(std::string("SessionId"), sessionId);
}

std::string UploadMediaByURLRequest::getStorageLocation() const {
  return storageLocation_;
}

void UploadMediaByURLRequest::setStorageLocation(const std::string &storageLocation) {
  storageLocation_ = storageLocation;
  setParameter(std::string("StorageLocation"), storageLocation);
}

std::string UploadMediaByURLRequest::getUserData() const {
  return userData_;
}

void UploadMediaByURLRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string UploadMediaByURLRequest::getWorkflowId() const {
  return workflowId_;
}

void UploadMediaByURLRequest::setWorkflowId(const std::string &workflowId) {
  workflowId_ = workflowId;
  setParameter(std::string("WorkflowId"), workflowId);
}

std::string UploadMediaByURLRequest::getS3UploadInfo() const {
  return s3UploadInfo_;
}

void UploadMediaByURLRequest::setS3UploadInfo(const std::string &s3UploadInfo) {
  s3UploadInfo_ = s3UploadInfo;
  setParameter(std::string("S3UploadInfo"), s3UploadInfo);
}

std::string UploadMediaByURLRequest::getPriority() const {
  return priority_;
}

void UploadMediaByURLRequest::setPriority(const std::string &priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), priority);
}

std::string UploadMediaByURLRequest::getTemplateGroupId() const {
  return templateGroupId_;
}

void UploadMediaByURLRequest::setTemplateGroupId(const std::string &templateGroupId) {
  templateGroupId_ = templateGroupId;
  setParameter(std::string("TemplateGroupId"), templateGroupId);
}

std::string UploadMediaByURLRequest::getUploadMetadatas() const {
  return uploadMetadatas_;
}

void UploadMediaByURLRequest::setUploadMetadatas(const std::string &uploadMetadatas) {
  uploadMetadatas_ = uploadMetadatas;
  setParameter(std::string("UploadMetadatas"), uploadMetadatas);
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

