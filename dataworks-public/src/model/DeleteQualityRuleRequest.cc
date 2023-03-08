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

#include <alibabacloud/dataworks-public/model/DeleteQualityRuleRequest.h>

using AlibabaCloud::Dataworks_public::Model::DeleteQualityRuleRequest;

DeleteQualityRuleRequest::DeleteQualityRuleRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "DeleteQualityRule") {
  setMethod(HttpRequest::Method::Post);
}

DeleteQualityRuleRequest::~DeleteQualityRuleRequest() {}

std::string DeleteQualityRuleRequest::getProjectName() const {
  return projectName_;
}

void DeleteQualityRuleRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

long DeleteQualityRuleRequest::getRuleId() const {
  return ruleId_;
}

void DeleteQualityRuleRequest::setRuleId(long ruleId) {
  ruleId_ = ruleId;
  setBodyParameter(std::string("RuleId"), std::to_string(ruleId));
}

long DeleteQualityRuleRequest::getProjectId() const {
  return projectId_;
}

void DeleteQualityRuleRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

