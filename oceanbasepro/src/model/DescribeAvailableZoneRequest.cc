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

#include <alibabacloud/oceanbasepro/model/DescribeAvailableZoneRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeAvailableZoneRequest;

DescribeAvailableZoneRequest::DescribeAvailableZoneRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeAvailableZone") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAvailableZoneRequest::~DescribeAvailableZoneRequest() {}

std::string DescribeAvailableZoneRequest::getSpec() const {
  return spec_;
}

void DescribeAvailableZoneRequest::setSpec(const std::string &spec) {
  spec_ = spec;
  setBodyParameter(std::string("Spec"), spec);
}

std::string DescribeAvailableZoneRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeAvailableZoneRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setBodyParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeAvailableZoneRequest::getObVersion() const {
  return obVersion_;
}

void DescribeAvailableZoneRequest::setObVersion(const std::string &obVersion) {
  obVersion_ = obVersion;
  setBodyParameter(std::string("ObVersion"), obVersion);
}

std::string DescribeAvailableZoneRequest::getSeries() const {
  return series_;
}

void DescribeAvailableZoneRequest::setSeries(const std::string &series) {
  series_ = series;
  setBodyParameter(std::string("Series"), series);
}

std::string DescribeAvailableZoneRequest::getCpuArch() const {
  return cpuArch_;
}

void DescribeAvailableZoneRequest::setCpuArch(const std::string &cpuArch) {
  cpuArch_ = cpuArch;
  setBodyParameter(std::string("CpuArch"), cpuArch);
}

std::string DescribeAvailableZoneRequest::getDeployType() const {
  return deployType_;
}

void DescribeAvailableZoneRequest::setDeployType(const std::string &deployType) {
  deployType_ = deployType;
  setBodyParameter(std::string("DeployType"), deployType);
}

