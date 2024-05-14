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

#include <alibabacloud/waf-openapi/model/DescribeLogServiceStatusRequest.h>

using AlibabaCloud::Waf_openapi::Model::DescribeLogServiceStatusRequest;

DescribeLogServiceStatusRequest::DescribeLogServiceStatusRequest()
    : RpcServiceRequest("waf-openapi", "2019-09-10", "DescribeLogServiceStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLogServiceStatusRequest::~DescribeLogServiceStatusRequest() {}

std::vector<std::string> DescribeLogServiceStatusRequest::getDomainNames() const {
  return domainNames_;
}

void DescribeLogServiceStatusRequest::setDomainNames(const std::vector<std::string> &domainNames) {
  domainNames_ = domainNames;
}

int DescribeLogServiceStatusRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeLogServiceStatusRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeLogServiceStatusRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeLogServiceStatusRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeLogServiceStatusRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeLogServiceStatusRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeLogServiceStatusRequest::getRegionId() const {
  return regionId_;
}

void DescribeLogServiceStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeLogServiceStatusRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLogServiceStatusRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeLogServiceStatusRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeLogServiceStatusRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeLogServiceStatusRequest::getRegion() const {
  return region_;
}

void DescribeLogServiceStatusRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

