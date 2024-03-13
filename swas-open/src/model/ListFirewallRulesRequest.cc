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

#include <alibabacloud/swas-open/model/ListFirewallRulesRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::ListFirewallRulesRequest;

ListFirewallRulesRequest::ListFirewallRulesRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "ListFirewallRules") {
  setMethod(HttpRequest::Method::Post);
}

ListFirewallRulesRequest::~ListFirewallRulesRequest() {}

int ListFirewallRulesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListFirewallRulesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListFirewallRulesRequest::getInstanceId() const {
  return instanceId_;
}

void ListFirewallRulesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListFirewallRulesRequest::getRegionId() const {
  return regionId_;
}

void ListFirewallRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListFirewallRulesRequest::getPageSize() const {
  return pageSize_;
}

void ListFirewallRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListFirewallRulesRequest::getFirewallRuleId() const {
  return firewallRuleId_;
}

void ListFirewallRulesRequest::setFirewallRuleId(const std::string &firewallRuleId) {
  firewallRuleId_ = firewallRuleId;
  setParameter(std::string("FirewallRuleId"), firewallRuleId);
}

std::vector<ListFirewallRulesRequest::Tag> ListFirewallRulesRequest::getTag() const {
  return tag_;
}

void ListFirewallRulesRequest::setTag(const std::vector<ListFirewallRulesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

