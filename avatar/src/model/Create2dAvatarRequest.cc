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

#include <alibabacloud/avatar/model/Create2dAvatarRequest.h>

using AlibabaCloud::Avatar::Model::Create2dAvatarRequest;

Create2dAvatarRequest::Create2dAvatarRequest()
    : RpcServiceRequest("avatar", "2022-01-30", "Create2dAvatar") {
  setMethod(HttpRequest::Method::Post);
}

Create2dAvatarRequest::~Create2dAvatarRequest() {}

std::string Create2dAvatarRequest::getImage() const {
  return image_;
}

void Create2dAvatarRequest::setImage(const std::string &image) {
  image_ = image;
  setParameter(std::string("Image"), image);
}

int Create2dAvatarRequest::getOrientation() const {
  return orientation_;
}

void Create2dAvatarRequest::setOrientation(int orientation) {
  orientation_ = orientation;
  setParameter(std::string("Orientation"), std::to_string(orientation));
}

std::string Create2dAvatarRequest::getDescription() const {
  return description_;
}

void Create2dAvatarRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string Create2dAvatarRequest::getVideo() const {
  return video_;
}

void Create2dAvatarRequest::setVideo(const std::string &video) {
  video_ = video;
  setParameter(std::string("Video"), video);
}

std::string Create2dAvatarRequest::getPortrait() const {
  return portrait_;
}

void Create2dAvatarRequest::setPortrait(const std::string &portrait) {
  portrait_ = portrait;
  setParameter(std::string("Portrait"), portrait);
}

std::string Create2dAvatarRequest::getExtParams() const {
  return extParams_;
}

void Create2dAvatarRequest::setExtParams(const std::string &extParams) {
  extParams_ = extParams;
  setParameter(std::string("ExtParams"), extParams);
}

bool Create2dAvatarRequest::getTransparent() const {
  return transparent_;
}

void Create2dAvatarRequest::setTransparent(bool transparent) {
  transparent_ = transparent;
  setParameter(std::string("Transparent"), transparent ? "true" : "false");
}

std::string Create2dAvatarRequest::getCallbackParams() const {
  return callbackParams_;
}

void Create2dAvatarRequest::setCallbackParams(const std::string &callbackParams) {
  callbackParams_ = callbackParams;
  setParameter(std::string("CallbackParams"), callbackParams);
}

long Create2dAvatarRequest::getTenantId() const {
  return tenantId_;
}

void Create2dAvatarRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setParameter(std::string("TenantId"), std::to_string(tenantId));
}

std::string Create2dAvatarRequest::getName() const {
  return name_;
}

void Create2dAvatarRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string Create2dAvatarRequest::getExtParams_CLS() const {
  return extParams_CLS_;
}

void Create2dAvatarRequest::setExtParams_CLS(const std::string &extParams_CLS) {
  extParams_CLS_ = extParams_CLS;
  setParameter(std::string("ExtParams_CLS"), extParams_CLS);
}

bool Create2dAvatarRequest::getCallback() const {
  return callback_;
}

void Create2dAvatarRequest::setCallback(bool callback) {
  callback_ = callback;
  setParameter(std::string("Callback"), callback ? "true" : "false");
}

std::string Create2dAvatarRequest::getCallbackParams_CLS() const {
  return callbackParams_CLS_;
}

void Create2dAvatarRequest::setCallbackParams_CLS(const std::string &callbackParams_CLS) {
  callbackParams_CLS_ = callbackParams_CLS;
  setParameter(std::string("CallbackParams_CLS"), callbackParams_CLS);
}

