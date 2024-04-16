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

#include <alibabacloud/ehpc/model/ListImagesRequest.h>

using AlibabaCloud::EHPC::Model::ListImagesRequest;

ListImagesRequest::ListImagesRequest()
    : RpcServiceRequest("ehpc", "2023-07-01", "ListImages") {
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

std::vector<ListImagesRequest::std::string> ListImagesRequest::getImageNames() const {
  return imageNames_;
}

void ListImagesRequest::setImageNames(const std::vector<ListImagesRequest::std::string> &imageNames) {
  imageNames_ = imageNames;
  for(int dep1 = 0; dep1 != imageNames.size(); dep1++) {
    setParameter(std::string("ImageNames") + "." + std::to_string(dep1 + 1), imageNames[dep1]);
  }
}

long ListImagesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListImagesRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListImagesRequest::getImageCategory() const {
  return imageCategory_;
}

void ListImagesRequest::setImageCategory(const std::string &imageCategory) {
  imageCategory_ = imageCategory;
  setParameter(std::string("ImageCategory"), imageCategory);
}

std::vector<ListImagesRequest::std::string> ListImagesRequest::getAppIds() const {
  return appIds_;
}

void ListImagesRequest::setAppIds(const std::vector<ListImagesRequest::std::string> &appIds) {
  appIds_ = appIds;
  for(int dep1 = 0; dep1 != appIds.size(); dep1++) {
    setParameter(std::string("AppIds") + "." + std::to_string(dep1 + 1), appIds[dep1]);
  }
}

long ListImagesRequest::getPageSize() const {
  return pageSize_;
}

void ListImagesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<ListImagesRequest::std::string> ListImagesRequest::getImageIds() const {
  return imageIds_;
}

void ListImagesRequest::setImageIds(const std::vector<ListImagesRequest::std::string> &imageIds) {
  imageIds_ = imageIds;
  for(int dep1 = 0; dep1 != imageIds.size(); dep1++) {
    setParameter(std::string("ImageIds") + "." + std::to_string(dep1 + 1), imageIds[dep1]);
  }
}

