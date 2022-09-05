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

#include <alibabacloud/cdn/model/DescribeBlockedRegionsRequest.h>

using AlibabaCloud::Cdn::Model::DescribeBlockedRegionsRequest;

DescribeBlockedRegionsRequest::DescribeBlockedRegionsRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeBlockedRegions") {
  setMethod(HttpRequest::Method::Get);
}

DescribeBlockedRegionsRequest::~DescribeBlockedRegionsRequest() {}

std::string DescribeBlockedRegionsRequest::getLanguage() const {
  return language_;
}

void DescribeBlockedRegionsRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

long DescribeBlockedRegionsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeBlockedRegionsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

