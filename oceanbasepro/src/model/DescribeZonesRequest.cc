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

#include <alibabacloud/oceanbasepro/model/DescribeZonesRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeZonesRequest;

DescribeZonesRequest::DescribeZonesRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeZones") {
  setMethod(HttpRequest::Method::Post);
}

DescribeZonesRequest::~DescribeZonesRequest() {}

std::string DescribeZonesRequest::getSeries() const {
  return series_;
}

void DescribeZonesRequest::setSeries(const std::string &series) {
  series_ = series;
  setBodyParameter(std::string("Series"), series);
}

std::string DescribeZonesRequest::getCpuArch() const {
  return cpuArch_;
}

void DescribeZonesRequest::setCpuArch(const std::string &cpuArch) {
  cpuArch_ = cpuArch;
  setBodyParameter(std::string("CpuArch"), cpuArch);
}

std::string DescribeZonesRequest::getDeployType() const {
  return deployType_;
}

void DescribeZonesRequest::setDeployType(const std::string &deployType) {
  deployType_ = deployType;
  setBodyParameter(std::string("DeployType"), deployType);
}

