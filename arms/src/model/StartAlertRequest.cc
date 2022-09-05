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

#include <alibabacloud/arms/model/StartAlertRequest.h>

using AlibabaCloud::ARMS::Model::StartAlertRequest;

StartAlertRequest::StartAlertRequest()
    : RpcServiceRequest("arms", "2019-08-08", "StartAlert") {
  setMethod(HttpRequest::Method::Post);
}

StartAlertRequest::~StartAlertRequest() {}

std::string StartAlertRequest::getRegionId() const {
  return regionId_;
}

void StartAlertRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string StartAlertRequest::getAlertId() const {
  return alertId_;
}

void StartAlertRequest::setAlertId(const std::string &alertId) {
  alertId_ = alertId;
  setParameter(std::string("AlertId"), alertId);
}

std::string StartAlertRequest::getProxyUserId() const {
  return proxyUserId_;
}

void StartAlertRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

