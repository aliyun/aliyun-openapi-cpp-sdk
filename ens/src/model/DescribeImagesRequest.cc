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

#include <alibabacloud/ens/model/DescribeImagesRequest.h>

using AlibabaCloud::Ens::Model::DescribeImagesRequest;

DescribeImagesRequest::DescribeImagesRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeImages") {
  setMethod(HttpRequest::Method::Post);
}

DescribeImagesRequest::~DescribeImagesRequest() {}

std::string DescribeImagesRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeImagesRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string DescribeImagesRequest::getStatus() const {
  return status_;
}

void DescribeImagesRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

std::string DescribeImagesRequest::getImageId() const {
  return imageId_;
}

void DescribeImagesRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string DescribeImagesRequest::getSnapshotId() const {
  return snapshotId_;
}

void DescribeImagesRequest::setSnapshotId(const std::string &snapshotId) {
  snapshotId_ = snapshotId;
  setParameter(std::string("SnapshotId"), snapshotId);
}

std::string DescribeImagesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeImagesRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string DescribeImagesRequest::getImageName() const {
  return imageName_;
}

void DescribeImagesRequest::setImageName(const std::string &imageName) {
  imageName_ = imageName;
  setParameter(std::string("ImageName"), imageName);
}

std::string DescribeImagesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeImagesRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

