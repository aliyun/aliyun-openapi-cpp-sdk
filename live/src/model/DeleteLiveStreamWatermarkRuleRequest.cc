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

#include <alibabacloud/live/model/DeleteLiveStreamWatermarkRuleRequest.h>

using AlibabaCloud::Live::Model::DeleteLiveStreamWatermarkRuleRequest;

DeleteLiveStreamWatermarkRuleRequest::DeleteLiveStreamWatermarkRuleRequest()
    : RpcServiceRequest("live", "2016-11-01", "DeleteLiveStreamWatermarkRule") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLiveStreamWatermarkRuleRequest::~DeleteLiveStreamWatermarkRuleRequest() {}

std::string DeleteLiveStreamWatermarkRuleRequest::getRegionId() const {
  return regionId_;
}

void DeleteLiveStreamWatermarkRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteLiveStreamWatermarkRuleRequest::getStream() const {
  return stream_;
}

void DeleteLiveStreamWatermarkRuleRequest::setStream(const std::string &stream) {
  stream_ = stream;
  setParameter(std::string("Stream"), stream);
}

std::string DeleteLiveStreamWatermarkRuleRequest::getApp() const {
  return app_;
}

void DeleteLiveStreamWatermarkRuleRequest::setApp(const std::string &app) {
  app_ = app;
  setParameter(std::string("App"), app);
}

long DeleteLiveStreamWatermarkRuleRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteLiveStreamWatermarkRuleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteLiveStreamWatermarkRuleRequest::getDomain() const {
  return domain_;
}

void DeleteLiveStreamWatermarkRuleRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

std::string DeleteLiveStreamWatermarkRuleRequest::getRuleId() const {
  return ruleId_;
}

void DeleteLiveStreamWatermarkRuleRequest::setRuleId(const std::string &ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), ruleId);
}

