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

#include <alibabacloud/sas/model/DescribeVulNumStatisticsRequest.h>

using AlibabaCloud::Sas::Model::DescribeVulNumStatisticsRequest;

DescribeVulNumStatisticsRequest::DescribeVulNumStatisticsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeVulNumStatistics") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVulNumStatisticsRequest::~DescribeVulNumStatisticsRequest() {}

std::string DescribeVulNumStatisticsRequest::getTargetType() const {
  return targetType_;
}

void DescribeVulNumStatisticsRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

long DescribeVulNumStatisticsRequest::getStartTs() const {
  return startTs_;
}

void DescribeVulNumStatisticsRequest::setStartTs(long startTs) {
  startTs_ = startTs;
  setParameter(std::string("StartTs"), std::to_string(startTs));
}

long DescribeVulNumStatisticsRequest::getCreateTsStart() const {
  return createTsStart_;
}

void DescribeVulNumStatisticsRequest::setCreateTsStart(long createTsStart) {
  createTsStart_ = createTsStart;
  setParameter(std::string("CreateTsStart"), std::to_string(createTsStart));
}

std::string DescribeVulNumStatisticsRequest::getContainerFieldName() const {
  return containerFieldName_;
}

void DescribeVulNumStatisticsRequest::setContainerFieldName(const std::string &containerFieldName) {
  containerFieldName_ = containerFieldName;
  setParameter(std::string("ContainerFieldName"), containerFieldName);
}

std::string DescribeVulNumStatisticsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeVulNumStatisticsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeVulNumStatisticsRequest::getContainerFieldValue() const {
  return containerFieldValue_;
}

void DescribeVulNumStatisticsRequest::setContainerFieldValue(const std::string &containerFieldValue) {
  containerFieldValue_ = containerFieldValue;
  setParameter(std::string("ContainerFieldValue"), containerFieldValue);
}

long DescribeVulNumStatisticsRequest::getEndTs() const {
  return endTs_;
}

void DescribeVulNumStatisticsRequest::setEndTs(long endTs) {
  endTs_ = endTs;
  setParameter(std::string("EndTs"), std::to_string(endTs));
}

std::string DescribeVulNumStatisticsRequest::getFrom() const {
  return from_;
}

void DescribeVulNumStatisticsRequest::setFrom(const std::string &from) {
  from_ = from;
  setParameter(std::string("From"), from);
}

std::vector<std::string> DescribeVulNumStatisticsRequest::getNecessityList() const {
  return necessityList_;
}

void DescribeVulNumStatisticsRequest::setNecessityList(const std::vector<std::string> &necessityList) {
  necessityList_ = necessityList;
}

std::string DescribeVulNumStatisticsRequest::getClusterId() const {
  return clusterId_;
}

void DescribeVulNumStatisticsRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DescribeVulNumStatisticsRequest::getIncludeApp() const {
  return includeApp_;
}

void DescribeVulNumStatisticsRequest::setIncludeApp(const std::string &includeApp) {
  includeApp_ = includeApp;
  setParameter(std::string("IncludeApp"), includeApp);
}

long DescribeVulNumStatisticsRequest::getCreateTsEnd() const {
  return createTsEnd_;
}

void DescribeVulNumStatisticsRequest::setCreateTsEnd(long createTsEnd) {
  createTsEnd_ = createTsEnd;
  setParameter(std::string("CreateTsEnd"), std::to_string(createTsEnd));
}

std::string DescribeVulNumStatisticsRequest::getUuids() const {
  return uuids_;
}

void DescribeVulNumStatisticsRequest::setUuids(const std::string &uuids) {
  uuids_ = uuids;
  setParameter(std::string("Uuids"), uuids);
}

