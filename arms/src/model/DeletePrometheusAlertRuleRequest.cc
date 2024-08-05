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

#include <alibabacloud/arms/model/DeletePrometheusAlertRuleRequest.h>

using AlibabaCloud::ARMS::Model::DeletePrometheusAlertRuleRequest;

DeletePrometheusAlertRuleRequest::DeletePrometheusAlertRuleRequest()
    : RpcServiceRequest("arms", "2019-08-08", "DeletePrometheusAlertRule") {
  setMethod(HttpRequest::Method::Post);
}

DeletePrometheusAlertRuleRequest::~DeletePrometheusAlertRuleRequest() {}

long DeletePrometheusAlertRuleRequest::getAlertId() const {
  return alertId_;
}

void DeletePrometheusAlertRuleRequest::setAlertId(long alertId) {
  alertId_ = alertId;
  setParameter(std::string("AlertId"), std::to_string(alertId));
}

std::string DeletePrometheusAlertRuleRequest::getClusterId() const {
  return clusterId_;
}

void DeletePrometheusAlertRuleRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

