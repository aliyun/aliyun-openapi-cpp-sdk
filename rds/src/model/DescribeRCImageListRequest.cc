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

#include <alibabacloud/rds/model/DescribeRCImageListRequest.h>

using AlibabaCloud::Rds::Model::DescribeRCImageListRequest;

DescribeRCImageListRequest::DescribeRCImageListRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeRCImageList") {
  setMethod(HttpRequest::Method::Get);
}

DescribeRCImageListRequest::~DescribeRCImageListRequest() {}

std::string DescribeRCImageListRequest::getImageId() const {
  return imageId_;
}

void DescribeRCImageListRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string DescribeRCImageListRequest::getType() const {
  return type_;
}

void DescribeRCImageListRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

int DescribeRCImageListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeRCImageListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeRCImageListRequest::getRegionId() const {
  return regionId_;
}

void DescribeRCImageListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeRCImageListRequest::getImageName() const {
  return imageName_;
}

void DescribeRCImageListRequest::setImageName(const std::string &imageName) {
  imageName_ = imageName;
  setParameter(std::string("ImageName"), imageName);
}

int DescribeRCImageListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRCImageListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeRCImageListRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeRCImageListRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeRCImageListRequest::getArchitecture() const {
  return architecture_;
}

void DescribeRCImageListRequest::setArchitecture(const std::string &architecture) {
  architecture_ = architecture;
  setParameter(std::string("Architecture"), architecture);
}

