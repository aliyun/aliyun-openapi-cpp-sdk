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

#include <alibabacloud/ccc/model/DiscardEditingContactFlowRequest.h>

using AlibabaCloud::CCC::Model::DiscardEditingContactFlowRequest;

DiscardEditingContactFlowRequest::DiscardEditingContactFlowRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "DiscardEditingContactFlow") {
  setMethod(HttpRequest::Method::Post);
}

DiscardEditingContactFlowRequest::~DiscardEditingContactFlowRequest() {}

std::string DiscardEditingContactFlowRequest::getContactFlowId() const {
  return contactFlowId_;
}

void DiscardEditingContactFlowRequest::setContactFlowId(const std::string &contactFlowId) {
  contactFlowId_ = contactFlowId;
  setParameter(std::string("ContactFlowId"), contactFlowId);
}

std::string DiscardEditingContactFlowRequest::getDraftId() const {
  return draftId_;
}

void DiscardEditingContactFlowRequest::setDraftId(const std::string &draftId) {
  draftId_ = draftId;
  setParameter(std::string("DraftId"), draftId);
}

std::string DiscardEditingContactFlowRequest::getInstanceId() const {
  return instanceId_;
}

void DiscardEditingContactFlowRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

