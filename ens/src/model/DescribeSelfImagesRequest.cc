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

#include <alibabacloud/ens/model/DescribeSelfImagesRequest.h>

using AlibabaCloud::Ens::Model::DescribeSelfImagesRequest;

DescribeSelfImagesRequest::DescribeSelfImagesRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeSelfImages") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSelfImagesRequest::~DescribeSelfImagesRequest() {}

std::string DescribeSelfImagesRequest::getImageId() const {
  return imageId_;
}

void DescribeSelfImagesRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string DescribeSelfImagesRequest::getSnapshotId() const {
  return snapshotId_;
}

void DescribeSelfImagesRequest::setSnapshotId(const std::string &snapshotId) {
  snapshotId_ = snapshotId;
  setParameter(std::string("SnapshotId"), snapshotId);
}

int DescribeSelfImagesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSelfImagesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSelfImagesRequest::getImageName() const {
  return imageName_;
}

void DescribeSelfImagesRequest::setImageName(const std::string &imageName) {
  imageName_ = imageName;
  setParameter(std::string("ImageName"), imageName);
}

int DescribeSelfImagesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSelfImagesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

