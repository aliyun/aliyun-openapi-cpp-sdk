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

#include <alibabacloud/swas-open/model/UpgradeInstanceRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::UpgradeInstanceRequest;

UpgradeInstanceRequest::UpgradeInstanceRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "UpgradeInstance") {
  setMethod(HttpRequest::Method::Post);
}

UpgradeInstanceRequest::~UpgradeInstanceRequest() {}

std::string UpgradeInstanceRequest::getClientToken() const {
  return clientToken_;
}

void UpgradeInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpgradeInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void UpgradeInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpgradeInstanceRequest::getRegionId() const {
  return regionId_;
}

void UpgradeInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpgradeInstanceRequest::getPlanId() const {
  return planId_;
}

void UpgradeInstanceRequest::setPlanId(const std::string &planId) {
  planId_ = planId;
  setParameter(std::string("PlanId"), planId);
}

