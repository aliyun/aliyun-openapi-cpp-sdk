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

#include <alibabacloud/swas-open/model/ListImagesRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::ListImagesRequest;

ListImagesRequest::ListImagesRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "ListImages") {
  setMethod(HttpRequest::Method::Post);
}

ListImagesRequest::~ListImagesRequest() {}

std::string ListImagesRequest::getImageType() const {
  return imageType_;
}

void ListImagesRequest::setImageType(const std::string &imageType) {
  imageType_ = imageType;
  setParameter(std::string("ImageType"), imageType);
}

std::string ListImagesRequest::getRegionId() const {
  return regionId_;
}

void ListImagesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListImagesRequest::getImageIds() const {
  return imageIds_;
}

void ListImagesRequest::setImageIds(const std::string &imageIds) {
  imageIds_ = imageIds;
  setParameter(std::string("ImageIds"), imageIds);
}

