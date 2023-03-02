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

#include <alibabacloud/lto/model/DescribeMemberTotalStatInfoRequest.h>

using AlibabaCloud::Lto::Model::DescribeMemberTotalStatInfoRequest;

DescribeMemberTotalStatInfoRequest::DescribeMemberTotalStatInfoRequest()
    : RpcServiceRequest("lto", "2021-07-07", "DescribeMemberTotalStatInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMemberTotalStatInfoRequest::~DescribeMemberTotalStatInfoRequest() {}

std::string DescribeMemberTotalStatInfoRequest::getAccountId() const {
  return accountId_;
}

void DescribeMemberTotalStatInfoRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setParameter(std::string("AccountId"), accountId);
}

std::string DescribeMemberTotalStatInfoRequest::getRegionId() const {
  return regionId_;
}

void DescribeMemberTotalStatInfoRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

