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

#include <alibabacloud/csas/model/UpdateBootAndAntiUninstallPolicyRequest.h>

using AlibabaCloud::Csas::Model::UpdateBootAndAntiUninstallPolicyRequest;

UpdateBootAndAntiUninstallPolicyRequest::UpdateBootAndAntiUninstallPolicyRequest()
    : RpcServiceRequest("csas", "2023-01-20", "UpdateBootAndAntiUninstallPolicy") {
  setMethod(HttpRequest::Method::Post);
}

UpdateBootAndAntiUninstallPolicyRequest::~UpdateBootAndAntiUninstallPolicyRequest() {}

bool UpdateBootAndAntiUninstallPolicyRequest::getIsAntiUninstall() const {
  return isAntiUninstall_;
}

void UpdateBootAndAntiUninstallPolicyRequest::setIsAntiUninstall(bool isAntiUninstall) {
  isAntiUninstall_ = isAntiUninstall;
  setBodyParameter(std::string("IsAntiUninstall"), isAntiUninstall ? "true" : "false");
}

bool UpdateBootAndAntiUninstallPolicyRequest::getAllowReport() const {
  return allowReport_;
}

void UpdateBootAndAntiUninstallPolicyRequest::setAllowReport(bool allowReport) {
  allowReport_ = allowReport;
  setBodyParameter(std::string("AllowReport"), allowReport ? "true" : "false");
}

std::string UpdateBootAndAntiUninstallPolicyRequest::getSourceIp() const {
  return sourceIp_;
}

void UpdateBootAndAntiUninstallPolicyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::vector<UpdateBootAndAntiUninstallPolicyRequest::std::string> UpdateBootAndAntiUninstallPolicyRequest::getUserGroupIds() const {
  return userGroupIds_;
}

void UpdateBootAndAntiUninstallPolicyRequest::setUserGroupIds(const std::vector<UpdateBootAndAntiUninstallPolicyRequest::std::string> &userGroupIds) {
  userGroupIds_ = userGroupIds;
  for(int dep1 = 0; dep1 != userGroupIds.size(); dep1++) {
    setBodyParameter(std::string("UserGroupIds") + "." + std::to_string(dep1 + 1), userGroupIds[dep1]);
  }
}

std::vector<UpdateBootAndAntiUninstallPolicyRequest::std::string> UpdateBootAndAntiUninstallPolicyRequest::getWhitelistUsers() const {
  return whitelistUsers_;
}

void UpdateBootAndAntiUninstallPolicyRequest::setWhitelistUsers(const std::vector<UpdateBootAndAntiUninstallPolicyRequest::std::string> &whitelistUsers) {
  whitelistUsers_ = whitelistUsers;
  for(int dep1 = 0; dep1 != whitelistUsers.size(); dep1++) {
    setBodyParameter(std::string("WhitelistUsers") + "." + std::to_string(dep1 + 1), whitelistUsers[dep1]);
  }
}

UpdateBootAndAntiUninstallPolicyRequest::BlockContent UpdateBootAndAntiUninstallPolicyRequest::getBlockContent() const {
  return blockContent_;
}

void UpdateBootAndAntiUninstallPolicyRequest::setBlockContent(const UpdateBootAndAntiUninstallPolicyRequest::BlockContent &blockContent) {
  blockContent_ = blockContent;
  setBodyParameter(std::string("BlockContent") + ".BlockTextZh.MinorButtonText", blockContent.blockTextZh.minorButtonText);
  setBodyParameter(std::string("BlockContent") + ".BlockTextZh.MainButtonText", blockContent.blockTextZh.mainButtonText);
  setBodyParameter(std::string("BlockContent") + ".BlockTextZh.Title", blockContent.blockTextZh.title);
  setBodyParameter(std::string("BlockContent") + ".BlockTextZh.Content", blockContent.blockTextZh.content);
  setBodyParameter(std::string("BlockContent") + ".BlockTextEn.MinorButtonText", blockContent.blockTextEn.minorButtonText);
  setBodyParameter(std::string("BlockContent") + ".BlockTextEn.MainButtonText", blockContent.blockTextEn.mainButtonText);
  setBodyParameter(std::string("BlockContent") + ".BlockTextEn.Title", blockContent.blockTextEn.title);
  setBodyParameter(std::string("BlockContent") + ".BlockTextEn.Content", blockContent.blockTextEn.content);
}

bool UpdateBootAndAntiUninstallPolicyRequest::getIsBoot() const {
  return isBoot_;
}

void UpdateBootAndAntiUninstallPolicyRequest::setIsBoot(bool isBoot) {
  isBoot_ = isBoot;
  setBodyParameter(std::string("IsBoot"), isBoot ? "true" : "false");
}

