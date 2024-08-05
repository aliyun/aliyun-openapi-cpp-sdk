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

#include <alibabacloud/arms/model/CreateRumUploadFileUrlRequest.h>

using AlibabaCloud::ARMS::Model::CreateRumUploadFileUrlRequest;

CreateRumUploadFileUrlRequest::CreateRumUploadFileUrlRequest()
    : RpcServiceRequest("arms", "2019-08-08", "CreateRumUploadFileUrl") {
  setMethod(HttpRequest::Method::Post);
}

CreateRumUploadFileUrlRequest::~CreateRumUploadFileUrlRequest() {}

std::string CreateRumUploadFileUrlRequest::getSourcemapType() const {
  return sourcemapType_;
}

void CreateRumUploadFileUrlRequest::setSourcemapType(const std::string &sourcemapType) {
  sourcemapType_ = sourcemapType;
  setParameter(std::string("SourcemapType"), sourcemapType);
}

std::string CreateRumUploadFileUrlRequest::getPid() const {
  return pid_;
}

void CreateRumUploadFileUrlRequest::setPid(const std::string &pid) {
  pid_ = pid;
  setParameter(std::string("Pid"), pid);
}

std::string CreateRumUploadFileUrlRequest::getUuid() const {
  return uuid_;
}

void CreateRumUploadFileUrlRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string CreateRumUploadFileUrlRequest::getContentType() const {
  return contentType_;
}

void CreateRumUploadFileUrlRequest::setContentType(const std::string &contentType) {
  contentType_ = contentType;
  setParameter(std::string("ContentType"), contentType);
}

std::string CreateRumUploadFileUrlRequest::getVersionId() const {
  return versionId_;
}

void CreateRumUploadFileUrlRequest::setVersionId(const std::string &versionId) {
  versionId_ = versionId;
  setParameter(std::string("VersionId"), versionId);
}

std::string CreateRumUploadFileUrlRequest::getFileName() const {
  return fileName_;
}

void CreateRumUploadFileUrlRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setParameter(std::string("FileName"), fileName);
}

std::string CreateRumUploadFileUrlRequest::getAppName() const {
  return appName_;
}

void CreateRumUploadFileUrlRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string CreateRumUploadFileUrlRequest::getRegionId() const {
  return regionId_;
}

void CreateRumUploadFileUrlRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

