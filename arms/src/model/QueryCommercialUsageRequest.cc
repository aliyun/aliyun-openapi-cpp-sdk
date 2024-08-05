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

#include <alibabacloud/arms/model/QueryCommercialUsageRequest.h>

using AlibabaCloud::ARMS::Model::QueryCommercialUsageRequest;

QueryCommercialUsageRequest::QueryCommercialUsageRequest()
    : RpcServiceRequest("arms", "2019-08-08", "QueryCommercialUsage") {
  setMethod(HttpRequest::Method::Post);
}

QueryCommercialUsageRequest::~QueryCommercialUsageRequest() {}

long QueryCommercialUsageRequest::getStartTime() const {
  return startTime_;
}

void QueryCommercialUsageRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::vector<std::string> QueryCommercialUsageRequest::getMeasures() const {
  return measures_;
}

void QueryCommercialUsageRequest::setMeasures(const std::vector<std::string> &measures) {
  measures_ = measures;
}

int QueryCommercialUsageRequest::getIntervalInSec() const {
  return intervalInSec_;
}

void QueryCommercialUsageRequest::setIntervalInSec(int intervalInSec) {
  intervalInSec_ = intervalInSec;
  setParameter(std::string("IntervalInSec"), std::to_string(intervalInSec));
}

std::string QueryCommercialUsageRequest::getQueryType() const {
  return queryType_;
}

void QueryCommercialUsageRequest::setQueryType(const std::string &queryType) {
  queryType_ = queryType;
  setParameter(std::string("QueryType"), queryType);
}

std::string QueryCommercialUsageRequest::getOrder() const {
  return order_;
}

void QueryCommercialUsageRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

long QueryCommercialUsageRequest::getEndTime() const {
  return endTime_;
}

void QueryCommercialUsageRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string QueryCommercialUsageRequest::getOrderBy() const {
  return orderBy_;
}

void QueryCommercialUsageRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

std::string QueryCommercialUsageRequest::getProxyUserId() const {
  return proxyUserId_;
}

void QueryCommercialUsageRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

std::string QueryCommercialUsageRequest::getMetric() const {
  return metric_;
}

void QueryCommercialUsageRequest::setMetric(const std::string &metric) {
  metric_ = metric;
  setParameter(std::string("Metric"), metric);
}

std::vector<QueryCommercialUsageRequest::AdvancedFilters> QueryCommercialUsageRequest::getAdvancedFilters() const {
  return advancedFilters_;
}

void QueryCommercialUsageRequest::setAdvancedFilters(const std::vector<QueryCommercialUsageRequest::AdvancedFilters> &advancedFilters) {
  advancedFilters_ = advancedFilters;
  for(int dep1 = 0; dep1 != advancedFilters.size(); dep1++) {
  auto advancedFiltersObj = advancedFilters.at(dep1);
  std::string advancedFiltersObjStr = std::string("AdvancedFilters") + "." + std::to_string(dep1 + 1);
    setParameter(advancedFiltersObjStr + ".OpType", advancedFiltersObj.opType);
    setParameter(advancedFiltersObjStr + ".Value", advancedFiltersObj.value);
    setParameter(advancedFiltersObjStr + ".Key", advancedFiltersObj.key);
  }
}

std::vector<std::string> QueryCommercialUsageRequest::getDimensions() const {
  return dimensions_;
}

void QueryCommercialUsageRequest::setDimensions(const std::vector<std::string> &dimensions) {
  dimensions_ = dimensions;
}

