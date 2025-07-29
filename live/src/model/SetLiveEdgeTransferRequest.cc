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

#include <alibabacloud/live/model/SetLiveEdgeTransferRequest.h>

using AlibabaCloud::Live::Model::SetLiveEdgeTransferRequest;

SetLiveEdgeTransferRequest::SetLiveEdgeTransferRequest()
    : RpcServiceRequest("live", "2016-11-01", "SetLiveEdgeTransfer") {
  setMethod(HttpRequest::Method::Post);
}

SetLiveEdgeTransferRequest::~SetLiveEdgeTransferRequest() {}

std::string SetLiveEdgeTransferRequest::getTransferArgs() const {
  return transferArgs_;
}

void SetLiveEdgeTransferRequest::setTransferArgs(const std::string &transferArgs) {
  transferArgs_ = transferArgs;
  setParameter(std::string("TransferArgs"), transferArgs);
}

std::string SetLiveEdgeTransferRequest::getAppName() const {
  return appName_;
}

void SetLiveEdgeTransferRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string SetLiveEdgeTransferRequest::getRegionId() const {
  return regionId_;
}

void SetLiveEdgeTransferRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SetLiveEdgeTransferRequest::getStreamName() const {
  return streamName_;
}

void SetLiveEdgeTransferRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string SetLiveEdgeTransferRequest::getTargetDomainList() const {
  return targetDomainList_;
}

void SetLiveEdgeTransferRequest::setTargetDomainList(const std::string &targetDomainList) {
  targetDomainList_ = targetDomainList;
  setParameter(std::string("TargetDomainList"), targetDomainList);
}

std::string SetLiveEdgeTransferRequest::getDomainName() const {
  return domainName_;
}

void SetLiveEdgeTransferRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long SetLiveEdgeTransferRequest::getOwnerId() const {
  return ownerId_;
}

void SetLiveEdgeTransferRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetLiveEdgeTransferRequest::getHttpDns() const {
  return httpDns_;
}

void SetLiveEdgeTransferRequest::setHttpDns(const std::string &httpDns) {
  httpDns_ = httpDns;
  setParameter(std::string("HttpDns"), httpDns);
}

