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

#include <alibabacloud/live/model/DescribeLiveVerifyContentRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveVerifyContentRequest;

DescribeLiveVerifyContentRequest::DescribeLiveVerifyContentRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveVerifyContent") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveVerifyContentRequest::~DescribeLiveVerifyContentRequest() {}

std::string DescribeLiveVerifyContentRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveVerifyContentRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeLiveVerifyContentRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveVerifyContentRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

