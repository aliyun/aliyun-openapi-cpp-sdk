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

#include <alibabacloud/airegistry/model/UploadSkillViaOssRequest.h>

using AlibabaCloud::AIRegistry::Model::UploadSkillViaOssRequest;

UploadSkillViaOssRequest::UploadSkillViaOssRequest()
    : RpcServiceRequest("airegistry", "2026-03-17", "UploadSkillViaOss") {
  setMethod(HttpRequest::Method::Post);
}

UploadSkillViaOssRequest::~UploadSkillViaOssRequest() {}

std::string UploadSkillViaOssRequest::getNamespaceId() const {
  return namespaceId_;
}

void UploadSkillViaOssRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

bool UploadSkillViaOssRequest::getOverwrite() const {
  return overwrite_;
}

void UploadSkillViaOssRequest::setOverwrite(bool overwrite) {
  overwrite_ = overwrite;
  setParameter(std::string("Overwrite"), overwrite ? "true" : "false");
}

std::string UploadSkillViaOssRequest::getTargetVersion() const {
  return targetVersion_;
}

void UploadSkillViaOssRequest::setTargetVersion(const std::string &targetVersion) {
  targetVersion_ = targetVersion;
  setParameter(std::string("TargetVersion"), targetVersion);
}

std::string UploadSkillViaOssRequest::getOssObjectName() const {
  return ossObjectName_;
}

void UploadSkillViaOssRequest::setOssObjectName(const std::string &ossObjectName) {
  ossObjectName_ = ossObjectName;
  setParameter(std::string("OssObjectName"), ossObjectName);
}

std::string UploadSkillViaOssRequest::getCommitMsg() const {
  return commitMsg_;
}

void UploadSkillViaOssRequest::setCommitMsg(const std::string &commitMsg) {
  commitMsg_ = commitMsg;
  setParameter(std::string("CommitMsg"), commitMsg);
}

