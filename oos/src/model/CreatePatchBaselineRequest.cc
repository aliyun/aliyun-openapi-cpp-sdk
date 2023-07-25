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

#include <alibabacloud/oos/model/CreatePatchBaselineRequest.h>

using AlibabaCloud::Oos::Model::CreatePatchBaselineRequest;

CreatePatchBaselineRequest::CreatePatchBaselineRequest()
    : RpcServiceRequest("oos", "2019-06-01", "CreatePatchBaseline") {
  setMethod(HttpRequest::Method::Post);
}

CreatePatchBaselineRequest::~CreatePatchBaselineRequest() {}

std::vector<CreatePatchBaselineRequest::std::string> CreatePatchBaselineRequest::getSources() const {
  return sources_;
}

void CreatePatchBaselineRequest::setSources(const std::vector<CreatePatchBaselineRequest::std::string> &sources) {
  sources_ = sources;
  for(int dep1 = 0; dep1 != sources.size(); dep1++) {
    setParameter(std::string("Sources") + "." + std::to_string(dep1 + 1), sources[dep1]);
  }
}

std::string CreatePatchBaselineRequest::getClientToken() const {
  return clientToken_;
}

void CreatePatchBaselineRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreatePatchBaselineRequest::getApprovalRules() const {
  return approvalRules_;
}

void CreatePatchBaselineRequest::setApprovalRules(const std::string &approvalRules) {
  approvalRules_ = approvalRules;
  setParameter(std::string("ApprovalRules"), approvalRules);
}

std::string CreatePatchBaselineRequest::getDescription() const {
  return description_;
}

void CreatePatchBaselineRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreatePatchBaselineRequest::getRegionId() const {
  return regionId_;
}

void CreatePatchBaselineRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreatePatchBaselineRequest::getRejectedPatchesAction() const {
  return rejectedPatchesAction_;
}

void CreatePatchBaselineRequest::setRejectedPatchesAction(const std::string &rejectedPatchesAction) {
  rejectedPatchesAction_ = rejectedPatchesAction;
  setParameter(std::string("RejectedPatchesAction"), rejectedPatchesAction);
}

bool CreatePatchBaselineRequest::getApprovedPatchesEnableNonSecurity() const {
  return approvedPatchesEnableNonSecurity_;
}

void CreatePatchBaselineRequest::setApprovedPatchesEnableNonSecurity(bool approvedPatchesEnableNonSecurity) {
  approvedPatchesEnableNonSecurity_ = approvedPatchesEnableNonSecurity;
  setParameter(std::string("ApprovedPatchesEnableNonSecurity"), approvedPatchesEnableNonSecurity ? "true" : "false");
}

std::vector<CreatePatchBaselineRequest::Tags> CreatePatchBaselineRequest::getTags() const {
  return tags_;
}

void CreatePatchBaselineRequest::setTags(const std::vector<CreatePatchBaselineRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".Value", tags[dep1].value);
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".Key", tags[dep1].key);
  }
}

std::string CreatePatchBaselineRequest::getOperationSystem() const {
  return operationSystem_;
}

void CreatePatchBaselineRequest::setOperationSystem(const std::string &operationSystem) {
  operationSystem_ = operationSystem;
  setParameter(std::string("OperationSystem"), operationSystem);
}

std::vector<CreatePatchBaselineRequest::std::string> CreatePatchBaselineRequest::getRejectedPatches() const {
  return rejectedPatches_;
}

void CreatePatchBaselineRequest::setRejectedPatches(const std::vector<CreatePatchBaselineRequest::std::string> &rejectedPatches) {
  rejectedPatches_ = rejectedPatches;
  for(int dep1 = 0; dep1 != rejectedPatches.size(); dep1++) {
    setParameter(std::string("RejectedPatches") + "." + std::to_string(dep1 + 1), rejectedPatches[dep1]);
  }
}

std::string CreatePatchBaselineRequest::getName() const {
  return name_;
}

void CreatePatchBaselineRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::vector<CreatePatchBaselineRequest::std::string> CreatePatchBaselineRequest::getApprovedPatches() const {
  return approvedPatches_;
}

void CreatePatchBaselineRequest::setApprovedPatches(const std::vector<CreatePatchBaselineRequest::std::string> &approvedPatches) {
  approvedPatches_ = approvedPatches;
  for(int dep1 = 0; dep1 != approvedPatches.size(); dep1++) {
    setParameter(std::string("ApprovedPatches") + "." + std::to_string(dep1 + 1), approvedPatches[dep1]);
  }
}

