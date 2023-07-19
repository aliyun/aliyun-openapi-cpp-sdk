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

#include <alibabacloud/dts/model/DescribeMetricListRequest.h>

using AlibabaCloud::Dts::Model::DescribeMetricListRequest;

DescribeMetricListRequest::DescribeMetricListRequest()
    : RpcServiceRequest("dts", "2020-01-01", "DescribeMetricList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMetricListRequest::~DescribeMetricListRequest() {}

std::string DescribeMetricListRequest::getMetricType() const {
  return metricType_;
}

void DescribeMetricListRequest::setMetricType(const std::string &metricType) {
  metricType_ = metricType;
  setBodyParameter(std::string("MetricType"), metricType);
}

std::string DescribeMetricListRequest::getClientToken() const {
  return clientToken_;
}

void DescribeMetricListRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

long DescribeMetricListRequest::getStartTime() const {
  return startTime_;
}

void DescribeMetricListRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeMetricListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeMetricListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setBodyParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeMetricListRequest::getAccountId() const {
  return accountId_;
}

void DescribeMetricListRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setBodyParameter(std::string("AccountId"), accountId);
}

std::string DescribeMetricListRequest::getParam() const {
  return param_;
}

void DescribeMetricListRequest::setParam(const std::string &param) {
  param_ = param;
  setBodyParameter(std::string("Param"), param);
}

std::string DescribeMetricListRequest::getDtsJobId() const {
  return dtsJobId_;
}

void DescribeMetricListRequest::setDtsJobId(const std::string &dtsJobId) {
  dtsJobId_ = dtsJobId;
  setBodyParameter(std::string("DtsJobId"), dtsJobId);
}

std::string DescribeMetricListRequest::getMetricName() const {
  return metricName_;
}

void DescribeMetricListRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setBodyParameter(std::string("MetricName"), metricName);
}

long DescribeMetricListRequest::getPeriod() const {
  return period_;
}

void DescribeMetricListRequest::setPeriod(long period) {
  period_ = period;
  setBodyParameter(std::string("Period"), std::to_string(period));
}

long DescribeMetricListRequest::getEndTime() const {
  return endTime_;
}

void DescribeMetricListRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string DescribeMetricListRequest::getEnv() const {
  return env_;
}

void DescribeMetricListRequest::setEnv(const std::string &env) {
  env_ = env;
  setBodyParameter(std::string("Env"), env);
}

std::string DescribeMetricListRequest::getOwnerID() const {
  return ownerID_;
}

void DescribeMetricListRequest::setOwnerID(const std::string &ownerID) {
  ownerID_ = ownerID;
  setBodyParameter(std::string("OwnerID"), ownerID);
}

