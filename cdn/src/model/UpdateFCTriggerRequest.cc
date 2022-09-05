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

#include <alibabacloud/cdn/model/UpdateFCTriggerRequest.h>

using AlibabaCloud::Cdn::Model::UpdateFCTriggerRequest;

UpdateFCTriggerRequest::UpdateFCTriggerRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "UpdateFCTrigger") {
  setMethod(HttpRequest::Method::Post);
}

UpdateFCTriggerRequest::~UpdateFCTriggerRequest() {}

std::string UpdateFCTriggerRequest::getNotes() const {
  return notes_;
}

void UpdateFCTriggerRequest::setNotes(const std::string &notes) {
  notes_ = notes;
  setBodyParameter(std::string("Notes"), notes);
}

std::string UpdateFCTriggerRequest::getTriggerARN() const {
  return triggerARN_;
}

void UpdateFCTriggerRequest::setTriggerARN(const std::string &triggerARN) {
  triggerARN_ = triggerARN;
  setParameter(std::string("TriggerARN"), triggerARN);
}

std::string UpdateFCTriggerRequest::getSourceARN() const {
  return sourceARN_;
}

void UpdateFCTriggerRequest::setSourceARN(const std::string &sourceARN) {
  sourceARN_ = sourceARN;
  setBodyParameter(std::string("SourceARN"), sourceARN);
}

long UpdateFCTriggerRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateFCTriggerRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateFCTriggerRequest::getRoleARN() const {
  return roleARN_;
}

void UpdateFCTriggerRequest::setRoleARN(const std::string &roleARN) {
  roleARN_ = roleARN;
  setBodyParameter(std::string("RoleARN"), roleARN);
}

std::string UpdateFCTriggerRequest::getFunctionARN() const {
  return functionARN_;
}

void UpdateFCTriggerRequest::setFunctionARN(const std::string &functionARN) {
  functionARN_ = functionARN;
  setBodyParameter(std::string("FunctionARN"), functionARN);
}

