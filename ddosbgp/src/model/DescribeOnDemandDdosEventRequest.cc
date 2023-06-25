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

#include <alibabacloud/ddosbgp/model/DescribeOnDemandDdosEventRequest.h>

using AlibabaCloud::Ddosbgp::Model::DescribeOnDemandDdosEventRequest;

DescribeOnDemandDdosEventRequest::DescribeOnDemandDdosEventRequest()
    : RpcServiceRequest("ddosbgp", "2018-07-20", "DescribeOnDemandDdosEvent") {
  setMethod(HttpRequest::Method::Post);
}

DescribeOnDemandDdosEventRequest::~DescribeOnDemandDdosEventRequest() {}

int DescribeOnDemandDdosEventRequest::getStartTime() const {
  return startTime_;
}

void DescribeOnDemandDdosEventRequest::setStartTime(int startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeOnDemandDdosEventRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeOnDemandDdosEventRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeOnDemandDdosEventRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeOnDemandDdosEventRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeOnDemandDdosEventRequest::getRegionId() const {
  return regionId_;
}

void DescribeOnDemandDdosEventRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeOnDemandDdosEventRequest::getPageSize() const {
  return pageSize_;
}

void DescribeOnDemandDdosEventRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeOnDemandDdosEventRequest::getIp() const {
  return ip_;
}

void DescribeOnDemandDdosEventRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

int DescribeOnDemandDdosEventRequest::getEndTime() const {
  return endTime_;
}

void DescribeOnDemandDdosEventRequest::setEndTime(int endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string DescribeOnDemandDdosEventRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeOnDemandDdosEventRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int DescribeOnDemandDdosEventRequest::getPageNo() const {
  return pageNo_;
}

void DescribeOnDemandDdosEventRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

