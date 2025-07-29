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

#include <alibabacloud/live/model/DescribeLiveDelayConfigRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDelayConfigRequest;

DescribeLiveDelayConfigRequest::DescribeLiveDelayConfigRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveDelayConfig") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveDelayConfigRequest::~DescribeLiveDelayConfigRequest() {}

std::string DescribeLiveDelayConfigRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveDelayConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLiveDelayConfigRequest::getStream() const {
  return stream_;
}

void DescribeLiveDelayConfigRequest::setStream(const std::string &stream) {
  stream_ = stream;
  setParameter(std::string("Stream"), stream);
}

std::string DescribeLiveDelayConfigRequest::getApp() const {
  return app_;
}

void DescribeLiveDelayConfigRequest::setApp(const std::string &app) {
  app_ = app;
  setParameter(std::string("App"), app);
}

long DescribeLiveDelayConfigRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveDelayConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLiveDelayConfigRequest::getDomain() const {
  return domain_;
}

void DescribeLiveDelayConfigRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

