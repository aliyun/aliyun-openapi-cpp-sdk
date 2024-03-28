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

#include <alibabacloud/devops/model/UpdatePushRuleRequest.h>

using AlibabaCloud::Devops::Model::UpdatePushRuleRequest;

UpdatePushRuleRequest::UpdatePushRuleRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v4/projects/[repositoryId]/push_rule/[pushRuleId]"};
  setMethod(HttpRequest::Method::Put);
}

UpdatePushRuleRequest::~UpdatePushRuleRequest() {}

std::string UpdatePushRuleRequest::getOrganizationId() const {
  return organizationId_;
}

void UpdatePushRuleRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long UpdatePushRuleRequest::getPushRuleId() const {
  return pushRuleId_;
}

void UpdatePushRuleRequest::setPushRuleId(long pushRuleId) {
  pushRuleId_ = pushRuleId;
  setParameter(std::string("pushRuleId"), std::to_string(pushRuleId));
}

long UpdatePushRuleRequest::getRepositoryId() const {
  return repositoryId_;
}

void UpdatePushRuleRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string UpdatePushRuleRequest::getAccessToken() const {
  return accessToken_;
}

void UpdatePushRuleRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

UpdatePushRuleRequest::body UpdatePushRuleRequest::getBody() const {
  return body_;
}

void UpdatePushRuleRequest::setBody(const UpdatePushRuleRequest::body &body) {
  body_ = body;
  for(int dep1 = 0; dep1 != body.ruleInfos.size(); dep1++) {
    setBodyParameter(std::string("body") + ".ruleInfos." + std::to_string(dep1 + 1) + ".extraMessage", body.ruleInfos[dep1].extraMessage);
    setBodyParameter(std::string("body") + ".ruleInfos." + std::to_string(dep1 + 1) + ".checkerType", body.ruleInfos[dep1].checkerType);
    for(int dep2 = 0; dep2 != body.ruleInfos[dep1].fileRuleRegexes.size(); dep2++) {
      setBodyParameter(std::string("body") + ".ruleInfos." + std::to_string(dep1 + 1) + ".fileRuleRegexes." + std::to_string(dep2 + 1), body.ruleInfos[dep1].fileRuleRegexes[dep2]);
    }
    setBodyParameter(std::string("body") + ".ruleInfos." + std::to_string(dep1 + 1) + ".checkerName", body.ruleInfos[dep1].checkerName);
  }
}

