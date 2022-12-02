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

#include <alibabacloud/dts/model/DescribeTagValuesRequest.h>

using AlibabaCloud::Dts::Model::DescribeTagValuesRequest;

DescribeTagValuesRequest::DescribeTagValuesRequest()
    : RpcServiceRequest("dts", "2020-01-01", "DescribeTagValues") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTagValuesRequest::~DescribeTagValuesRequest() {}

int DescribeTagValuesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeTagValuesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeTagValuesRequest::getRegionId() const {
  return regionId_;
}

void DescribeTagValuesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeTagValuesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeTagValuesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeTagValuesRequest::getKey() const {
  return key_;
}

void DescribeTagValuesRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

std::string DescribeTagValuesRequest::getResourceId() const {
  return resourceId_;
}

void DescribeTagValuesRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string DescribeTagValuesRequest::getResourceType() const {
  return resourceType_;
}

void DescribeTagValuesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string DescribeTagValuesRequest::getCategory() const {
  return category_;
}

void DescribeTagValuesRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

