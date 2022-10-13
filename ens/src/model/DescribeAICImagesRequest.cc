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

#include <alibabacloud/ens/model/DescribeAICImagesRequest.h>

using AlibabaCloud::Ens::Model::DescribeAICImagesRequest;

DescribeAICImagesRequest::DescribeAICImagesRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeAICImages") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAICImagesRequest::~DescribeAICImagesRequest() {}

std::string DescribeAICImagesRequest::getImageId() const {
  return imageId_;
}

void DescribeAICImagesRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string DescribeAICImagesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeAICImagesRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string DescribeAICImagesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAICImagesRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeAICImagesRequest::getImageUrl() const {
  return imageUrl_;
}

void DescribeAICImagesRequest::setImageUrl(const std::string &imageUrl) {
  imageUrl_ = imageUrl;
  setParameter(std::string("ImageUrl"), imageUrl);
}

