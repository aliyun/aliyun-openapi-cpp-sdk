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

#include <alibabacloud/ltl/model/ModifyMemberRequest.h>

using AlibabaCloud::Ltl::Model::ModifyMemberRequest;

ModifyMemberRequest::ModifyMemberRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "ModifyMember") {
  setMethod(HttpRequest::Method::Post);
}

ModifyMemberRequest::~ModifyMemberRequest() {}

std::string ModifyMemberRequest::getApiVersion() const {
  return apiVersion_;
}

void ModifyMemberRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string ModifyMemberRequest::getRemark() const {
  return remark_;
}

void ModifyMemberRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string ModifyMemberRequest::getBizChainId() const {
  return bizChainId_;
}

void ModifyMemberRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

std::string ModifyMemberRequest::getMemberUid() const {
  return memberUid_;
}

void ModifyMemberRequest::setMemberUid(const std::string &memberUid) {
  memberUid_ = memberUid;
  setParameter(std::string("MemberUid"), memberUid);
}

std::string ModifyMemberRequest::getMemberContact() const {
  return memberContact_;
}

void ModifyMemberRequest::setMemberContact(const std::string &memberContact) {
  memberContact_ = memberContact;
  setParameter(std::string("MemberContact"), memberContact);
}

std::string ModifyMemberRequest::getMemberPhone() const {
  return memberPhone_;
}

void ModifyMemberRequest::setMemberPhone(const std::string &memberPhone) {
  memberPhone_ = memberPhone;
  setParameter(std::string("MemberPhone"), memberPhone);
}

std::string ModifyMemberRequest::getMemberName() const {
  return memberName_;
}

void ModifyMemberRequest::setMemberName(const std::string &memberName) {
  memberName_ = memberName;
  setParameter(std::string("MemberName"), memberName);
}

std::string ModifyMemberRequest::getMemberId() const {
  return memberId_;
}

void ModifyMemberRequest::setMemberId(const std::string &memberId) {
  memberId_ = memberId;
  setParameter(std::string("MemberId"), memberId);
}

