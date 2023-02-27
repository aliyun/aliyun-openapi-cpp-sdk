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

#include <alibabacloud/ice/model/RegisterMediaStreamRequest.h>

using AlibabaCloud::ICE::Model::RegisterMediaStreamRequest;

RegisterMediaStreamRequest::RegisterMediaStreamRequest()
    : RpcServiceRequest("ice", "2020-11-09", "RegisterMediaStream") {
  setMethod(HttpRequest::Method::Post);
}

RegisterMediaStreamRequest::~RegisterMediaStreamRequest() {}

std::string RegisterMediaStreamRequest::getInputURL() const {
  return inputURL_;
}

void RegisterMediaStreamRequest::setInputURL(const std::string &inputURL) {
  inputURL_ = inputURL;
  setParameter(std::string("InputURL"), inputURL);
}

std::string RegisterMediaStreamRequest::getMediaId() const {
  return mediaId_;
}

void RegisterMediaStreamRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

std::string RegisterMediaStreamRequest::getUserData() const {
  return userData_;
}

void RegisterMediaStreamRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

