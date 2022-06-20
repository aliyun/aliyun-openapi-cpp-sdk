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

#include <alibabacloud/sas/model/DescribeExposedInstanceListRequest.h>

using AlibabaCloud::Sas::Model::DescribeExposedInstanceListRequest;

DescribeExposedInstanceListRequest::DescribeExposedInstanceListRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeExposedInstanceList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeExposedInstanceListRequest::~DescribeExposedInstanceListRequest() {}

std::string DescribeExposedInstanceListRequest::getExposurePort() const {
  return exposurePort_;
}

void DescribeExposedInstanceListRequest::setExposurePort(const std::string &exposurePort) {
  exposurePort_ = exposurePort;
  setParameter(std::string("ExposurePort"), exposurePort);
}

std::string DescribeExposedInstanceListRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeExposedInstanceListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeExposedInstanceListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeExposedInstanceListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

bool DescribeExposedInstanceListRequest::getVulStatus() const {
  return vulStatus_;
}

void DescribeExposedInstanceListRequest::setVulStatus(bool vulStatus) {
  vulStatus_ = vulStatus;
  setParameter(std::string("VulStatus"), vulStatus ? "true" : "false");
}

std::string DescribeExposedInstanceListRequest::getExposureIp() const {
  return exposureIp_;
}

void DescribeExposedInstanceListRequest::setExposureIp(const std::string &exposureIp) {
  exposureIp_ = exposureIp;
  setParameter(std::string("ExposureIp"), exposureIp);
}

long DescribeExposedInstanceListRequest::getGroupId() const {
  return groupId_;
}

void DescribeExposedInstanceListRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

int DescribeExposedInstanceListRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeExposedInstanceListRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeExposedInstanceListRequest::getExposureComponent() const {
  return exposureComponent_;
}

void DescribeExposedInstanceListRequest::setExposureComponent(const std::string &exposureComponent) {
  exposureComponent_ = exposureComponent;
  setParameter(std::string("ExposureComponent"), exposureComponent);
}

std::string DescribeExposedInstanceListRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeExposedInstanceListRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeExposedInstanceListRequest::getInstanceName() const {
  return instanceName_;
}

void DescribeExposedInstanceListRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

bool DescribeExposedInstanceListRequest::getHealthStatus() const {
  return healthStatus_;
}

void DescribeExposedInstanceListRequest::setHealthStatus(bool healthStatus) {
  healthStatus_ = healthStatus;
  setParameter(std::string("HealthStatus"), healthStatus ? "true" : "false");
}

