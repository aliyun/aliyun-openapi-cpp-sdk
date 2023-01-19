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

#include <alibabacloud/sas/model/DescribeWarningMachinesRequest.h>

using AlibabaCloud::Sas::Model::DescribeWarningMachinesRequest;

DescribeWarningMachinesRequest::DescribeWarningMachinesRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeWarningMachines") {
  setMethod(HttpRequest::Method::Post);
}

DescribeWarningMachinesRequest::~DescribeWarningMachinesRequest() {}

std::string DescribeWarningMachinesRequest::getTargetType() const {
  return targetType_;
}

void DescribeWarningMachinesRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string DescribeWarningMachinesRequest::getContainerFieldName() const {
  return containerFieldName_;
}

void DescribeWarningMachinesRequest::setContainerFieldName(const std::string &containerFieldName) {
  containerFieldName_ = containerFieldName;
  setParameter(std::string("ContainerFieldName"), containerFieldName);
}

std::string DescribeWarningMachinesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeWarningMachinesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeWarningMachinesRequest::getContainerFieldValue() const {
  return containerFieldValue_;
}

void DescribeWarningMachinesRequest::setContainerFieldValue(const std::string &containerFieldValue) {
  containerFieldValue_ = containerFieldValue;
  setParameter(std::string("ContainerFieldValue"), containerFieldValue);
}

int DescribeWarningMachinesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeWarningMachinesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeWarningMachinesRequest::getMachineName() const {
  return machineName_;
}

void DescribeWarningMachinesRequest::setMachineName(const std::string &machineName) {
  machineName_ = machineName;
  setParameter(std::string("MachineName"), machineName);
}

std::string DescribeWarningMachinesRequest::getLang() const {
  return lang_;
}

void DescribeWarningMachinesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int DescribeWarningMachinesRequest::getHaveRisk() const {
  return haveRisk_;
}

void DescribeWarningMachinesRequest::setHaveRisk(int haveRisk) {
  haveRisk_ = haveRisk;
  setParameter(std::string("HaveRisk"), std::to_string(haveRisk));
}

long DescribeWarningMachinesRequest::getGroupId() const {
  return groupId_;
}

void DescribeWarningMachinesRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

int DescribeWarningMachinesRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeWarningMachinesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeWarningMachinesRequest::getClusterId() const {
  return clusterId_;
}

void DescribeWarningMachinesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

long DescribeWarningMachinesRequest::getRiskId() const {
  return riskId_;
}

void DescribeWarningMachinesRequest::setRiskId(long riskId) {
  riskId_ = riskId;
  setParameter(std::string("RiskId"), std::to_string(riskId));
}

long DescribeWarningMachinesRequest::getStrategyId() const {
  return strategyId_;
}

void DescribeWarningMachinesRequest::setStrategyId(long strategyId) {
  strategyId_ = strategyId;
  setParameter(std::string("StrategyId"), std::to_string(strategyId));
}

std::string DescribeWarningMachinesRequest::getUuids() const {
  return uuids_;
}

void DescribeWarningMachinesRequest::setUuids(const std::string &uuids) {
  uuids_ = uuids;
  setParameter(std::string("Uuids"), uuids);
}

