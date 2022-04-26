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

#include <alibabacloud/ccc/model/AddPhoneNumberToSkillGroupsRequest.h>

using AlibabaCloud::CCC::Model::AddPhoneNumberToSkillGroupsRequest;

AddPhoneNumberToSkillGroupsRequest::AddPhoneNumberToSkillGroupsRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "AddPhoneNumberToSkillGroups") {
  setMethod(HttpRequest::Method::Post);
}

AddPhoneNumberToSkillGroupsRequest::~AddPhoneNumberToSkillGroupsRequest() {}

std::string AddPhoneNumberToSkillGroupsRequest::getNumber() const {
  return number_;
}

void AddPhoneNumberToSkillGroupsRequest::setNumber(const std::string &number) {
  number_ = number;
  setParameter(std::string("Number"), number);
}

std::string AddPhoneNumberToSkillGroupsRequest::getInstanceId() const {
  return instanceId_;
}

void AddPhoneNumberToSkillGroupsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string AddPhoneNumberToSkillGroupsRequest::getSkillGroupIdList() const {
  return skillGroupIdList_;
}

void AddPhoneNumberToSkillGroupsRequest::setSkillGroupIdList(const std::string &skillGroupIdList) {
  skillGroupIdList_ = skillGroupIdList;
  setParameter(std::string("SkillGroupIdList"), skillGroupIdList);
}

