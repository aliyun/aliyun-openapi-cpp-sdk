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

#include <alibabacloud/sas/model/OperateSuspiciousTargetConfigRequest.h>

using AlibabaCloud::Sas::Model::OperateSuspiciousTargetConfigRequest;

OperateSuspiciousTargetConfigRequest::OperateSuspiciousTargetConfigRequest()
    : RpcServiceRequest("sas", "2018-12-03", "OperateSuspiciousTargetConfig") {
  setMethod(HttpRequest::Method::Post);
}

OperateSuspiciousTargetConfigRequest::~OperateSuspiciousTargetConfigRequest() {}

std::string OperateSuspiciousTargetConfigRequest::getTargetType() const {
  return targetType_;
}

void OperateSuspiciousTargetConfigRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string OperateSuspiciousTargetConfigRequest::getType() const {
  return type_;
}

void OperateSuspiciousTargetConfigRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string OperateSuspiciousTargetConfigRequest::getTargetOperations() const {
  return targetOperations_;
}

void OperateSuspiciousTargetConfigRequest::setTargetOperations(const std::string &targetOperations) {
  targetOperations_ = targetOperations;
  setParameter(std::string("TargetOperations"), targetOperations);
}

std::string OperateSuspiciousTargetConfigRequest::getSourceIp() const {
  return sourceIp_;
}

void OperateSuspiciousTargetConfigRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string OperateSuspiciousTargetConfigRequest::getLang() const {
  return lang_;
}

void OperateSuspiciousTargetConfigRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string OperateSuspiciousTargetConfigRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void OperateSuspiciousTargetConfigRequest::setResourceDirectoryAccountId(const std::string &resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), resourceDirectoryAccountId);
}

