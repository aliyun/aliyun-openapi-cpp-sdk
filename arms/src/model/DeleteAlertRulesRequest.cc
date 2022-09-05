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

#include <alibabacloud/arms/model/DeleteAlertRulesRequest.h>

using AlibabaCloud::ARMS::Model::DeleteAlertRulesRequest;

DeleteAlertRulesRequest::DeleteAlertRulesRequest()
    : RpcServiceRequest("arms", "2019-08-08", "DeleteAlertRules") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAlertRulesRequest::~DeleteAlertRulesRequest() {}

std::string DeleteAlertRulesRequest::getAlertIds() const {
  return alertIds_;
}

void DeleteAlertRulesRequest::setAlertIds(const std::string &alertIds) {
  alertIds_ = alertIds;
  setParameter(std::string("AlertIds"), alertIds);
}

std::string DeleteAlertRulesRequest::getRegionId() const {
  return regionId_;
}

void DeleteAlertRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteAlertRulesRequest::getProxyUserId() const {
  return proxyUserId_;
}

void DeleteAlertRulesRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

