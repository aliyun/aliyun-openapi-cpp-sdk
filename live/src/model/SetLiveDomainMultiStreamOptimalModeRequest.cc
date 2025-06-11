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

#include <alibabacloud/live/model/SetLiveDomainMultiStreamOptimalModeRequest.h>

using AlibabaCloud::Live::Model::SetLiveDomainMultiStreamOptimalModeRequest;

SetLiveDomainMultiStreamOptimalModeRequest::SetLiveDomainMultiStreamOptimalModeRequest()
    : RpcServiceRequest("live", "2016-11-01", "SetLiveDomainMultiStreamOptimalMode") {
  setMethod(HttpRequest::Method::Get);
}

SetLiveDomainMultiStreamOptimalModeRequest::~SetLiveDomainMultiStreamOptimalModeRequest() {}

std::string SetLiveDomainMultiStreamOptimalModeRequest::getAppName() const {
  return appName_;
}

void SetLiveDomainMultiStreamOptimalModeRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string SetLiveDomainMultiStreamOptimalModeRequest::getStreamName() const {
  return streamName_;
}

void SetLiveDomainMultiStreamOptimalModeRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

long SetLiveDomainMultiStreamOptimalModeRequest::getOwnerId() const {
  return ownerId_;
}

void SetLiveDomainMultiStreamOptimalModeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetLiveDomainMultiStreamOptimalModeRequest::getDomain() const {
  return domain_;
}

void SetLiveDomainMultiStreamOptimalModeRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

std::string SetLiveDomainMultiStreamOptimalModeRequest::getOptimalMode() const {
  return optimalMode_;
}

void SetLiveDomainMultiStreamOptimalModeRequest::setOptimalMode(const std::string &optimalMode) {
  optimalMode_ = optimalMode;
  setParameter(std::string("OptimalMode"), optimalMode);
}

