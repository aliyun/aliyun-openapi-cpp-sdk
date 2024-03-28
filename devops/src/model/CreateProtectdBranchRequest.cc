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

#include <alibabacloud/devops/model/CreateProtectdBranchRequest.h>

using AlibabaCloud::Devops::Model::CreateProtectdBranchRequest;

CreateProtectdBranchRequest::CreateProtectdBranchRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/protect_branches"};
  setMethod(HttpRequest::Method::Post);
}

CreateProtectdBranchRequest::~CreateProtectdBranchRequest() {}

std::string CreateProtectdBranchRequest::getOrganizationId() const {
  return organizationId_;
}

void CreateProtectdBranchRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long CreateProtectdBranchRequest::getRepositoryId() const {
  return repositoryId_;
}

void CreateProtectdBranchRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string CreateProtectdBranchRequest::getAccessToken() const {
  return accessToken_;
}

void CreateProtectdBranchRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

CreateProtectdBranchRequest::body CreateProtectdBranchRequest::getBody() const {
  return body_;
}

void CreateProtectdBranchRequest::setBody(const CreateProtectdBranchRequest::body &body) {
  body_ = body;
  for(int dep1 = 0; dep1 != body.allowPushRoles.size(); dep1++) {
    setBodyParameter(std::string("body") + ".allowPushRoles." + std::to_string(dep1 + 1), std::to_string(body.allowPushRoles[dep1]));
  }
  setBodyParameter(std::string("body") + ".testSettingDTO.sensitiveInfoDetection.message", body.testSettingDTO.sensitiveInfoDetection.message);
  setBodyParameter(std::string("body") + ".testSettingDTO.sensitiveInfoDetection.enabled", body.testSettingDTO.sensitiveInfoDetection.enabled ? "true" : "false");
  setBodyParameter(std::string("body") + ".testSettingDTO.isRequired", body.testSettingDTO.isRequired ? "true" : "false");
  setBodyParameter(std::string("body") + ".testSettingDTO.checkTaskQualityConfig.bizNo", body.testSettingDTO.checkTaskQualityConfig.bizNo);
  setBodyParameter(std::string("body") + ".testSettingDTO.checkTaskQualityConfig.taskName", body.testSettingDTO.checkTaskQualityConfig.taskName);
  setBodyParameter(std::string("body") + ".testSettingDTO.checkTaskQualityConfig.message", body.testSettingDTO.checkTaskQualityConfig.message);
  setBodyParameter(std::string("body") + ".testSettingDTO.checkTaskQualityConfig.enabled", body.testSettingDTO.checkTaskQualityConfig.enabled ? "true" : "false");
  setBodyParameter(std::string("body") + ".testSettingDTO.codeGuidelinesDetection.message", body.testSettingDTO.codeGuidelinesDetection.message);
  setBodyParameter(std::string("body") + ".testSettingDTO.codeGuidelinesDetection.enabled", body.testSettingDTO.codeGuidelinesDetection.enabled ? "true" : "false");
  for(int dep1 = 0; dep1 != body.testSettingDTO.checkConfig.checkItems.size(); dep1++) {
    setBodyParameter(std::string("body") + ".testSettingDTO.checkConfig.checkItems." + std::to_string(dep1 + 1) + ".isRequired", body.testSettingDTO.checkConfig.checkItems[dep1].isRequired ? "true" : "false");
    setBodyParameter(std::string("body") + ".testSettingDTO.checkConfig.checkItems." + std::to_string(dep1 + 1) + ".name", body.testSettingDTO.checkConfig.checkItems[dep1].name);
  }
  for(int dep1 = 0; dep1 != body.allowPushUserIds.size(); dep1++) {
    setBodyParameter(std::string("body") + ".allowPushUserIds." + std::to_string(dep1 + 1), body.allowPushUserIds[dep1]);
  }
  for(int dep1 = 0; dep1 != body.allowMergeUserIds.size(); dep1++) {
    setBodyParameter(std::string("body") + ".allowMergeUserIds." + std::to_string(dep1 + 1), body.allowMergeUserIds[dep1]);
  }
  setBodyParameter(std::string("body") + ".mergeRequestSetting.mrMode", body.mergeRequestSetting.mrMode);
  for(int dep1 = 0; dep1 != body.mergeRequestSetting.defaultAssignees.size(); dep1++) {
    setBodyParameter(std::string("body") + ".mergeRequestSetting.defaultAssignees." + std::to_string(dep1 + 1), body.mergeRequestSetting.defaultAssignees[dep1]);
  }
  setBodyParameter(std::string("body") + ".mergeRequestSetting.minimumApproval", std::to_string(body.mergeRequestSetting.minimumApproval));
  setBodyParameter(std::string("body") + ".mergeRequestSetting.isRequired", body.mergeRequestSetting.isRequired ? "true" : "false");
  setBodyParameter(std::string("body") + ".mergeRequestSetting.isRequireDiscussionProcessed", body.mergeRequestSetting.isRequireDiscussionProcessed ? "true" : "false");
  for(int dep1 = 0; dep1 != body.mergeRequestSetting.allowMergeRequestRoles.size(); dep1++) {
    setBodyParameter(std::string("body") + ".mergeRequestSetting.allowMergeRequestRoles." + std::to_string(dep1 + 1), std::to_string(body.mergeRequestSetting.allowMergeRequestRoles[dep1]));
  }
  setBodyParameter(std::string("body") + ".mergeRequestSetting.whiteList", body.mergeRequestSetting.whiteList);
  setBodyParameter(std::string("body") + ".mergeRequestSetting.isResetApprovalWhenNewPush", body.mergeRequestSetting.isResetApprovalWhenNewPush ? "true" : "false");
  setBodyParameter(std::string("body") + ".mergeRequestSetting.isAllowSelfApproval", body.mergeRequestSetting.isAllowSelfApproval ? "true" : "false");
  setBodyParameter(std::string("body") + ".id", std::to_string(body.id));
  setBodyParameter(std::string("body") + ".branch", body.branch);
  for(int dep1 = 0; dep1 != body.allowMergeRoles.size(); dep1++) {
    setBodyParameter(std::string("body") + ".allowMergeRoles." + std::to_string(dep1 + 1), std::to_string(body.allowMergeRoles[dep1]));
  }
}

