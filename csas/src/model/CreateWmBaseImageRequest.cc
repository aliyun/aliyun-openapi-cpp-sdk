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

#include <alibabacloud/csas/model/CreateWmBaseImageRequest.h>

using AlibabaCloud::Csas::Model::CreateWmBaseImageRequest;

CreateWmBaseImageRequest::CreateWmBaseImageRequest()
    : RpcServiceRequest("csas", "2023-01-20", "CreateWmBaseImage") {
  setMethod(HttpRequest::Method::Post);
}

CreateWmBaseImageRequest::~CreateWmBaseImageRequest() {}

int CreateWmBaseImageRequest::getScale() const {
  return scale_;
}

void CreateWmBaseImageRequest::setScale(int scale) {
  scale_ = scale;
  setBodyParameter(std::string("Scale"), std::to_string(scale));
}

std::string CreateWmBaseImageRequest::getApiType() const {
  return apiType_;
}

void CreateWmBaseImageRequest::setApiType(const std::string &apiType) {
  apiType_ = apiType;
  setBodyParameter(std::string("ApiType"), apiType);
}

std::string CreateWmBaseImageRequest::getWmInfoUint() const {
  return wmInfoUint_;
}

void CreateWmBaseImageRequest::setWmInfoUint(const std::string &wmInfoUint) {
  wmInfoUint_ = wmInfoUint;
  setBodyParameter(std::string("WmInfoUint"), wmInfoUint);
}

long CreateWmBaseImageRequest::getWmInfoSize() const {
  return wmInfoSize_;
}

void CreateWmBaseImageRequest::setWmInfoSize(long wmInfoSize) {
  wmInfoSize_ = wmInfoSize;
  setBodyParameter(std::string("WmInfoSize"), std::to_string(wmInfoSize));
}

std::string CreateWmBaseImageRequest::getWmInfoBytesB64() const {
  return wmInfoBytesB64_;
}

void CreateWmBaseImageRequest::setWmInfoBytesB64(const std::string &wmInfoBytesB64) {
  wmInfoBytesB64_ = wmInfoBytesB64;
  setBodyParameter(std::string("WmInfoBytesB64"), wmInfoBytesB64);
}

std::string CreateWmBaseImageRequest::getWmType() const {
  return wmType_;
}

void CreateWmBaseImageRequest::setWmType(const std::string &wmType) {
  wmType_ = wmType;
  setBodyParameter(std::string("WmType"), wmType);
}

int CreateWmBaseImageRequest::getWidth() const {
  return width_;
}

void CreateWmBaseImageRequest::setWidth(int width) {
  width_ = width;
  setBodyParameter(std::string("Width"), std::to_string(width));
}

int CreateWmBaseImageRequest::getOpacity() const {
  return opacity_;
}

void CreateWmBaseImageRequest::setOpacity(int opacity) {
  opacity_ = opacity;
  setBodyParameter(std::string("Opacity"), std::to_string(opacity));
}

int CreateWmBaseImageRequest::getHeight() const {
  return height_;
}

void CreateWmBaseImageRequest::setHeight(int height) {
  height_ = height;
  setBodyParameter(std::string("Height"), std::to_string(height));
}

