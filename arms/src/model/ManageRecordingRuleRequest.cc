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

#include <alibabacloud/arms/model/ManageRecordingRuleRequest.h>

using AlibabaCloud::ARMS::Model::ManageRecordingRuleRequest;

ManageRecordingRuleRequest::ManageRecordingRuleRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ManageRecordingRule") {
  setMethod(HttpRequest::Method::Post);
}

ManageRecordingRuleRequest::~ManageRecordingRuleRequest() {}

std::string ManageRecordingRuleRequest::getRuleYaml() const {
  return ruleYaml_;
}

void ManageRecordingRuleRequest::setRuleYaml(const std::string &ruleYaml) {
  ruleYaml_ = ruleYaml;
  setParameter(std::string("RuleYaml"), ruleYaml);
}

std::string ManageRecordingRuleRequest::getRegionId() const {
  return regionId_;
}

void ManageRecordingRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ManageRecordingRuleRequest::getQueryUserId() const {
  return queryUserId_;
}

void ManageRecordingRuleRequest::setQueryUserId(const std::string &queryUserId) {
  queryUserId_ = queryUserId;
  setParameter(std::string("QueryUserId"), queryUserId);
}

std::string ManageRecordingRuleRequest::getClusterId() const {
  return clusterId_;
}

void ManageRecordingRuleRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

