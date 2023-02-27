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

#include <alibabacloud/ice/model/UploadStreamByURLRequest.h>

using AlibabaCloud::ICE::Model::UploadStreamByURLRequest;

UploadStreamByURLRequest::UploadStreamByURLRequest()
    : RpcServiceRequest("ice", "2020-11-09", "UploadStreamByURL") {
  setMethod(HttpRequest::Method::Post);
}

UploadStreamByURLRequest::~UploadStreamByURLRequest() {}

std::string UploadStreamByURLRequest::getFileExtension() const {
  return fileExtension_;
}

void UploadStreamByURLRequest::setFileExtension(const std::string &fileExtension) {
  fileExtension_ = fileExtension;
  setParameter(std::string("FileExtension"), fileExtension);
}

std::string UploadStreamByURLRequest::getUserData() const {
  return userData_;
}

void UploadStreamByURLRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string UploadStreamByURLRequest::getHDRType() const {
  return hDRType_;
}

void UploadStreamByURLRequest::setHDRType(const std::string &hDRType) {
  hDRType_ = hDRType;
  setParameter(std::string("HDRType"), hDRType);
}

std::string UploadStreamByURLRequest::getDefinition() const {
  return definition_;
}

void UploadStreamByURLRequest::setDefinition(const std::string &definition) {
  definition_ = definition;
  setParameter(std::string("Definition"), definition);
}

std::string UploadStreamByURLRequest::getStreamURL() const {
  return streamURL_;
}

void UploadStreamByURLRequest::setStreamURL(const std::string &streamURL) {
  streamURL_ = streamURL;
  setParameter(std::string("StreamURL"), streamURL);
}

std::string UploadStreamByURLRequest::getMediaId() const {
  return mediaId_;
}

void UploadStreamByURLRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

