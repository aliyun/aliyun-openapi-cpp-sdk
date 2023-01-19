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

#include <alibabacloud/sas/model/OperateCommonTargetConfigRequest.h>

using AlibabaCloud::Sas::Model::OperateCommonTargetConfigRequest;

OperateCommonTargetConfigRequest::OperateCommonTargetConfigRequest()
    : RpcServiceRequest("sas", "2018-12-03", "OperateCommonTargetConfig") {
  setMethod(HttpRequest::Method::Post);
}

OperateCommonTargetConfigRequest::~OperateCommonTargetConfigRequest() {}

std::string OperateCommonTargetConfigRequest::getTargetType() const {
  return targetType_;
}

void OperateCommonTargetConfigRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string OperateCommonTargetConfigRequest::getType() const {
  return type_;
}

void OperateCommonTargetConfigRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string OperateCommonTargetConfigRequest::getTargetOperations() const {
  return targetOperations_;
}

void OperateCommonTargetConfigRequest::setTargetOperations(const std::string &targetOperations) {
  targetOperations_ = targetOperations;
  setParameter(std::string("TargetOperations"), targetOperations);
}

std::string OperateCommonTargetConfigRequest::getSourceIp() const {
  return sourceIp_;
}

void OperateCommonTargetConfigRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string OperateCommonTargetConfigRequest::getFieldValue() const {
  return fieldValue_;
}

void OperateCommonTargetConfigRequest::setFieldValue(const std::string &fieldValue) {
  fieldValue_ = fieldValue;
  setParameter(std::string("FieldValue"), fieldValue);
}

std::string OperateCommonTargetConfigRequest::getFieldName() const {
  return fieldName_;
}

void OperateCommonTargetConfigRequest::setFieldName(const std::string &fieldName) {
  fieldName_ = fieldName;
  setParameter(std::string("FieldName"), fieldName);
}

