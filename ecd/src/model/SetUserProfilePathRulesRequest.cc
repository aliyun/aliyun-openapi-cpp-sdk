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

#include <alibabacloud/ecd/model/SetUserProfilePathRulesRequest.h>

using AlibabaCloud::Ecd::Model::SetUserProfilePathRulesRequest;

SetUserProfilePathRulesRequest::SetUserProfilePathRulesRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "SetUserProfilePathRules") {
  setMethod(HttpRequest::Method::Post);
}

SetUserProfilePathRulesRequest::~SetUserProfilePathRulesRequest() {}

std::string SetUserProfilePathRulesRequest::getUserProfileRuleType() const {
  return userProfileRuleType_;
}

void SetUserProfilePathRulesRequest::setUserProfileRuleType(const std::string &userProfileRuleType) {
  userProfileRuleType_ = userProfileRuleType;
  setParameter(std::string("UserProfileRuleType"), userProfileRuleType);
}

std::string SetUserProfilePathRulesRequest::getDesktopGroupId() const {
  return desktopGroupId_;
}

void SetUserProfilePathRulesRequest::setDesktopGroupId(const std::string &desktopGroupId) {
  desktopGroupId_ = desktopGroupId;
  setParameter(std::string("DesktopGroupId"), desktopGroupId);
}

std::string SetUserProfilePathRulesRequest::getRegionId() const {
  return regionId_;
}

void SetUserProfilePathRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<SetUserProfilePathRulesRequest::UserProfilePathRule> SetUserProfilePathRulesRequest::getUserProfilePathRule() const {
  return userProfilePathRule_;
}

void SetUserProfilePathRulesRequest::setUserProfilePathRule(const std::vector<SetUserProfilePathRulesRequest::UserProfilePathRule> &userProfilePathRule) {
  userProfilePathRule_ = userProfilePathRule;
  for(int dep1 = 0; dep1 != userProfilePathRule.size(); dep1++) {
    setParameter(std::string("UserProfilePathRule") + "." + std::to_string(dep1 + 1) + ".BlackPath.Path", userProfilePathRule[dep1].blackPath.path);
    setParameter(std::string("UserProfilePathRule") + "." + std::to_string(dep1 + 1) + ".BlackPath.Type", userProfilePathRule[dep1].blackPath.type);
    for(int dep2 = 0; dep2 != userProfilePathRule[dep1].whitePaths.size(); dep2++) {
      setParameter(std::string("UserProfilePathRule") + "." + std::to_string(dep1 + 1) + ".WhitePaths." + std::to_string(dep2 + 1) + ".Path", userProfilePathRule[dep1].whitePaths[dep2].path);
      setParameter(std::string("UserProfilePathRule") + "." + std::to_string(dep1 + 1) + ".WhitePaths." + std::to_string(dep2 + 1) + ".Type", userProfilePathRule[dep1].whitePaths[dep2].type);
    }
  }
}

