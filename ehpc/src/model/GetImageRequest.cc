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

#include <alibabacloud/ehpc/model/GetImageRequest.h>

using AlibabaCloud::EHPC::Model::GetImageRequest;

GetImageRequest::GetImageRequest()
    : RpcServiceRequest("ehpc", "2023-07-01", "GetImage") {
  setMethod(HttpRequest::Method::Post);
}

GetImageRequest::~GetImageRequest() {}

std::string GetImageRequest::getImageType() const {
  return imageType_;
}

void GetImageRequest::setImageType(const std::string &imageType) {
  imageType_ = imageType;
  setParameter(std::string("ImageType"), imageType);
}

std::string GetImageRequest::getImageId() const {
  return imageId_;
}

void GetImageRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string GetImageRequest::getImageCategory() const {
  return imageCategory_;
}

void GetImageRequest::setImageCategory(const std::string &imageCategory) {
  imageCategory_ = imageCategory;
  setParameter(std::string("ImageCategory"), imageCategory);
}

std::string GetImageRequest::getAppId() const {
  return appId_;
}

void GetImageRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

