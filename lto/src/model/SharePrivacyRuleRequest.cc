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

#include <alibabacloud/lto/model/SharePrivacyRuleRequest.h>

using AlibabaCloud::Lto::Model::SharePrivacyRuleRequest;

SharePrivacyRuleRequest::SharePrivacyRuleRequest()
    : RpcServiceRequest("lto", "2021-07-07", "SharePrivacyRule") {
  setMethod(HttpRequest::Method::Post);
}

SharePrivacyRuleRequest::~SharePrivacyRuleRequest() {}

std::string SharePrivacyRuleRequest::getMemberIdList() const {
  return memberIdList_;
}

void SharePrivacyRuleRequest::setMemberIdList(const std::string &memberIdList) {
  memberIdList_ = memberIdList;
  setParameter(std::string("MemberIdList"), memberIdList);
}

std::string SharePrivacyRuleRequest::getPrivacyRuleId() const {
  return privacyRuleId_;
}

void SharePrivacyRuleRequest::setPrivacyRuleId(const std::string &privacyRuleId) {
  privacyRuleId_ = privacyRuleId;
  setParameter(std::string("PrivacyRuleId"), privacyRuleId);
}

std::string SharePrivacyRuleRequest::getRegionId() const {
  return regionId_;
}

void SharePrivacyRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

