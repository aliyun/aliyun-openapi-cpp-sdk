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

#include <alibabacloud/imageenhan/model/GenerateCartoonizedImageRequest.h>

using AlibabaCloud::Imageenhan::Model::GenerateCartoonizedImageRequest;

GenerateCartoonizedImageRequest::GenerateCartoonizedImageRequest()
    : RpcServiceRequest("imageenhan", "2019-09-30", "GenerateCartoonizedImage") {
  setMethod(HttpRequest::Method::Post);
}

GenerateCartoonizedImageRequest::~GenerateCartoonizedImageRequest() {}

std::string GenerateCartoonizedImageRequest::getImageType() const {
  return imageType_;
}

void GenerateCartoonizedImageRequest::setImageType(const std::string &imageType) {
  imageType_ = imageType;
  setBodyParameter(std::string("ImageType"), imageType);
}

std::string GenerateCartoonizedImageRequest::getIndex() const {
  return index_;
}

void GenerateCartoonizedImageRequest::setIndex(const std::string &index) {
  index_ = index;
  setBodyParameter(std::string("Index"), index);
}

bool GenerateCartoonizedImageRequest::getAsync() const {
  return async_;
}

void GenerateCartoonizedImageRequest::setAsync(bool async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async ? "true" : "false");
}

std::string GenerateCartoonizedImageRequest::getImageUrl() const {
  return imageUrl_;
}

void GenerateCartoonizedImageRequest::setImageUrl(const std::string &imageUrl) {
  imageUrl_ = imageUrl;
  setBodyParameter(std::string("ImageUrl"), imageUrl);
}

