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

#include <alibabacloud/config/model/CreateRemediationRequest.h>

using AlibabaCloud::Config::Model::CreateRemediationRequest;

CreateRemediationRequest::CreateRemediationRequest()
    : RpcServiceRequest("config", "2020-09-07", "CreateRemediation") {
  setMethod(HttpRequest::Method::Post);
}

CreateRemediationRequest::~CreateRemediationRequest() {}

std::string CreateRemediationRequest::getConfigRuleId() const {
  return configRuleId_;
}

void CreateRemediationRequest::setConfigRuleId(const std::string &configRuleId) {
  configRuleId_ = configRuleId;
  setBodyParameter(std::string("ConfigRuleId"), configRuleId);
}

std::string CreateRemediationRequest::getRemediationType() const {
  return remediationType_;
}

void CreateRemediationRequest::setRemediationType(const std::string &remediationType) {
  remediationType_ = remediationType;
  setBodyParameter(std::string("RemediationType"), remediationType);
}

std::string CreateRemediationRequest::getClientToken() const {
  return clientToken_;
}

void CreateRemediationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string CreateRemediationRequest::getSourceType() const {
  return sourceType_;
}

void CreateRemediationRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setBodyParameter(std::string("SourceType"), sourceType);
}

std::string CreateRemediationRequest::getRemediationTemplateId() const {
  return remediationTemplateId_;
}

void CreateRemediationRequest::setRemediationTemplateId(const std::string &remediationTemplateId) {
  remediationTemplateId_ = remediationTemplateId;
  setBodyParameter(std::string("RemediationTemplateId"), remediationTemplateId);
}

std::string CreateRemediationRequest::getParams() const {
  return params_;
}

void CreateRemediationRequest::setParams(const std::string &params) {
  params_ = params;
  setBodyParameter(std::string("Params"), params);
}

std::string CreateRemediationRequest::getInvokeType() const {
  return invokeType_;
}

void CreateRemediationRequest::setInvokeType(const std::string &invokeType) {
  invokeType_ = invokeType;
  setBodyParameter(std::string("InvokeType"), invokeType);
}

