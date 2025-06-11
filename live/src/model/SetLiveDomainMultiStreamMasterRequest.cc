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

#include <alibabacloud/live/model/SetLiveDomainMultiStreamMasterRequest.h>

using AlibabaCloud::Live::Model::SetLiveDomainMultiStreamMasterRequest;

SetLiveDomainMultiStreamMasterRequest::SetLiveDomainMultiStreamMasterRequest()
    : RpcServiceRequest("live", "2016-11-01", "SetLiveDomainMultiStreamMaster") {
  setMethod(HttpRequest::Method::Get);
}

SetLiveDomainMultiStreamMasterRequest::~SetLiveDomainMultiStreamMasterRequest() {}

std::string SetLiveDomainMultiStreamMasterRequest::getAppName() const {
  return appName_;
}

void SetLiveDomainMultiStreamMasterRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string SetLiveDomainMultiStreamMasterRequest::getStreamName() const {
  return streamName_;
}

void SetLiveDomainMultiStreamMasterRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

long SetLiveDomainMultiStreamMasterRequest::getOwnerId() const {
  return ownerId_;
}

void SetLiveDomainMultiStreamMasterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetLiveDomainMultiStreamMasterRequest::getDomain() const {
  return domain_;
}

void SetLiveDomainMultiStreamMasterRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

std::string SetLiveDomainMultiStreamMasterRequest::getUpstreamSequence() const {
  return upstreamSequence_;
}

void SetLiveDomainMultiStreamMasterRequest::setUpstreamSequence(const std::string &upstreamSequence) {
  upstreamSequence_ = upstreamSequence;
  setParameter(std::string("UpstreamSequence"), upstreamSequence);
}

