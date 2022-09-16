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

#include <alibabacloud/ecd/model/DescribeDesktopTypesRequest.h>

using AlibabaCloud::Ecd::Model::DescribeDesktopTypesRequest;

DescribeDesktopTypesRequest::DescribeDesktopTypesRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeDesktopTypes") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDesktopTypesRequest::~DescribeDesktopTypesRequest() {}

std::string DescribeDesktopTypesRequest::getAppliedScope() const {
  return appliedScope_;
}

void DescribeDesktopTypesRequest::setAppliedScope(const std::string &appliedScope) {
  appliedScope_ = appliedScope;
  setParameter(std::string("AppliedScope"), appliedScope);
}

int DescribeDesktopTypesRequest::getMemorySize() const {
  return memorySize_;
}

void DescribeDesktopTypesRequest::setMemorySize(int memorySize) {
  memorySize_ = memorySize;
  setParameter(std::string("MemorySize"), std::to_string(memorySize));
}

float DescribeDesktopTypesRequest::getGpuCount() const {
  return gpuCount_;
}

void DescribeDesktopTypesRequest::setGpuCount(float gpuCount) {
  gpuCount_ = gpuCount;
  setParameter(std::string("GpuCount"), std::to_string(gpuCount));
}

std::string DescribeDesktopTypesRequest::getInstanceTypeFamily() const {
  return instanceTypeFamily_;
}

void DescribeDesktopTypesRequest::setInstanceTypeFamily(const std::string &instanceTypeFamily) {
  instanceTypeFamily_ = instanceTypeFamily;
  setParameter(std::string("InstanceTypeFamily"), instanceTypeFamily);
}

std::string DescribeDesktopTypesRequest::getDesktopTypeId() const {
  return desktopTypeId_;
}

void DescribeDesktopTypesRequest::setDesktopTypeId(const std::string &desktopTypeId) {
  desktopTypeId_ = desktopTypeId;
  setParameter(std::string("DesktopTypeId"), desktopTypeId);
}

std::string DescribeDesktopTypesRequest::getRegionId() const {
  return regionId_;
}

void DescribeDesktopTypesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDesktopTypesRequest::getDesktopIdForModify() const {
  return desktopIdForModify_;
}

void DescribeDesktopTypesRequest::setDesktopIdForModify(const std::string &desktopIdForModify) {
  desktopIdForModify_ = desktopIdForModify;
  setParameter(std::string("DesktopIdForModify"), desktopIdForModify);
}

int DescribeDesktopTypesRequest::getCpuCount() const {
  return cpuCount_;
}

void DescribeDesktopTypesRequest::setCpuCount(int cpuCount) {
  cpuCount_ = cpuCount;
  setParameter(std::string("CpuCount"), std::to_string(cpuCount));
}

std::string DescribeDesktopTypesRequest::getOrderType() const {
  return orderType_;
}

void DescribeDesktopTypesRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

