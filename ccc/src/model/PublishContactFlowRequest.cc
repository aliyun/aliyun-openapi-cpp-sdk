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

#include <alibabacloud/ccc/model/PublishContactFlowRequest.h>

using AlibabaCloud::CCC::Model::PublishContactFlowRequest;

PublishContactFlowRequest::PublishContactFlowRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "PublishContactFlow") {
  setMethod(HttpRequest::Method::Post);
}

PublishContactFlowRequest::~PublishContactFlowRequest() {}

std::string PublishContactFlowRequest::getContactFlowId() const {
  return contactFlowId_;
}

void PublishContactFlowRequest::setContactFlowId(const std::string &contactFlowId) {
  contactFlowId_ = contactFlowId;
  setParameter(std::string("ContactFlowId"), contactFlowId);
}

std::string PublishContactFlowRequest::getDraftId() const {
  return draftId_;
}

void PublishContactFlowRequest::setDraftId(const std::string &draftId) {
  draftId_ = draftId;
  setParameter(std::string("DraftId"), draftId);
}

std::string PublishContactFlowRequest::getInstanceId() const {
  return instanceId_;
}

void PublishContactFlowRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

