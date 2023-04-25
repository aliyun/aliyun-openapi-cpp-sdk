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

#include <alibabacloud/ccc/model/CommitContactFlowRequest.h>

using AlibabaCloud::CCC::Model::CommitContactFlowRequest;

CommitContactFlowRequest::CommitContactFlowRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "CommitContactFlow") {
  setMethod(HttpRequest::Method::Post);
}

CommitContactFlowRequest::~CommitContactFlowRequest() {}

std::string CommitContactFlowRequest::getContactFlowId() const {
  return contactFlowId_;
}

void CommitContactFlowRequest::setContactFlowId(const std::string &contactFlowId) {
  contactFlowId_ = contactFlowId;
  setParameter(std::string("ContactFlowId"), contactFlowId);
}

std::string CommitContactFlowRequest::getDraftId() const {
  return draftId_;
}

void CommitContactFlowRequest::setDraftId(const std::string &draftId) {
  draftId_ = draftId;
  setParameter(std::string("DraftId"), draftId);
}

std::string CommitContactFlowRequest::getDescription() const {
  return description_;
}

void CommitContactFlowRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CommitContactFlowRequest::getInstanceId() const {
  return instanceId_;
}

void CommitContactFlowRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CommitContactFlowRequest::getDefinition() const {
  return definition_;
}

void CommitContactFlowRequest::setDefinition(const std::string &definition) {
  definition_ = definition;
  setParameter(std::string("Definition"), definition);
}

