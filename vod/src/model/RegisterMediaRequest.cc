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

#include <alibabacloud/vod/model/RegisterMediaRequest.h>

using AlibabaCloud::Vod::Model::RegisterMediaRequest;

RegisterMediaRequest::RegisterMediaRequest()
    : RpcServiceRequest("vod", "2017-03-21", "RegisterMedia") {
  setMethod(HttpRequest::Method::Post);
}

RegisterMediaRequest::~RegisterMediaRequest() {}

std::string RegisterMediaRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RegisterMediaRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RegisterMediaRequest::getUserData() const {
  return userData_;
}

void RegisterMediaRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string RegisterMediaRequest::getTemplateGroupId() const {
  return templateGroupId_;
}

void RegisterMediaRequest::setTemplateGroupId(const std::string &templateGroupId) {
  templateGroupId_ = templateGroupId;
  setParameter(std::string("TemplateGroupId"), templateGroupId);
}

std::string RegisterMediaRequest::getRegisterMetadatas() const {
  return registerMetadatas_;
}

void RegisterMediaRequest::setRegisterMetadatas(const std::string &registerMetadatas) {
  registerMetadatas_ = registerMetadatas;
  setParameter(std::string("RegisterMetadatas"), registerMetadatas);
}

std::string RegisterMediaRequest::getWorkflowId() const {
  return workflowId_;
}

void RegisterMediaRequest::setWorkflowId(const std::string &workflowId) {
  workflowId_ = workflowId;
  setParameter(std::string("WorkflowId"), workflowId);
}

