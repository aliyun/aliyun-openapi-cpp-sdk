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

#include <alibabacloud/mse/model/ModifyLosslessRuleRequest.h>

using AlibabaCloud::Mse::Model::ModifyLosslessRuleRequest;

ModifyLosslessRuleRequest::ModifyLosslessRuleRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ModifyLosslessRule") {
  setMethod(HttpRequest::Method::Post);
}

ModifyLosslessRuleRequest::~ModifyLosslessRuleRequest() {}

std::string ModifyLosslessRuleRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ModifyLosslessRuleRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ModifyLosslessRuleRequest::getAppName() const {
  return appName_;
}

void ModifyLosslessRuleRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

bool ModifyLosslessRuleRequest::getEnable() const {
  return enable_;
}

void ModifyLosslessRuleRequest::setEnable(bool enable) {
  enable_ = enable;
  setParameter(std::string("Enable"), enable ? "true" : "false");
}

bool ModifyLosslessRuleRequest::getAligned() const {
  return aligned_;
}

void ModifyLosslessRuleRequest::setAligned(bool aligned) {
  aligned_ = aligned;
  setParameter(std::string("Aligned"), aligned ? "true" : "false");
}

int ModifyLosslessRuleRequest::getFuncType() const {
  return funcType_;
}

void ModifyLosslessRuleRequest::setFuncType(int funcType) {
  funcType_ = funcType;
  setParameter(std::string("FuncType"), std::to_string(funcType));
}

int ModifyLosslessRuleRequest::getDelayTime() const {
  return delayTime_;
}

void ModifyLosslessRuleRequest::setDelayTime(int delayTime) {
  delayTime_ = delayTime;
  setParameter(std::string("DelayTime"), std::to_string(delayTime));
}

int ModifyLosslessRuleRequest::getWarmupTime() const {
  return warmupTime_;
}

void ModifyLosslessRuleRequest::setWarmupTime(int warmupTime) {
  warmupTime_ = warmupTime;
  setParameter(std::string("WarmupTime"), std::to_string(warmupTime));
}

bool ModifyLosslessRuleRequest::getRelated() const {
  return related_;
}

void ModifyLosslessRuleRequest::setRelated(bool related) {
  related_ = related;
  setParameter(std::string("Related"), related ? "true" : "false");
}

std::string ModifyLosslessRuleRequest::getRegionId() const {
  return regionId_;
}

void ModifyLosslessRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ModifyLosslessRuleRequest::getNotice() const {
  return notice_;
}

void ModifyLosslessRuleRequest::setNotice(bool notice) {
  notice_ = notice;
  setParameter(std::string("Notice"), notice ? "true" : "false");
}

bool ModifyLosslessRuleRequest::getLossLessDetail() const {
  return lossLessDetail_;
}

void ModifyLosslessRuleRequest::setLossLessDetail(bool lossLessDetail) {
  lossLessDetail_ = lossLessDetail;
  setParameter(std::string("LossLessDetail"), lossLessDetail ? "true" : "false");
}

std::string ModifyLosslessRuleRequest::getAppId() const {
  return appId_;
}

void ModifyLosslessRuleRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string ModifyLosslessRuleRequest::get_Namespace() const {
  return _namespace_;
}

void ModifyLosslessRuleRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string ModifyLosslessRuleRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ModifyLosslessRuleRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

