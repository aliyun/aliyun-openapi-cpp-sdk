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

#include <alibabacloud/ddoscoo/model/DescribeTagKeysRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeTagKeysRequest;

DescribeTagKeysRequest::DescribeTagKeysRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeTagKeys") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTagKeysRequest::~DescribeTagKeysRequest() {}

std::string DescribeTagKeysRequest::getResourceType() const {
  return resourceType_;
}

void DescribeTagKeysRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

int DescribeTagKeysRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeTagKeysRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeTagKeysRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeTagKeysRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeTagKeysRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeTagKeysRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
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

