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

#include <alibabacloud/ltl/model/ListPSMemberDataTypeCodeRequest.h>

using AlibabaCloud::Ltl::Model::ListPSMemberDataTypeCodeRequest;

ListPSMemberDataTypeCodeRequest::ListPSMemberDataTypeCodeRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "ListPSMemberDataTypeCode") {
  setMethod(HttpRequest::Method::Post);
}

ListPSMemberDataTypeCodeRequest::~ListPSMemberDataTypeCodeRequest() {}

int ListPSMemberDataTypeCodeRequest::getSize() const {
  return size_;
}

void ListPSMemberDataTypeCodeRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

std::string ListPSMemberDataTypeCodeRequest::getMemberUid() const {
  return memberUid_;
}

void ListPSMemberDataTypeCodeRequest::setMemberUid(const std::string &memberUid) {
  memberUid_ = memberUid;
  setParameter(std::string("MemberUid"), memberUid);
}

int ListPSMemberDataTypeCodeRequest::getNum() const {
  return num_;
}

void ListPSMemberDataTypeCodeRequest::setNum(int num) {
  num_ = num;
  setParameter(std::string("Num"), std::to_string(num));
}

std::string ListPSMemberDataTypeCodeRequest::getApiVersion() const {
  return apiVersion_;
}

void ListPSMemberDataTypeCodeRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string ListPSMemberDataTypeCodeRequest::getBizChainId() const {
  return bizChainId_;
}

void ListPSMemberDataTypeCodeRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

