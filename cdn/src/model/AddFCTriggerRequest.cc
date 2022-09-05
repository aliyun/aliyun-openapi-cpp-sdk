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

#include <alibabacloud/cdn/model/AddFCTriggerRequest.h>

using AlibabaCloud::Cdn::Model::AddFCTriggerRequest;

AddFCTriggerRequest::AddFCTriggerRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "AddFCTrigger") {
  setMethod(HttpRequest::Method::Post);
}

AddFCTriggerRequest::~AddFCTriggerRequest() {}

std::string AddFCTriggerRequest::getNotes() const {
  return notes_;
}

void AddFCTriggerRequest::setNotes(const std::string &notes) {
  notes_ = notes;
  setBodyParameter(std::string("Notes"), notes);
}

std::string AddFCTriggerRequest::getEventMetaVersion() const {
  return eventMetaVersion_;
}

void AddFCTriggerRequest::setEventMetaVersion(const std::string &eventMetaVersion) {
  eventMetaVersion_ = eventMetaVersion;
  setBodyParameter(std::string("EventMetaVersion"), eventMetaVersion);
}

std::string AddFCTriggerRequest::getTriggerARN() const {
  return triggerARN_;
}

void AddFCTriggerRequest::setTriggerARN(const std::string &triggerARN) {
  triggerARN_ = triggerARN;
  setParameter(std::string("TriggerARN"), triggerARN);
}

std::string AddFCTriggerRequest::getSourceARN() const {
  return sourceARN_;
}

void AddFCTriggerRequest::setSourceARN(const std::string &sourceARN) {
  sourceARN_ = sourceARN;
  setBodyParameter(std::string("SourceARN"), sourceARN);
}

long AddFCTriggerRequest::getOwnerId() const {
  return ownerId_;
}

void AddFCTriggerRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddFCTriggerRequest::getRoleARN() const {
  return roleARN_;
}

void AddFCTriggerRequest::setRoleARN(const std::string &roleARN) {
  roleARN_ = roleARN;
  setBodyParameter(std::string("RoleARN"), roleARN);
}

std::string AddFCTriggerRequest::getEventMetaName() const {
  return eventMetaName_;
}

void AddFCTriggerRequest::setEventMetaName(const std::string &eventMetaName) {
  eventMetaName_ = eventMetaName;
  setBodyParameter(std::string("EventMetaName"), eventMetaName);
}

std::string AddFCTriggerRequest::getFunctionARN() const {
  return functionARN_;
}

void AddFCTriggerRequest::setFunctionARN(const std::string &functionARN) {
  functionARN_ = functionARN;
  setBodyParameter(std::string("FunctionARN"), functionARN);
}

