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

#include <alibabacloud/live/model/DescribeLiveInteractionMetricDataRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveInteractionMetricDataRequest;

DescribeLiveInteractionMetricDataRequest::DescribeLiveInteractionMetricDataRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveInteractionMetricData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveInteractionMetricDataRequest::~DescribeLiveInteractionMetricDataRequest() {}

std::string DescribeLiveInteractionMetricDataRequest::getMetricType() const {
  return metricType_;
}

void DescribeLiveInteractionMetricDataRequest::setMetricType(const std::string &metricType) {
  metricType_ = metricType;
  setParameter(std::string("MetricType"), metricType);
}

long DescribeLiveInteractionMetricDataRequest::getEndTs() const {
  return endTs_;
}

void DescribeLiveInteractionMetricDataRequest::setEndTs(long endTs) {
  endTs_ = endTs;
  setParameter(std::string("EndTs"), std::to_string(endTs));
}

std::string DescribeLiveInteractionMetricDataRequest::getOs() const {
  return os_;
}

void DescribeLiveInteractionMetricDataRequest::setOs(const std::string &os) {
  os_ = os;
  setParameter(std::string("Os"), os);
}

long DescribeLiveInteractionMetricDataRequest::getBeginTs() const {
  return beginTs_;
}

void DescribeLiveInteractionMetricDataRequest::setBeginTs(long beginTs) {
  beginTs_ = beginTs;
  setParameter(std::string("BeginTs"), std::to_string(beginTs));
}

std::string DescribeLiveInteractionMetricDataRequest::getAppId() const {
  return appId_;
}

void DescribeLiveInteractionMetricDataRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string DescribeLiveInteractionMetricDataRequest::getTerminalType() const {
  return terminalType_;
}

void DescribeLiveInteractionMetricDataRequest::setTerminalType(const std::string &terminalType) {
  terminalType_ = terminalType;
  setParameter(std::string("TerminalType"), terminalType);
}

