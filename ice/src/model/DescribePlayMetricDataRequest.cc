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

#include <alibabacloud/ice/model/DescribePlayMetricDataRequest.h>

using AlibabaCloud::ICE::Model::DescribePlayMetricDataRequest;

DescribePlayMetricDataRequest::DescribePlayMetricDataRequest()
    : RpcServiceRequest("ice", "2020-11-09", "DescribePlayMetricData") {
  setMethod(HttpRequest::Method::Post);
}

DescribePlayMetricDataRequest::~DescribePlayMetricDataRequest() {}

std::string DescribePlayMetricDataRequest::getMetricType() const {
  return metricType_;
}

void DescribePlayMetricDataRequest::setMetricType(const std::string &metricType) {
  metricType_ = metricType;
  setParameter(std::string("MetricType"), metricType);
}

std::string DescribePlayMetricDataRequest::getNetwork() const {
  return network_;
}

void DescribePlayMetricDataRequest::setNetwork(const std::string &network) {
  network_ = network;
  setParameter(std::string("Network"), network);
}

std::string DescribePlayMetricDataRequest::getSdkVersion() const {
  return sdkVersion_;
}

void DescribePlayMetricDataRequest::setSdkVersion(const std::string &sdkVersion) {
  sdkVersion_ = sdkVersion;
  setParameter(std::string("SdkVersion"), sdkVersion);
}

std::string DescribePlayMetricDataRequest::getAppName() const {
  return appName_;
}

void DescribePlayMetricDataRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

long DescribePlayMetricDataRequest::getEndTs() const {
  return endTs_;
}

void DescribePlayMetricDataRequest::setEndTs(long endTs) {
  endTs_ = endTs;
  setParameter(std::string("EndTs"), std::to_string(endTs));
}

std::string DescribePlayMetricDataRequest::getDefinition() const {
  return definition_;
}

void DescribePlayMetricDataRequest::setDefinition(const std::string &definition) {
  definition_ = definition;
  setParameter(std::string("Definition"), definition);
}

std::string DescribePlayMetricDataRequest::getItemConfigs() const {
  return itemConfigs_;
}

void DescribePlayMetricDataRequest::setItemConfigs(const std::string &itemConfigs) {
  itemConfigs_ = itemConfigs;
  setParameter(std::string("ItemConfigs"), itemConfigs);
}

std::string DescribePlayMetricDataRequest::getOs() const {
  return os_;
}

void DescribePlayMetricDataRequest::setOs(const std::string &os) {
  os_ = os;
  setParameter(std::string("Os"), os);
}

long DescribePlayMetricDataRequest::getBeginTs() const {
  return beginTs_;
}

void DescribePlayMetricDataRequest::setBeginTs(long beginTs) {
  beginTs_ = beginTs;
  setParameter(std::string("BeginTs"), std::to_string(beginTs));
}

std::string DescribePlayMetricDataRequest::getExperienceLevel() const {
  return experienceLevel_;
}

void DescribePlayMetricDataRequest::setExperienceLevel(const std::string &experienceLevel) {
  experienceLevel_ = experienceLevel;
  setParameter(std::string("ExperienceLevel"), experienceLevel);
}

std::string DescribePlayMetricDataRequest::getTerminalType() const {
  return terminalType_;
}

void DescribePlayMetricDataRequest::setTerminalType(const std::string &terminalType) {
  terminalType_ = terminalType;
  setParameter(std::string("TerminalType"), terminalType);
}

