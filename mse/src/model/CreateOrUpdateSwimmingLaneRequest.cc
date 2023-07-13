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

#include <alibabacloud/mse/model/CreateOrUpdateSwimmingLaneRequest.h>

using AlibabaCloud::Mse::Model::CreateOrUpdateSwimmingLaneRequest;

CreateOrUpdateSwimmingLaneRequest::CreateOrUpdateSwimmingLaneRequest()
    : RpcServiceRequest("mse", "2019-05-31", "CreateOrUpdateSwimmingLane") {
  setMethod(HttpRequest::Method::Post);
}

CreateOrUpdateSwimmingLaneRequest::~CreateOrUpdateSwimmingLaneRequest() {}

std::string CreateOrUpdateSwimmingLaneRequest::getMseSessionId() const {
  return mseSessionId_;
}

void CreateOrUpdateSwimmingLaneRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string CreateOrUpdateSwimmingLaneRequest::getEntryRule() const {
  return entryRule_;
}

void CreateOrUpdateSwimmingLaneRequest::setEntryRule(const std::string &entryRule) {
  entryRule_ = entryRule;
  setParameter(std::string("EntryRule"), entryRule);
}

bool CreateOrUpdateSwimmingLaneRequest::getEnable() const {
  return enable_;
}

void CreateOrUpdateSwimmingLaneRequest::setEnable(bool enable) {
  enable_ = enable;
  setParameter(std::string("Enable"), enable ? "true" : "false");
}

long CreateOrUpdateSwimmingLaneRequest::getId() const {
  return id_;
}

void CreateOrUpdateSwimmingLaneRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

std::string CreateOrUpdateSwimmingLaneRequest::getTag() const {
  return tag_;
}

void CreateOrUpdateSwimmingLaneRequest::setTag(const std::string &tag) {
  tag_ = tag;
  setParameter(std::string("Tag"), tag);
}

std::vector<CreateOrUpdateSwimmingLaneRequest::EntryRules> CreateOrUpdateSwimmingLaneRequest::getEntryRules() const {
  return entryRules_;
}

void CreateOrUpdateSwimmingLaneRequest::setEntryRules(const std::vector<CreateOrUpdateSwimmingLaneRequest::EntryRules> &entryRules) {
  entryRules_ = entryRules;
  for(int dep1 = 0; dep1 != entryRules.size(); dep1++) {
  auto entryRulesObj = entryRules.at(dep1);
  std::string entryRulesObjStr = std::string("EntryRules") + "." + std::to_string(dep1 + 1);
    for(int dep2 = 0; dep2 != entryRulesObj.restItems.size(); dep2++) {
    auto restItemsObj = entryRulesObj.restItems.at(dep2);
    std::string restItemsObjStr = entryRulesObjStr + ".RestItems" + "." + std::to_string(dep2 + 1);
      setBodyParameter(restItemsObjStr + ".Datum", restItemsObj.datum);
      setBodyParameter(restItemsObjStr + ".Divisor", std::to_string(restItemsObj.divisor));
      setBodyParameter(restItemsObjStr + ".Rate", std::to_string(restItemsObj.rate));
      setBodyParameter(restItemsObjStr + ".Name", restItemsObj.name);
      setBodyParameter(restItemsObjStr + ".Type", restItemsObj.type);
      setBodyParameter(restItemsObjStr + ".Cond", restItemsObj.cond);
      setBodyParameter(restItemsObjStr + ".Remainder", std::to_string(restItemsObj.remainder));
      setBodyParameter(restItemsObjStr + ".Value", restItemsObj.value);
      setBodyParameter(restItemsObjStr + ".Operator", restItemsObj._operator);
    }
    setBodyParameter(entryRulesObjStr + ".Condition", entryRulesObj.condition);
    setBodyParameter(entryRulesObjStr + ".Priority", std::to_string(entryRulesObj.priority));
  }
}

long CreateOrUpdateSwimmingLaneRequest::getGroupId() const {
  return groupId_;
}

void CreateOrUpdateSwimmingLaneRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

bool CreateOrUpdateSwimmingLaneRequest::getEnableRules() const {
  return enableRules_;
}

void CreateOrUpdateSwimmingLaneRequest::setEnableRules(bool enableRules) {
  enableRules_ = enableRules;
  setParameter(std::string("EnableRules"), enableRules ? "true" : "false");
}

std::string CreateOrUpdateSwimmingLaneRequest::getName() const {
  return name_;
}

void CreateOrUpdateSwimmingLaneRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

CreateOrUpdateSwimmingLaneRequest::GatewaySwimmingLaneRouteJson CreateOrUpdateSwimmingLaneRequest::getGatewaySwimmingLaneRouteJson() const {
  return gatewaySwimmingLaneRouteJson_;
}

void CreateOrUpdateSwimmingLaneRequest::setGatewaySwimmingLaneRouteJson(const CreateOrUpdateSwimmingLaneRequest::GatewaySwimmingLaneRouteJson &gatewaySwimmingLaneRouteJson) {
  gatewaySwimmingLaneRouteJson_ = gatewaySwimmingLaneRouteJson;
  setParameter(std::string("GatewaySwimmingLaneRouteJson") + ".GatewayUniqueId", gatewaySwimmingLaneRouteJson.gatewayUniqueId);
  for(int dep1 = 0; dep1 != gatewaySwimmingLaneRouteJson.routeIdList.size(); dep1++) {
    setParameter(std::string("GatewaySwimmingLaneRouteJson") + ".RouteIdList." + std::to_string(dep1 + 1), std::to_string(gatewaySwimmingLaneRouteJson.routeIdList[dep1]));
  }
  for(int dep1 = 0; dep1 != gatewaySwimmingLaneRouteJson.conditions.size(); dep1++) {
    setParameter(std::string("GatewaySwimmingLaneRouteJson") + ".Conditions." + std::to_string(dep1 + 1) + ".Name", gatewaySwimmingLaneRouteJson.conditions[dep1].name);
    setParameter(std::string("GatewaySwimmingLaneRouteJson") + ".Conditions." + std::to_string(dep1 + 1) + ".Type", gatewaySwimmingLaneRouteJson.conditions[dep1].type);
    setParameter(std::string("GatewaySwimmingLaneRouteJson") + ".Conditions." + std::to_string(dep1 + 1) + ".Cond", gatewaySwimmingLaneRouteJson.conditions[dep1].cond);
    setParameter(std::string("GatewaySwimmingLaneRouteJson") + ".Conditions." + std::to_string(dep1 + 1) + ".Value", gatewaySwimmingLaneRouteJson.conditions[dep1].value);
  }
  setParameter(std::string("GatewaySwimmingLaneRouteJson") + ".GatewayId", std::to_string(gatewaySwimmingLaneRouteJson.gatewayId));
}

std::string CreateOrUpdateSwimmingLaneRequest::getRegionId() const {
  return regionId_;
}

void CreateOrUpdateSwimmingLaneRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateOrUpdateSwimmingLaneRequest::get_Namespace() const {
  return _namespace_;
}

void CreateOrUpdateSwimmingLaneRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string CreateOrUpdateSwimmingLaneRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void CreateOrUpdateSwimmingLaneRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

