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

#include <alibabacloud/dataworks-public/model/CreateResourceFileRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateResourceFileRequest;

CreateResourceFileRequest::CreateResourceFileRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateResourceFile") {
  setMethod(HttpRequest::Method::Post);
}

CreateResourceFileRequest::~CreateResourceFileRequest() {}

int CreateResourceFileRequest::getFileType() const {
  return fileType_;
}

void CreateResourceFileRequest::setFileType(int fileType) {
  fileType_ = fileType;
  setBodyParameter(std::string("FileType"), std::to_string(fileType));
}

std::string CreateResourceFileRequest::getContent() const {
  return content_;
}

void CreateResourceFileRequest::setContent(const std::string &content) {
  content_ = content;
  setBodyParameter(std::string("Content"), content);
}

std::string CreateResourceFileRequest::getResourceFile() const {
  return resourceFile_;
}

void CreateResourceFileRequest::setResourceFile(const std::string &resourceFile) {
  resourceFile_ = resourceFile;
  setBodyParameter(std::string("ResourceFile"), resourceFile);
}

std::string CreateResourceFileRequest::getOriginResourceName() const {
  return originResourceName_;
}

void CreateResourceFileRequest::setOriginResourceName(const std::string &originResourceName) {
  originResourceName_ = originResourceName;
  setBodyParameter(std::string("OriginResourceName"), originResourceName);
}

long CreateResourceFileRequest::getProjectId() const {
  return projectId_;
}

void CreateResourceFileRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

std::string CreateResourceFileRequest::getStorageURL() const {
  return storageURL_;
}

void CreateResourceFileRequest::setStorageURL(const std::string &storageURL) {
  storageURL_ = storageURL;
  setBodyParameter(std::string("StorageURL"), storageURL);
}

std::string CreateResourceFileRequest::getOwner() const {
  return owner_;
}

void CreateResourceFileRequest::setOwner(const std::string &owner) {
  owner_ = owner;
  setBodyParameter(std::string("Owner"), owner);
}

bool CreateResourceFileRequest::getRegisterToCalcEngine() const {
  return registerToCalcEngine_;
}

void CreateResourceFileRequest::setRegisterToCalcEngine(bool registerToCalcEngine) {
  registerToCalcEngine_ = registerToCalcEngine;
  setBodyParameter(std::string("RegisterToCalcEngine"), registerToCalcEngine ? "true" : "false");
}

bool CreateResourceFileRequest::getUploadMode() const {
  return uploadMode_;
}

void CreateResourceFileRequest::setUploadMode(bool uploadMode) {
  uploadMode_ = uploadMode;
  setBodyParameter(std::string("UploadMode"), uploadMode ? "true" : "false");
}

std::string CreateResourceFileRequest::getFileName() const {
  return fileName_;
}

void CreateResourceFileRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setBodyParameter(std::string("FileName"), fileName);
}

std::string CreateResourceFileRequest::getFileFolderPath() const {
  return fileFolderPath_;
}

void CreateResourceFileRequest::setFileFolderPath(const std::string &fileFolderPath) {
  fileFolderPath_ = fileFolderPath;
  setBodyParameter(std::string("FileFolderPath"), fileFolderPath);
}

std::string CreateResourceFileRequest::getFileDescription() const {
  return fileDescription_;
}

void CreateResourceFileRequest::setFileDescription(const std::string &fileDescription) {
  fileDescription_ = fileDescription;
  setBodyParameter(std::string("FileDescription"), fileDescription);
}

