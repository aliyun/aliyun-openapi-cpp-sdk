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

#include <alibabacloud/ens/model/DescribeExportImageInfoRequest.h>

using AlibabaCloud::Ens::Model::DescribeExportImageInfoRequest;

DescribeExportImageInfoRequest::DescribeExportImageInfoRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeExportImageInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeExportImageInfoRequest::~DescribeExportImageInfoRequest() {}

std::string DescribeExportImageInfoRequest::getImageId() const {
  return imageId_;
}

void DescribeExportImageInfoRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

int DescribeExportImageInfoRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeExportImageInfoRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeExportImageInfoRequest::getImageName() const {
  return imageName_;
}

void DescribeExportImageInfoRequest::setImageName(const std::string &imageName) {
  imageName_ = imageName;
  setParameter(std::string("ImageName"), imageName);
}

int DescribeExportImageInfoRequest::getPageSize() const {
  return pageSize_;
}

void DescribeExportImageInfoRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

