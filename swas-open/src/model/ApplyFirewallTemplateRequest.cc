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

#include <alibabacloud/swas-open/model/ApplyFirewallTemplateRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::ApplyFirewallTemplateRequest;

ApplyFirewallTemplateRequest::ApplyFirewallTemplateRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "ApplyFirewallTemplate") {
  setMethod(HttpRequest::Method::Post);
}

ApplyFirewallTemplateRequest::~ApplyFirewallTemplateRequest() {}

std::string ApplyFirewallTemplateRequest::getFirewallTemplateId() const {
  return firewallTemplateId_;
}

void ApplyFirewallTemplateRequest::setFirewallTemplateId(const std::string &firewallTemplateId) {
  firewallTemplateId_ = firewallTemplateId;
  setParameter(std::string("FirewallTemplateId"), firewallTemplateId);
}

std::string ApplyFirewallTemplateRequest::getClientToken() const {
  return clientToken_;
}

void ApplyFirewallTemplateRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ApplyFirewallTemplateRequest::getInstanceId() const {
  return instanceId_;
}

void ApplyFirewallTemplateRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ApplyFirewallTemplateRequest::getRegionId() const {
  return regionId_;
}

void ApplyFirewallTemplateRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> ApplyFirewallTemplateRequest::getInstanceIds() const {
  return instanceIds_;
}

void ApplyFirewallTemplateRequest::setInstanceIds(const std::vector<std::string> &instanceIds) {
  instanceIds_ = instanceIds;
}

