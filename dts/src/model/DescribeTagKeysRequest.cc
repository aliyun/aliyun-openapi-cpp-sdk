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

#include <alibabacloud/dts/model/DescribeTagKeysRequest.h>

using AlibabaCloud::Dts::Model::DescribeTagKeysRequest;

DescribeTagKeysRequest::DescribeTagKeysRequest()
    : RpcServiceRequest("dts", "2020-01-01", "DescribeTagKeys") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTagKeysRequest::~DescribeTagKeysRequest() {}

int DescribeTagKeysRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeTagKeysRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeTagKeysRequest::getRegionId() const {
  return regionId_;
}

void DescribeTagKeysRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeTagKeysRequest::getPageSize() const {
  return pageSize_;
}

void DescribeTagKeysRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeTagKeysRequest::getResourceId() const {
  return resourceId_;
}

void DescribeTagKeysRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string DescribeTagKeysRequest::getResourceType() const {
  return resourceType_;
}

void DescribeTagKeysRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string DescribeTagKeysRequest::getCategory() const {
  return category_;
}

void DescribeTagKeysRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

