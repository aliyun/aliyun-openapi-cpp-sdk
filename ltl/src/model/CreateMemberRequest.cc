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

#include <alibabacloud/ltl/model/CreateMemberRequest.h>

using AlibabaCloud::Ltl::Model::CreateMemberRequest;

CreateMemberRequest::CreateMemberRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "CreateMember") {
  setMethod(HttpRequest::Method::Post);
}

CreateMemberRequest::~CreateMemberRequest() {}

std::string CreateMemberRequest::getApiVersion() const {
  return apiVersion_;
}

void CreateMemberRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string CreateMemberRequest::getRemark() const {
  return remark_;
}

void CreateMemberRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string CreateMemberRequest::getBizChainId() const {
  return bizChainId_;
}

void CreateMemberRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

std::string CreateMemberRequest::getMemberUid() const {
  return memberUid_;
}

void CreateMemberRequest::setMemberUid(const std::string &memberUid) {
  memberUid_ = memberUid;
  setParameter(std::string("MemberUid"), memberUid);
}

std::string CreateMemberRequest::getMemberContact() const {
  return memberContact_;
}

void CreateMemberRequest::setMemberContact(const std::string &memberContact) {
  memberContact_ = memberContact;
  setParameter(std::string("MemberContact"), memberContact);
}

std::string CreateMemberRequest::getMemberPhone() const {
  return memberPhone_;
}

void CreateMemberRequest::setMemberPhone(const std::string &memberPhone) {
  memberPhone_ = memberPhone;
  setParameter(std::string("MemberPhone"), memberPhone);
}

std::string CreateMemberRequest::getMemberName() const {
  return memberName_;
}

void CreateMemberRequest::setMemberName(const std::string &memberName) {
  memberName_ = memberName;
  setParameter(std::string("MemberName"), memberName);
}

