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

#include <alibabacloud/ice/model/DescribePlayQosListRequest.h>

using AlibabaCloud::ICE::Model::DescribePlayQosListRequest;

DescribePlayQosListRequest::DescribePlayQosListRequest()
    : RpcServiceRequest("ice", "2020-11-09", "DescribePlayQosList") {
  setMethod(HttpRequest::Method::Post);
}

DescribePlayQosListRequest::~DescribePlayQosListRequest() {}

std::string DescribePlayQosListRequest::getNetwork() const {
  return network_;
}

void DescribePlayQosListRequest::setNetwork(const std::string &network) {
  network_ = network;
  setParameter(std::string("Network"), network);
}

std::vector<DescribePlayQosListRequest::std::string> DescribePlayQosListRequest::getMetricTypes() const {
  return metricTypes_;
}

void DescribePlayQosListRequest::setMetricTypes(const std::vector<DescribePlayQosListRequest::std::string> &metricTypes) {
  metricTypes_ = metricTypes;
  for(int dep1 = 0; dep1 != metricTypes.size(); dep1++) {
    setParameter(std::string("MetricTypes") + "." + std::to_string(dep1 + 1), metricTypes[dep1]);
  }
}

std::string DescribePlayQosListRequest::getAppName() const {
  return appName_;
}

void DescribePlayQosListRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

int DescribePlayQosListRequest::getPageSize() const {
  return pageSize_;
}

void DescribePlayQosListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribePlayQosListRequest::getEndTs() const {
  return endTs_;
}

void DescribePlayQosListRequest::setEndTs(const std::string &endTs) {
  endTs_ = endTs;
  setParameter(std::string("EndTs"), endTs);
}

std::string DescribePlayQosListRequest::getDefinition() const {
  return definition_;
}

void DescribePlayQosListRequest::setDefinition(const std::string &definition) {
  definition_ = definition;
  setParameter(std::string("Definition"), definition);
}

std::string DescribePlayQosListRequest::getItemConfigs() const {
  return itemConfigs_;
}

void DescribePlayQosListRequest::setItemConfigs(const std::string &itemConfigs) {
  itemConfigs_ = itemConfigs;
  setParameter(std::string("ItemConfigs"), itemConfigs);
}

std::string DescribePlayQosListRequest::getOs() const {
  return os_;
}

void DescribePlayQosListRequest::setOs(const std::string &os) {
  os_ = os;
  setParameter(std::string("Os"), os);
}

std::string DescribePlayQosListRequest::getOrderName() const {
  return orderName_;
}

void DescribePlayQosListRequest::setOrderName(const std::string &orderName) {
  orderName_ = orderName;
  setParameter(std::string("OrderName"), orderName);
}

std::string DescribePlayQosListRequest::getBeginTs() const {
  return beginTs_;
}

void DescribePlayQosListRequest::setBeginTs(const std::string &beginTs) {
  beginTs_ = beginTs;
  setParameter(std::string("BeginTs"), beginTs);
}

int DescribePlayQosListRequest::getPageNo() const {
  return pageNo_;
}

void DescribePlayQosListRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string DescribePlayQosListRequest::getTerminalType() const {
  return terminalType_;
}

void DescribePlayQosListRequest::setTerminalType(const std::string &terminalType) {
  terminalType_ = terminalType;
  setParameter(std::string("TerminalType"), terminalType);
}

std::string DescribePlayQosListRequest::getOrderType() const {
  return orderType_;
}

void DescribePlayQosListRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

