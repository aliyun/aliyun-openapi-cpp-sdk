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

#include <alibabacloud/ltl/model/UnLockMemberRequest.h>

using AlibabaCloud::Ltl::Model::UnLockMemberRequest;

UnLockMemberRequest::UnLockMemberRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "UnLockMember") {
  setMethod(HttpRequest::Method::Post);
}

UnLockMemberRequest::~UnLockMemberRequest() {}

std::string UnLockMemberRequest::getApiVersion() const {
  return apiVersion_;
}

void UnLockMemberRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string UnLockMemberRequest::getBizChainId() const {
  return bizChainId_;
}

void UnLockMemberRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

std::string UnLockMemberRequest::getMemberId() const {
  return memberId_;
}

void UnLockMemberRequest::setMemberId(const std::string &memberId) {
  memberId_ = memberId;
  setParameter(std::string("MemberId"), memberId);
}

