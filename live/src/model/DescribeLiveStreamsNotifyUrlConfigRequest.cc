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

#include <alibabacloud/live/model/DescribeLiveStreamsNotifyUrlConfigRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveStreamsNotifyUrlConfigRequest;

DescribeLiveStreamsNotifyUrlConfigRequest::DescribeLiveStreamsNotifyUrlConfigRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveStreamsNotifyUrlConfig") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveStreamsNotifyUrlConfigRequest::~DescribeLiveStreamsNotifyUrlConfigRequest() {}

std::string DescribeLiveStreamsNotifyUrlConfigRequest::getNotifyType() const {
  return notifyType_;
}

void DescribeLiveStreamsNotifyUrlConfigRequest::setNotifyType(const std::string &notifyType) {
  notifyType_ = notifyType;
  setParameter(std::string("NotifyType"), notifyType);
}

std::string DescribeLiveStreamsNotifyUrlConfigRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveStreamsNotifyUrlConfigRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeLiveStreamsNotifyUrlConfigRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveStreamsNotifyUrlConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

