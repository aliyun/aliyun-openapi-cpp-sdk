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

#include <alibabacloud/arms/model/UpdateAlertRuleRequest.h>

using AlibabaCloud::ARMS::Model::UpdateAlertRuleRequest;

UpdateAlertRuleRequest::UpdateAlertRuleRequest()
    : RpcServiceRequest("arms", "2019-08-08", "UpdateAlertRule") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAlertRuleRequest::~UpdateAlertRuleRequest() {}

bool UpdateAlertRuleRequest::getIsAutoStart() const {
  return isAutoStart_;
}

void UpdateAlertRuleRequest::setIsAutoStart(bool isAutoStart) {
  isAutoStart_ = isAutoStart;
  setParameter(std::string("IsAutoStart"), isAutoStart ? "true" : "false");
}

std::string UpdateAlertRuleRequest::getProxyUserId() const {
  return proxyUserId_;
}

void UpdateAlertRuleRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

std::string UpdateAlertRuleRequest::getRegionId() const {
  return regionId_;
}

void UpdateAlertRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateAlertRuleRequest::getContactGroupIds() const {
  return contactGroupIds_;
}

void UpdateAlertRuleRequest::setContactGroupIds(const std::string &contactGroupIds) {
  contactGroupIds_ = contactGroupIds;
  setParameter(std::string("ContactGroupIds"), contactGroupIds);
}

long UpdateAlertRuleRequest::getAlertId() const {
  return alertId_;
}

void UpdateAlertRuleRequest::setAlertId(long alertId) {
  alertId_ = alertId;
  setParameter(std::string("AlertId"), std::to_string(alertId));
}

std::string UpdateAlertRuleRequest::getTemplageAlertConfig() const {
  return templageAlertConfig_;
}

void UpdateAlertRuleRequest::setTemplageAlertConfig(const std::string &templageAlertConfig) {
  templageAlertConfig_ = templageAlertConfig;
  setParameter(std::string("TemplageAlertConfig"), templageAlertConfig);
}

