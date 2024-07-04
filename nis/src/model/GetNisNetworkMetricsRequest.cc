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

#include <alibabacloud/nis/model/GetNisNetworkMetricsRequest.h>

using AlibabaCloud::Nis::Model::GetNisNetworkMetricsRequest;

GetNisNetworkMetricsRequest::GetNisNetworkMetricsRequest()
    : RpcServiceRequest("nis", "2021-12-16", "GetNisNetworkMetrics") {
  setMethod(HttpRequest::Method::Post);
}

GetNisNetworkMetricsRequest::~GetNisNetworkMetricsRequest() {}

bool GetNisNetworkMetricsRequest::getUseCrossAccount() const {
  return useCrossAccount_;
}

void GetNisNetworkMetricsRequest::setUseCrossAccount(bool useCrossAccount) {
  useCrossAccount_ = useCrossAccount;
  setParameter(std::string("UseCrossAccount"), useCrossAccount ? "true" : "false");
}

std::string GetNisNetworkMetricsRequest::getScanBy() const {
  return scanBy_;
}

void GetNisNetworkMetricsRequest::setScanBy(const std::string &scanBy) {
  scanBy_ = scanBy;
  setParameter(std::string("ScanBy"), scanBy);
}

std::string GetNisNetworkMetricsRequest::getMetricName() const {
  return metricName_;
}

void GetNisNetworkMetricsRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

long GetNisNetworkMetricsRequest::getEndTime() const {
  return endTime_;
}

void GetNisNetworkMetricsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long GetNisNetworkMetricsRequest::getBeginTime() const {
  return beginTime_;
}

void GetNisNetworkMetricsRequest::setBeginTime(long beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), std::to_string(beginTime));
}

std::string GetNisNetworkMetricsRequest::getResourceType() const {
  return resourceType_;
}

void GetNisNetworkMetricsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string GetNisNetworkMetricsRequest::getRegionNo() const {
  return regionNo_;
}

void GetNisNetworkMetricsRequest::setRegionNo(const std::string &regionNo) {
  regionNo_ = regionNo;
  setParameter(std::string("RegionNo"), regionNo);
}

std::vector<std::string> GetNisNetworkMetricsRequest::getAccountIds() const {
  return accountIds_;
}

void GetNisNetworkMetricsRequest::setAccountIds(const std::vector<std::string> &accountIds) {
  accountIds_ = accountIds;
}

std::vector<GetNisNetworkMetricsRequest::Dimensions> GetNisNetworkMetricsRequest::getDimensions() const {
  return dimensions_;
}

void GetNisNetworkMetricsRequest::setDimensions(const std::vector<GetNisNetworkMetricsRequest::Dimensions> &dimensions) {
  dimensions_ = dimensions;
  for(int dep1 = 0; dep1 != dimensions.size(); dep1++) {
    setParameter(std::string("Dimensions") + "." + std::to_string(dep1 + 1) + ".Name", dimensions[dep1].name);
    setParameter(std::string("Dimensions") + "." + std::to_string(dep1 + 1) + ".Value", dimensions[dep1].value);
  }
}

