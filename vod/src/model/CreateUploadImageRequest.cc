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

#include <alibabacloud/vod/model/CreateUploadImageRequest.h>

using AlibabaCloud::Vod::Model::CreateUploadImageRequest;

CreateUploadImageRequest::CreateUploadImageRequest()
    : RpcServiceRequest("vod", "2017-03-21", "CreateUploadImage") {
  setMethod(HttpRequest::Method::Post);
}

CreateUploadImageRequest::~CreateUploadImageRequest() {}

std::string CreateUploadImageRequest::getDescription() const {
  return description_;
}

void CreateUploadImageRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateUploadImageRequest::getTitle() const {
  return title_;
}

void CreateUploadImageRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string CreateUploadImageRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateUploadImageRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateUploadImageRequest::getStorageLocation() const {
  return storageLocation_;
}

void CreateUploadImageRequest::setStorageLocation(const std::string &storageLocation) {
  storageLocation_ = storageLocation;
  setParameter(std::string("StorageLocation"), storageLocation);
}

std::string CreateUploadImageRequest::getUserData() const {
  return userData_;
}

void CreateUploadImageRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

long CreateUploadImageRequest::getCateId() const {
  return cateId_;
}

void CreateUploadImageRequest::setCateId(long cateId) {
  cateId_ = cateId;
  setParameter(std::string("CateId"), std::to_string(cateId));
}

std::string CreateUploadImageRequest::getImageType() const {
  return imageType_;
}

void CreateUploadImageRequest::setImageType(const std::string &imageType) {
  imageType_ = imageType;
  setParameter(std::string("ImageType"), imageType);
}

std::string CreateUploadImageRequest::getImageExt() const {
  return imageExt_;
}

void CreateUploadImageRequest::setImageExt(const std::string &imageExt) {
  imageExt_ = imageExt;
  setParameter(std::string("ImageExt"), imageExt);
}

std::string CreateUploadImageRequest::getTags() const {
  return tags_;
}

void CreateUploadImageRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string CreateUploadImageRequest::getOriginalFileName() const {
  return originalFileName_;
}

void CreateUploadImageRequest::setOriginalFileName(const std::string &originalFileName) {
  originalFileName_ = originalFileName;
  setParameter(std::string("OriginalFileName"), originalFileName);
}

std::string CreateUploadImageRequest::getAppId() const {
  return appId_;
}

void CreateUploadImageRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

