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

#include <alibabacloud/config/model/UpdateRemediationRequest.h>

using AlibabaCloud::Config::Model::UpdateRemediationRequest;

UpdateRemediationRequest::UpdateRemediationRequest()
    : RpcServiceRequest("config", "2020-09-07", "UpdateRemediation") {
  setMethod(HttpRequest::Method::Post);
}

UpdateRemediationRequest::~UpdateRemediationRequest() {}

std::string UpdateRemediationRequest::getConfigRuleId() const {
  return configRuleId_;
}

void UpdateRemediationRequest::setConfigRuleId(const std::string &configRuleId) {
  configRuleId_ = configRuleId;
  setBodyParameter(std::string("ConfigRuleId"), configRuleId);
}

std::string UpdateRemediationRequest::getRemediationType() const {
  return remediationType_;
}

void UpdateRemediationRequest::setRemediationType(const std::string &remediationType) {
  remediationType_ = remediationType;
  setBodyParameter(std::string("RemediationType"), remediationType);
}

std::string UpdateRemediationRequest::getClientToken() const {
  return clientToken_;
}

void UpdateRemediationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateRemediationRequest::getRemediationId() const {
  return remediationId_;
}

void UpdateRemediationRequest::setRemediationId(const std::string &remediationId) {
  remediationId_ = remediationId;
  setBodyParameter(std::string("RemediationId"), remediationId);
}

std::string UpdateRemediationRequest::getSourceType() const {
  return sourceType_;
}

void UpdateRemediationRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setBodyParameter(std::string("SourceType"), sourceType);
}

std::string UpdateRemediationRequest::getRemediationTemplateId() const {
  return remediationTemplateId_;
}

void UpdateRemediationRequest::setRemediationTemplateId(const std::string &remediationTemplateId) {
  remediationTemplateId_ = remediationTemplateId;
  setBodyParameter(std::string("RemediationTemplateId"), remediationTemplateId);
}

std::string UpdateRemediationRequest::getParams() const {
  return params_;
}

void UpdateRemediationRequest::setParams(const std::string &params) {
  params_ = params;
  setBodyParameter(std::string("Params"), params);
}

std::string UpdateRemediationRequest::getInvokeType() const {
  return invokeType_;
}

void UpdateRemediationRequest::setInvokeType(const std::string &invokeType) {
  invokeType_ = invokeType;
  setBodyParameter(std::string("InvokeType"), invokeType);
}

