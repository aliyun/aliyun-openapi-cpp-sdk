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

#include <alibabacloud/arms/model/DescribePrometheusAlertRuleRequest.h>

using AlibabaCloud::ARMS::Model::DescribePrometheusAlertRuleRequest;

DescribePrometheusAlertRuleRequest::DescribePrometheusAlertRuleRequest()
    : RpcServiceRequest("arms", "2019-08-08", "DescribePrometheusAlertRule") {
  setMethod(HttpRequest::Method::Post);
}

DescribePrometheusAlertRuleRequest::~DescribePrometheusAlertRuleRequest() {}

long DescribePrometheusAlertRuleRequest::getAlertId() const {
  return alertId_;
}

void DescribePrometheusAlertRuleRequest::setAlertId(long alertId) {
  alertId_ = alertId;
  setParameter(std::string("AlertId"), std::to_string(alertId));
}

std::string DescribePrometheusAlertRuleRequest::getClusterId() const {
  return clusterId_;
}

void DescribePrometheusAlertRuleRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

