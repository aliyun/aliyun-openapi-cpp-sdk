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

#include <alibabacloud/cloudauth/model/CreateVerifySettingRequest.h>

using AlibabaCloud::Cloudauth::Model::CreateVerifySettingRequest;

CreateVerifySettingRequest::CreateVerifySettingRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "CreateVerifySetting") {
  setMethod(HttpRequest::Method::Post);
}

CreateVerifySettingRequest::~CreateVerifySettingRequest() {}

bool CreateVerifySettingRequest::getGuideStep() const {
  return guideStep_;
}

void CreateVerifySettingRequest::setGuideStep(bool guideStep) {
  guideStep_ = guideStep;
  setParameter(std::string("GuideStep"), guideStep ? "true" : "false");
}

bool CreateVerifySettingRequest::getResultStep() const {
  return resultStep_;
}

void CreateVerifySettingRequest::setResultStep(bool resultStep) {
  resultStep_ = resultStep;
  setParameter(std::string("ResultStep"), resultStep ? "true" : "false");
}

std::string CreateVerifySettingRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateVerifySettingRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string CreateVerifySettingRequest::getSolution() const {
  return solution_;
}

void CreateVerifySettingRequest::setSolution(const std::string &solution) {
  solution_ = solution;
  setParameter(std::string("Solution"), solution);
}

std::string CreateVerifySettingRequest::getBizName() const {
  return bizName_;
}

void CreateVerifySettingRequest::setBizName(const std::string &bizName) {
  bizName_ = bizName;
  setParameter(std::string("BizName"), bizName);
}

std::string CreateVerifySettingRequest::getBizType() const {
  return bizType_;
}

void CreateVerifySettingRequest::setBizType(const std::string &bizType) {
  bizType_ = bizType;
  setParameter(std::string("BizType"), bizType);
}

bool CreateVerifySettingRequest::getPrivacyStep() const {
  return privacyStep_;
}

void CreateVerifySettingRequest::setPrivacyStep(bool privacyStep) {
  privacyStep_ = privacyStep;
  setParameter(std::string("PrivacyStep"), privacyStep ? "true" : "false");
}

