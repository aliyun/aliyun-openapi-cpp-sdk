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

#include <alibabacloud/ens/model/DescribeImageSharePermissionRequest.h>

using AlibabaCloud::Ens::Model::DescribeImageSharePermissionRequest;

DescribeImageSharePermissionRequest::DescribeImageSharePermissionRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeImageSharePermission") {
  setMethod(HttpRequest::Method::Post);
}

DescribeImageSharePermissionRequest::~DescribeImageSharePermissionRequest() {}

std::string DescribeImageSharePermissionRequest::getImageId() const {
  return imageId_;
}

void DescribeImageSharePermissionRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string DescribeImageSharePermissionRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeImageSharePermissionRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string DescribeImageSharePermissionRequest::getPageSize() const {
  return pageSize_;
}

void DescribeImageSharePermissionRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

long DescribeImageSharePermissionRequest::getAliyunId() const {
  return aliyunId_;
}

void DescribeImageSharePermissionRequest::setAliyunId(long aliyunId) {
  aliyunId_ = aliyunId;
  setParameter(std::string("AliyunId"), std::to_string(aliyunId));
}

