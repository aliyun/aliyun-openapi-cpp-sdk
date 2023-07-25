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

#include <alibabacloud/oos/model/UpdatePatchBaselineRequest.h>

using AlibabaCloud::Oos::Model::UpdatePatchBaselineRequest;

UpdatePatchBaselineRequest::UpdatePatchBaselineRequest()
    : RpcServiceRequest("oos", "2019-06-01", "UpdatePatchBaseline") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePatchBaselineRequest::~UpdatePatchBaselineRequest() {}

std::vector<UpdatePatchBaselineRequest::std::string> UpdatePatchBaselineRequest::getSources() const {
  return sources_;
}

void UpdatePatchBaselineRequest::setSources(const std::vector<UpdatePatchBaselineRequest::std::string> &sources) {
  sources_ = sources;
  for(int dep1 = 0; dep1 != sources.size(); dep1++) {
    setParameter(std::string("Sources") + "." + std::to_string(dep1 + 1), sources[dep1]);
  }
}

std::string UpdatePatchBaselineRequest::getClientToken() const {
  return clientToken_;
}

void UpdatePatchBaselineRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdatePatchBaselineRequest::getApprovalRules() const {
  return approvalRules_;
}

void UpdatePatchBaselineRequest::setApprovalRules(const std::string &approvalRules) {
  approvalRules_ = approvalRules;
  setParameter(std::string("ApprovalRules"), approvalRules);
}

std::string UpdatePatchBaselineRequest::getDescription() const {
  return description_;
}

void UpdatePatchBaselineRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdatePatchBaselineRequest::getRegionId() const {
  return regionId_;
}

void UpdatePatchBaselineRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdatePatchBaselineRequest::getRejectedPatchesAction() const {
  return rejectedPatchesAction_;
}

void UpdatePatchBaselineRequest::setRejectedPatchesAction(const std::string &rejectedPatchesAction) {
  rejectedPatchesAction_ = rejectedPatchesAction;
  setParameter(std::string("RejectedPatchesAction"), rejectedPatchesAction);
}

bool UpdatePatchBaselineRequest::getApprovedPatchesEnableNonSecurity() const {
  return approvedPatchesEnableNonSecurity_;
}

void UpdatePatchBaselineRequest::setApprovedPatchesEnableNonSecurity(bool approvedPatchesEnableNonSecurity) {
  approvedPatchesEnableNonSecurity_ = approvedPatchesEnableNonSecurity;
  setParameter(std::string("ApprovedPatchesEnableNonSecurity"), approvedPatchesEnableNonSecurity ? "true" : "false");
}

std::vector<UpdatePatchBaselineRequest::Tags> UpdatePatchBaselineRequest::getTags() const {
  return tags_;
}

void UpdatePatchBaselineRequest::setTags(const std::vector<UpdatePatchBaselineRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".Value", tags[dep1].value);
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".Key", tags[dep1].key);
  }
}

std::vector<UpdatePatchBaselineRequest::std::string> UpdatePatchBaselineRequest::getRejectedPatches() const {
  return rejectedPatches_;
}

void UpdatePatchBaselineRequest::setRejectedPatches(const std::vector<UpdatePatchBaselineRequest::std::string> &rejectedPatches) {
  rejectedPatches_ = rejectedPatches;
  for(int dep1 = 0; dep1 != rejectedPatches.size(); dep1++) {
    setParameter(std::string("RejectedPatches") + "." + std::to_string(dep1 + 1), rejectedPatches[dep1]);
  }
}

std::string UpdatePatchBaselineRequest::getName() const {
  return name_;
}

void UpdatePatchBaselineRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::vector<UpdatePatchBaselineRequest::std::string> UpdatePatchBaselineRequest::getApprovedPatches() const {
  return approvedPatches_;
}

void UpdatePatchBaselineRequest::setApprovedPatches(const std::vector<UpdatePatchBaselineRequest::std::string> &approvedPatches) {
  approvedPatches_ = approvedPatches;
  for(int dep1 = 0; dep1 != approvedPatches.size(); dep1++) {
    setParameter(std::string("ApprovedPatches") + "." + std::to_string(dep1 + 1), approvedPatches[dep1]);
  }
}

