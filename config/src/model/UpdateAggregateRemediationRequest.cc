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

#include <alibabacloud/config/model/UpdateAggregateRemediationRequest.h>

using AlibabaCloud::Config::Model::UpdateAggregateRemediationRequest;

UpdateAggregateRemediationRequest::UpdateAggregateRemediationRequest()
    : RpcServiceRequest("config", "2020-09-07", "UpdateAggregateRemediation") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAggregateRemediationRequest::~UpdateAggregateRemediationRequest() {}

std::string UpdateAggregateRemediationRequest::getRemediationType() const {
  return remediationType_;
}

void UpdateAggregateRemediationRequest::setRemediationType(const std::string &remediationType) {
  remediationType_ = remediationType;
  setBodyParameter(std::string("RemediationType"), remediationType);
}

std::string UpdateAggregateRemediationRequest::getRemediationId() const {
  return remediationId_;
}

void UpdateAggregateRemediationRequest::setRemediationId(const std::string &remediationId) {
  remediationId_ = remediationId;
  setBodyParameter(std::string("RemediationId"), remediationId);
}

std::string UpdateAggregateRemediationRequest::getAggregatorId() const {
  return aggregatorId_;
}

void UpdateAggregateRemediationRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setBodyParameter(std::string("AggregatorId"), aggregatorId);
}

std::string UpdateAggregateRemediationRequest::getSourceType() const {
  return sourceType_;
}

void UpdateAggregateRemediationRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setBodyParameter(std::string("SourceType"), sourceType);
}

std::string UpdateAggregateRemediationRequest::getRemediationTemplateId() const {
  return remediationTemplateId_;
}

void UpdateAggregateRemediationRequest::setRemediationTemplateId(const std::string &remediationTemplateId) {
  remediationTemplateId_ = remediationTemplateId;
  setBodyParameter(std::string("RemediationTemplateId"), remediationTemplateId);
}

std::string UpdateAggregateRemediationRequest::getParams() const {
  return params_;
}

void UpdateAggregateRemediationRequest::setParams(const std::string &params) {
  params_ = params;
  setBodyParameter(std::string("Params"), params);
}

std::string UpdateAggregateRemediationRequest::getInvokeType() const {
  return invokeType_;
}

void UpdateAggregateRemediationRequest::setInvokeType(const std::string &invokeType) {
  invokeType_ = invokeType;
  setBodyParameter(std::string("InvokeType"), invokeType);
}

