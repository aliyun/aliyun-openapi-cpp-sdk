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

#include <alibabacloud/ice/model/CreateUploadStreamRequest.h>

using AlibabaCloud::ICE::Model::CreateUploadStreamRequest;

CreateUploadStreamRequest::CreateUploadStreamRequest()
    : RpcServiceRequest("ice", "2020-11-09", "CreateUploadStream") {
  setMethod(HttpRequest::Method::Post);
}

CreateUploadStreamRequest::~CreateUploadStreamRequest() {}

std::string CreateUploadStreamRequest::getFileExtension() const {
  return fileExtension_;
}

void CreateUploadStreamRequest::setFileExtension(const std::string &fileExtension) {
  fileExtension_ = fileExtension;
  setParameter(std::string("FileExtension"), fileExtension);
}

std::string CreateUploadStreamRequest::getUserData() const {
  return userData_;
}

void CreateUploadStreamRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string CreateUploadStreamRequest::getHDRType() const {
  return hDRType_;
}

void CreateUploadStreamRequest::setHDRType(const std::string &hDRType) {
  hDRType_ = hDRType;
  setParameter(std::string("HDRType"), hDRType);
}

std::string CreateUploadStreamRequest::getDefinition() const {
  return definition_;
}

void CreateUploadStreamRequest::setDefinition(const std::string &definition) {
  definition_ = definition;
  setParameter(std::string("Definition"), definition);
}

std::string CreateUploadStreamRequest::getMediaId() const {
  return mediaId_;
}

void CreateUploadStreamRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

