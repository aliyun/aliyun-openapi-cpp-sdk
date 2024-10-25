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

#include <alibabacloud/ens/model/DescribeInstanceBandwidthDetailRequest.h>

using AlibabaCloud::Ens::Model::DescribeInstanceBandwidthDetailRequest;

DescribeInstanceBandwidthDetailRequest::DescribeInstanceBandwidthDetailRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeInstanceBandwidthDetail") {
  setMethod(HttpRequest::Method::Get);
}

DescribeInstanceBandwidthDetailRequest::~DescribeInstanceBandwidthDetailRequest() {}

std::string DescribeInstanceBandwidthDetailRequest::getStartTime() const {
  return startTime_;
}

void DescribeInstanceBandwidthDetailRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeInstanceBandwidthDetailRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeInstanceBandwidthDetailRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string DescribeInstanceBandwidthDetailRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInstanceBandwidthDetailRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int DescribeInstanceBandwidthDetailRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeInstanceBandwidthDetailRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeInstanceBandwidthDetailRequest::getPageSize() const {
  return pageSize_;
}

void DescribeInstanceBandwidthDetailRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeInstanceBandwidthDetailRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeInstanceBandwidthDetailRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeInstanceBandwidthDetailRequest::getEndTime() const {
  return endTime_;
}

void DescribeInstanceBandwidthDetailRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeInstanceBandwidthDetailRequest::getServiceType() const {
  return serviceType_;
}

void DescribeInstanceBandwidthDetailRequest::setServiceType(const std::string &serviceType) {
  serviceType_ = serviceType;
  setParameter(std::string("ServiceType"), serviceType);
}

