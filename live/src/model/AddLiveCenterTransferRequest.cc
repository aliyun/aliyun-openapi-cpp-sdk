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

#include <alibabacloud/live/model/AddLiveCenterTransferRequest.h>

using AlibabaCloud::Live::Model::AddLiveCenterTransferRequest;

AddLiveCenterTransferRequest::AddLiveCenterTransferRequest()
    : RpcServiceRequest("live", "2016-11-01", "AddLiveCenterTransfer") {
  setMethod(HttpRequest::Method::Post);
}

AddLiveCenterTransferRequest::~AddLiveCenterTransferRequest() {}

std::string AddLiveCenterTransferRequest::getTransferArgs() const {
  return transferArgs_;
}

void AddLiveCenterTransferRequest::setTransferArgs(const std::string &transferArgs) {
  transferArgs_ = transferArgs;
  setParameter(std::string("TransferArgs"), transferArgs);
}

std::string AddLiveCenterTransferRequest::getStartTime() const {
  return startTime_;
}

void AddLiveCenterTransferRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string AddLiveCenterTransferRequest::getAppName() const {
  return appName_;
}

void AddLiveCenterTransferRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string AddLiveCenterTransferRequest::getRegionId() const {
  return regionId_;
}

void AddLiveCenterTransferRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddLiveCenterTransferRequest::getStreamName() const {
  return streamName_;
}

void AddLiveCenterTransferRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string AddLiveCenterTransferRequest::getDstUrl() const {
  return dstUrl_;
}

void AddLiveCenterTransferRequest::setDstUrl(const std::string &dstUrl) {
  dstUrl_ = dstUrl;
  setParameter(std::string("DstUrl"), dstUrl);
}

std::string AddLiveCenterTransferRequest::getDomainName() const {
  return domainName_;
}

void AddLiveCenterTransferRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string AddLiveCenterTransferRequest::getEndTime() const {
  return endTime_;
}

void AddLiveCenterTransferRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long AddLiveCenterTransferRequest::getOwnerId() const {
  return ownerId_;
}

void AddLiveCenterTransferRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

