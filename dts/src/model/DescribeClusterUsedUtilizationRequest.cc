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

#include <alibabacloud/dts/model/DescribeClusterUsedUtilizationRequest.h>

using AlibabaCloud::Dts::Model::DescribeClusterUsedUtilizationRequest;

DescribeClusterUsedUtilizationRequest::DescribeClusterUsedUtilizationRequest()
    : RpcServiceRequest("dts", "2020-01-01", "DescribeClusterUsedUtilization") {
  setMethod(HttpRequest::Method::Post);
}

DescribeClusterUsedUtilizationRequest::~DescribeClusterUsedUtilizationRequest() {}

std::string DescribeClusterUsedUtilizationRequest::getMetricType() const {
  return metricType_;
}

void DescribeClusterUsedUtilizationRequest::setMetricType(const std::string &metricType) {
  metricType_ = metricType;
  setBodyParameter(std::string("MetricType"), metricType);
}

std::string DescribeClusterUsedUtilizationRequest::getClientToken() const {
  return clientToken_;
}

void DescribeClusterUsedUtilizationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeClusterUsedUtilizationRequest::getDedicatedClusterId() const {
  return dedicatedClusterId_;
}

void DescribeClusterUsedUtilizationRequest::setDedicatedClusterId(const std::string &dedicatedClusterId) {
  dedicatedClusterId_ = dedicatedClusterId;
  setBodyParameter(std::string("DedicatedClusterId"), dedicatedClusterId);
}

std::string DescribeClusterUsedUtilizationRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeClusterUsedUtilizationRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setBodyParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeClusterUsedUtilizationRequest::getAccountId() const {
  return accountId_;
}

void DescribeClusterUsedUtilizationRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setBodyParameter(std::string("AccountId"), accountId);
}

std::string DescribeClusterUsedUtilizationRequest::getRegionId() const {
  return regionId_;
}

void DescribeClusterUsedUtilizationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string DescribeClusterUsedUtilizationRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeClusterUsedUtilizationRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setBodyParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeClusterUsedUtilizationRequest::getDtsJobId() const {
  return dtsJobId_;
}

void DescribeClusterUsedUtilizationRequest::setDtsJobId(const std::string &dtsJobId) {
  dtsJobId_ = dtsJobId;
  setBodyParameter(std::string("DtsJobId"), dtsJobId);
}

std::string DescribeClusterUsedUtilizationRequest::getEnv() const {
  return env_;
}

void DescribeClusterUsedUtilizationRequest::setEnv(const std::string &env) {
  env_ = env;
  setBodyParameter(std::string("Env"), env);
}

std::string DescribeClusterUsedUtilizationRequest::getOwnerID() const {
  return ownerID_;
}

void DescribeClusterUsedUtilizationRequest::setOwnerID(const std::string &ownerID) {
  ownerID_ = ownerID;
  setBodyParameter(std::string("OwnerID"), ownerID);
}

