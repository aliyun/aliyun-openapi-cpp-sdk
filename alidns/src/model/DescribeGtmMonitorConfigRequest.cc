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

#include <alibabacloud/alidns/model/DescribeGtmMonitorConfigRequest.h>

using AlibabaCloud::Alidns::Model::DescribeGtmMonitorConfigRequest;

DescribeGtmMonitorConfigRequest::DescribeGtmMonitorConfigRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeGtmMonitorConfig") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGtmMonitorConfigRequest::~DescribeGtmMonitorConfigRequest() {}

std::string DescribeGtmMonitorConfigRequest::getMonitorConfigId() const {
  return monitorConfigId_;
}

void DescribeGtmMonitorConfigRequest::setMonitorConfigId(const std::string &monitorConfigId) {
  monitorConfigId_ = monitorConfigId;
  setParameter(std::string("MonitorConfigId"), monitorConfigId);
}

std::string DescribeGtmMonitorConfigRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeGtmMonitorConfigRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string DescribeGtmMonitorConfigRequest::getLang() const {
  return lang_;
}

void DescribeGtmMonitorConfigRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

