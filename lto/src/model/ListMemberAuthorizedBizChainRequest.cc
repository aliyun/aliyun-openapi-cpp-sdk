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

#include <alibabacloud/lto/model/ListMemberAuthorizedBizChainRequest.h>

using AlibabaCloud::Lto::Model::ListMemberAuthorizedBizChainRequest;

ListMemberAuthorizedBizChainRequest::ListMemberAuthorizedBizChainRequest()
    : RpcServiceRequest("lto", "2021-07-07", "ListMemberAuthorizedBizChain") {
  setMethod(HttpRequest::Method::Post);
}

ListMemberAuthorizedBizChainRequest::~ListMemberAuthorizedBizChainRequest() {}

std::string ListMemberAuthorizedBizChainRequest::getRegionId() const {
  return regionId_;
}

void ListMemberAuthorizedBizChainRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListMemberAuthorizedBizChainRequest::getMemberId() const {
  return memberId_;
}

void ListMemberAuthorizedBizChainRequest::setMemberId(const std::string &memberId) {
  memberId_ = memberId;
  setParameter(std::string("MemberId"), memberId);
}

