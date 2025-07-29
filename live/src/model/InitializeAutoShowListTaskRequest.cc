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

#include <alibabacloud/live/model/InitializeAutoShowListTaskRequest.h>

using AlibabaCloud::Live::Model::InitializeAutoShowListTaskRequest;

InitializeAutoShowListTaskRequest::InitializeAutoShowListTaskRequest()
    : RpcServiceRequest("live", "2016-11-01", "InitializeAutoShowListTask") {
  setMethod(HttpRequest::Method::Post);
}

InitializeAutoShowListTaskRequest::~InitializeAutoShowListTaskRequest() {}

long InitializeAutoShowListTaskRequest::getStartTime() const {
  return startTime_;
}

void InitializeAutoShowListTaskRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string InitializeAutoShowListTaskRequest::getRegionId() const {
  return regionId_;
}

void InitializeAutoShowListTaskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string InitializeAutoShowListTaskRequest::getCasterConfig() const {
  return casterConfig_;
}

void InitializeAutoShowListTaskRequest::setCasterConfig(const std::string &casterConfig) {
  casterConfig_ = casterConfig;
  setParameter(std::string("CasterConfig"), casterConfig);
}

std::string InitializeAutoShowListTaskRequest::getDomainName() const {
  return domainName_;
}

void InitializeAutoShowListTaskRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long InitializeAutoShowListTaskRequest::getEndTime() const {
  return endTime_;
}

void InitializeAutoShowListTaskRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long InitializeAutoShowListTaskRequest::getOwnerId() const {
  return ownerId_;
}

void InitializeAutoShowListTaskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string InitializeAutoShowListTaskRequest::getCallBackUrl() const {
  return callBackUrl_;
}

void InitializeAutoShowListTaskRequest::setCallBackUrl(const std::string &callBackUrl) {
  callBackUrl_ = callBackUrl;
  setParameter(std::string("CallBackUrl"), callBackUrl);
}

std::string InitializeAutoShowListTaskRequest::getResourceIds() const {
  return resourceIds_;
}

void InitializeAutoShowListTaskRequest::setResourceIds(const std::string &resourceIds) {
  resourceIds_ = resourceIds;
  setParameter(std::string("ResourceIds"), resourceIds);
}

