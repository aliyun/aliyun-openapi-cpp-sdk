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

#include <alibabacloud/config/model/CreateAggregateRemediationRequest.h>

using AlibabaCloud::Config::Model::CreateAggregateRemediationRequest;

CreateAggregateRemediationRequest::CreateAggregateRemediationRequest()
    : RpcServiceRequest("config", "2020-09-07", "CreateAggregateRemediation") {
  setMethod(HttpRequest::Method::Post);
}

CreateAggregateRemediationRequest::~CreateAggregateRemediationRequest() {}

std::string CreateAggregateRemediationRequest::getConfigRuleId() const {
  return configRuleId_;
}

void CreateAggregateRemediationRequest::setConfigRuleId(const std::string &configRuleId) {
  configRuleId_ = configRuleId;
  setBodyParameter(std::string("ConfigRuleId"), configRuleId);
}

std::string CreateAggregateRemediationRequest::getRemediationType() const {
  return remediationType_;
}

void CreateAggregateRemediationRequest::setRemediationType(const std::string &remediationType) {
  remediationType_ = remediationType;
  setBodyParameter(std::string("RemediationType"), remediationType);
}

std::string CreateAggregateRemediationRequest::getClientToken() const {
  return clientToken_;
}

void CreateAggregateRemediationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string CreateAggregateRemediationRequest::getAggregatorId() const {
  return aggregatorId_;
}

void CreateAggregateRemediationRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setBodyParameter(std::string("AggregatorId"), aggregatorId);
}

std::string CreateAggregateRemediationRequest::getSourceType() const {
  return sourceType_;
}

void CreateAggregateRemediationRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setBodyParameter(std::string("SourceType"), sourceType);
}

std::string CreateAggregateRemediationRequest::getRemediationTemplateId() const {
  return remediationTemplateId_;
}

void CreateAggregateRemediationRequest::setRemediationTemplateId(const std::string &remediationTemplateId) {
  remediationTemplateId_ = remediationTemplateId;
  setBodyParameter(std::string("RemediationTemplateId"), remediationTemplateId);
}

std::string CreateAggregateRemediationRequest::getParams() const {
  return params_;
}

void CreateAggregateRemediationRequest::setParams(const std::string &params) {
  params_ = params;
  setBodyParameter(std::string("Params"), params);
}

std::string CreateAggregateRemediationRequest::getInvokeType() const {
  return invokeType_;
}

void CreateAggregateRemediationRequest::setInvokeType(const std::string &invokeType) {
  invokeType_ = invokeType;
  setBodyParameter(std::string("InvokeType"), invokeType);
}

