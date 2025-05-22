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

#include <alibabacloud/rds/model/DescribeRCInstanceIpAddressRequest.h>

using AlibabaCloud::Rds::Model::DescribeRCInstanceIpAddressRequest;

DescribeRCInstanceIpAddressRequest::DescribeRCInstanceIpAddressRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeRCInstanceIpAddress") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRCInstanceIpAddressRequest::~DescribeRCInstanceIpAddressRequest() {}

std::string DescribeRCInstanceIpAddressRequest::getRegionId() const {
  return regionId_;
}

void DescribeRCInstanceIpAddressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeRCInstanceIpAddressRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRCInstanceIpAddressRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeRCInstanceIpAddressRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeRCInstanceIpAddressRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeRCInstanceIpAddressRequest::getDdosRegionId() const {
  return ddosRegionId_;
}

void DescribeRCInstanceIpAddressRequest::setDdosRegionId(const std::string &ddosRegionId) {
  ddosRegionId_ = ddosRegionId;
  setParameter(std::string("DdosRegionId"), ddosRegionId);
}

std::string DescribeRCInstanceIpAddressRequest::getDdosStatus() const {
  return ddosStatus_;
}

void DescribeRCInstanceIpAddressRequest::setDdosStatus(const std::string &ddosStatus) {
  ddosStatus_ = ddosStatus;
  setParameter(std::string("DdosStatus"), ddosStatus);
}

int DescribeRCInstanceIpAddressRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeRCInstanceIpAddressRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeRCInstanceIpAddressRequest::getResourceType() const {
  return resourceType_;
}

void DescribeRCInstanceIpAddressRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string DescribeRCInstanceIpAddressRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeRCInstanceIpAddressRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeRCInstanceIpAddressRequest::getInstanceName() const {
  return instanceName_;
}

void DescribeRCInstanceIpAddressRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string DescribeRCInstanceIpAddressRequest::getInstanceIp() const {
  return instanceIp_;
}

void DescribeRCInstanceIpAddressRequest::setInstanceIp(const std::string &instanceIp) {
  instanceIp_ = instanceIp;
  setParameter(std::string("InstanceIp"), instanceIp);
}

