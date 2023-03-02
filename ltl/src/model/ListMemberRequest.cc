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

#include <alibabacloud/ltl/model/ListMemberRequest.h>

using AlibabaCloud::Ltl::Model::ListMemberRequest;

ListMemberRequest::ListMemberRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "ListMember") {
  setMethod(HttpRequest::Method::Post);
}

ListMemberRequest::~ListMemberRequest() {}

int ListMemberRequest::getSize() const {
  return size_;
}

void ListMemberRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

std::string ListMemberRequest::getMemberUid() const {
  return memberUid_;
}

void ListMemberRequest::setMemberUid(const std::string &memberUid) {
  memberUid_ = memberUid;
  setParameter(std::string("MemberUid"), memberUid);
}

int ListMemberRequest::getNum() const {
  return num_;
}

void ListMemberRequest::setNum(int num) {
  num_ = num;
  setParameter(std::string("Num"), std::to_string(num));
}

std::string ListMemberRequest::getApiVersion() const {
  return apiVersion_;
}

void ListMemberRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string ListMemberRequest::getBizChainId() const {
  return bizChainId_;
}

void ListMemberRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

