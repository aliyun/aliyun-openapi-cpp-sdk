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

#include <alibabacloud/antiddos-public/model/ModifyDefenseThresholdRequest.h>

using AlibabaCloud::Antiddos_public::Model::ModifyDefenseThresholdRequest;

ModifyDefenseThresholdRequest::ModifyDefenseThresholdRequest()
    : RpcServiceRequest("antiddos-public", "2017-05-18", "ModifyDefenseThreshold") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDefenseThresholdRequest::~ModifyDefenseThresholdRequest() {}

std::string ModifyDefenseThresholdRequest::getInternetIp() const {
  return internetIp_;
}

void ModifyDefenseThresholdRequest::setInternetIp(const std::string &internetIp) {
  internetIp_ = internetIp;
  setParameter(std::string("InternetIp"), internetIp);
}

std::string ModifyDefenseThresholdRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyDefenseThresholdRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyDefenseThresholdRequest::getDdosRegionId() const {
  return ddosRegionId_;
}

void ModifyDefenseThresholdRequest::setDdosRegionId(const std::string &ddosRegionId) {
  ddosRegionId_ = ddosRegionId;
  setParameter(std::string("DdosRegionId"), ddosRegionId);
}

std::string ModifyDefenseThresholdRequest::getInstanceType() const {
  return instanceType_;
}

void ModifyDefenseThresholdRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string ModifyDefenseThresholdRequest::getLang() const {
  return lang_;
}

void ModifyDefenseThresholdRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int ModifyDefenseThresholdRequest::getBps() const {
  return bps_;
}

void ModifyDefenseThresholdRequest::setBps(int bps) {
  bps_ = bps;
  setParameter(std::string("Bps"), std::to_string(bps));
}

int ModifyDefenseThresholdRequest::getPps() const {
  return pps_;
}

void ModifyDefenseThresholdRequest::setPps(int pps) {
  pps_ = pps;
  setParameter(std::string("Pps"), std::to_string(pps));
}

std::string ModifyDefenseThresholdRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyDefenseThresholdRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

bool ModifyDefenseThresholdRequest::getIsAuto() const {
  return isAuto_;
}

void ModifyDefenseThresholdRequest::setIsAuto(bool isAuto) {
  isAuto_ = isAuto;
  setParameter(std::string("IsAuto"), isAuto ? "true" : "false");
}

