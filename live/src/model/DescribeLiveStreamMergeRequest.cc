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

#include <alibabacloud/live/model/DescribeLiveStreamMergeRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveStreamMergeRequest;

DescribeLiveStreamMergeRequest::DescribeLiveStreamMergeRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveStreamMerge") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveStreamMergeRequest::~DescribeLiveStreamMergeRequest() {}

std::string DescribeLiveStreamMergeRequest::getProtocol() const {
  return protocol_;
}

void DescribeLiveStreamMergeRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string DescribeLiveStreamMergeRequest::getAppName() const {
  return appName_;
}

void DescribeLiveStreamMergeRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string DescribeLiveStreamMergeRequest::getStreamName() const {
  return streamName_;
}

void DescribeLiveStreamMergeRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string DescribeLiveStreamMergeRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveStreamMergeRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeLiveStreamMergeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveStreamMergeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

