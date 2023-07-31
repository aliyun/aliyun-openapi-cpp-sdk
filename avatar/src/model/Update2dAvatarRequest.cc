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

#include <alibabacloud/avatar/model/Update2dAvatarRequest.h>

using AlibabaCloud::Avatar::Model::Update2dAvatarRequest;

Update2dAvatarRequest::Update2dAvatarRequest()
    : RpcServiceRequest("avatar", "2022-01-30", "Update2dAvatar") {
  setMethod(HttpRequest::Method::Post);
}

Update2dAvatarRequest::~Update2dAvatarRequest() {}

std::string Update2dAvatarRequest::getImage() const {
  return image_;
}

void Update2dAvatarRequest::setImage(const std::string &image) {
  image_ = image;
  setParameter(std::string("Image"), image);
}

int Update2dAvatarRequest::getOrientation() const {
  return orientation_;
}

void Update2dAvatarRequest::setOrientation(int orientation) {
  orientation_ = orientation;
  setParameter(std::string("Orientation"), std::to_string(orientation));
}

std::string Update2dAvatarRequest::getCode() const {
  return code_;
}

void Update2dAvatarRequest::setCode(const std::string &code) {
  code_ = code;
  setParameter(std::string("Code"), code);
}

std::string Update2dAvatarRequest::getDescription() const {
  return description_;
}

void Update2dAvatarRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string Update2dAvatarRequest::getVideo() const {
  return video_;
}

void Update2dAvatarRequest::setVideo(const std::string &video) {
  video_ = video;
  setParameter(std::string("Video"), video);
}

std::string Update2dAvatarRequest::getPortrait() const {
  return portrait_;
}

void Update2dAvatarRequest::setPortrait(const std::string &portrait) {
  portrait_ = portrait;
  setParameter(std::string("Portrait"), portrait);
}

std::string Update2dAvatarRequest::getExtParams() const {
  return extParams_;
}

void Update2dAvatarRequest::setExtParams(const std::string &extParams) {
  extParams_ = extParams;
  setParameter(std::string("ExtParams"), extParams);
}

bool Update2dAvatarRequest::getTransparent() const {
  return transparent_;
}

void Update2dAvatarRequest::setTransparent(bool transparent) {
  transparent_ = transparent;
  setParameter(std::string("Transparent"), transparent ? "true" : "false");
}

std::string Update2dAvatarRequest::getCallbackParams() const {
  return callbackParams_;
}

void Update2dAvatarRequest::setCallbackParams(const std::string &callbackParams) {
  callbackParams_ = callbackParams;
  setParameter(std::string("CallbackParams"), callbackParams);
}

long Update2dAvatarRequest::getTenantId() const {
  return tenantId_;
}

void Update2dAvatarRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setParameter(std::string("TenantId"), std::to_string(tenantId));
}

std::string Update2dAvatarRequest::getName() const {
  return name_;
}

void Update2dAvatarRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string Update2dAvatarRequest::getExtParams_CLS() const {
  return extParams_CLS_;
}

void Update2dAvatarRequest::setExtParams_CLS(const std::string &extParams_CLS) {
  extParams_CLS_ = extParams_CLS;
  setParameter(std::string("ExtParams_CLS"), extParams_CLS);
}

bool Update2dAvatarRequest::getCallback() const {
  return callback_;
}

void Update2dAvatarRequest::setCallback(bool callback) {
  callback_ = callback;
  setParameter(std::string("Callback"), callback ? "true" : "false");
}

std::string Update2dAvatarRequest::getCallbackParams_CLS() const {
  return callbackParams_CLS_;
}

void Update2dAvatarRequest::setCallbackParams_CLS(const std::string &callbackParams_CLS) {
  callbackParams_CLS_ = callbackParams_CLS;
  setParameter(std::string("CallbackParams_CLS"), callbackParams_CLS);
}

