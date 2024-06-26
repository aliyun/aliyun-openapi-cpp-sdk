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

#include <alibabacloud/live/model/DeleteLivePrivateLineRequest.h>

using AlibabaCloud::Live::Model::DeleteLivePrivateLineRequest;

DeleteLivePrivateLineRequest::DeleteLivePrivateLineRequest()
    : RpcServiceRequest("live", "2016-11-01", "DeleteLivePrivateLine") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLivePrivateLineRequest::~DeleteLivePrivateLineRequest() {}

std::string DeleteLivePrivateLineRequest::getAppName() const {
  return appName_;
}

void DeleteLivePrivateLineRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string DeleteLivePrivateLineRequest::getStreamName() const {
  return streamName_;
}

void DeleteLivePrivateLineRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string DeleteLivePrivateLineRequest::getDomainName() const {
  return domainName_;
}

void DeleteLivePrivateLineRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DeleteLivePrivateLineRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteLivePrivateLineRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteLivePrivateLineRequest::getAccelerationType() const {
  return accelerationType_;
}

void DeleteLivePrivateLineRequest::setAccelerationType(const std::string &accelerationType) {
  accelerationType_ = accelerationType;
  setParameter(std::string("AccelerationType"), accelerationType);
}

