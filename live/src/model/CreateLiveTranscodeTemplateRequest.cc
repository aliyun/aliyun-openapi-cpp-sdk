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

#include <alibabacloud/live/model/CreateLiveTranscodeTemplateRequest.h>

using AlibabaCloud::Live::Model::CreateLiveTranscodeTemplateRequest;

CreateLiveTranscodeTemplateRequest::CreateLiveTranscodeTemplateRequest()
    : RpcServiceRequest("live", "2016-11-01", "CreateLiveTranscodeTemplate") {
  setMethod(HttpRequest::Method::Post);
}

CreateLiveTranscodeTemplateRequest::~CreateLiveTranscodeTemplateRequest() {}

std::string CreateLiveTranscodeTemplateRequest::getType() const {
  return type_;
}

void CreateLiveTranscodeTemplateRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string CreateLiveTranscodeTemplateRequest::getSecurityToken() const {
  return securityToken_;
}

void CreateLiveTranscodeTemplateRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string CreateLiveTranscodeTemplateRequest::getTemplateConfig() const {
  return templateConfig_;
}

void CreateLiveTranscodeTemplateRequest::setTemplateConfig(const std::string &templateConfig) {
  templateConfig_ = templateConfig;
  setParameter(std::string("TemplateConfig"), templateConfig);
}

long CreateLiveTranscodeTemplateRequest::getOwnerId() const {
  return ownerId_;
}

void CreateLiveTranscodeTemplateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

