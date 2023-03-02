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

#include <alibabacloud/lto/model/UpdatePrivacyRuleRequest.h>

using AlibabaCloud::Lto::Model::UpdatePrivacyRuleRequest;

UpdatePrivacyRuleRequest::UpdatePrivacyRuleRequest()
    : RpcServiceRequest("lto", "2021-07-07", "UpdatePrivacyRule") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePrivacyRuleRequest::~UpdatePrivacyRuleRequest() {}

std::string UpdatePrivacyRuleRequest::getPrivacyRuleId() const {
  return privacyRuleId_;
}

void UpdatePrivacyRuleRequest::setPrivacyRuleId(const std::string &privacyRuleId) {
  privacyRuleId_ = privacyRuleId;
  setParameter(std::string("PrivacyRuleId"), privacyRuleId);
}

std::string UpdatePrivacyRuleRequest::getRemark() const {
  return remark_;
}

void UpdatePrivacyRuleRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string UpdatePrivacyRuleRequest::getRegionId() const {
  return regionId_;
}

void UpdatePrivacyRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdatePrivacyRuleRequest::getName() const {
  return name_;
}

void UpdatePrivacyRuleRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdatePrivacyRuleRequest::getAlgImpl() const {
  return algImpl_;
}

void UpdatePrivacyRuleRequest::setAlgImpl(const std::string &algImpl) {
  algImpl_ = algImpl;
  setParameter(std::string("AlgImpl"), algImpl);
}

std::string UpdatePrivacyRuleRequest::getAlgType() const {
  return algType_;
}

void UpdatePrivacyRuleRequest::setAlgType(const std::string &algType) {
  algType_ = algType;
  setParameter(std::string("AlgType"), algType);
}

