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

#include <alibabacloud/live/model/AddLiveAIProduceRulesRequest.h>

using AlibabaCloud::Live::Model::AddLiveAIProduceRulesRequest;

AddLiveAIProduceRulesRequest::AddLiveAIProduceRulesRequest()
    : RpcServiceRequest("live", "2016-11-01", "AddLiveAIProduceRules") {
  setMethod(HttpRequest::Method::Post);
}

AddLiveAIProduceRulesRequest::~AddLiveAIProduceRulesRequest() {}

std::string AddLiveAIProduceRulesRequest::getDescription() const {
  return description_;
}

void AddLiveAIProduceRulesRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string AddLiveAIProduceRulesRequest::getSuffix() const {
  return suffix_;
}

void AddLiveAIProduceRulesRequest::setSuffix(const std::string &suffix) {
  suffix_ = suffix;
  setParameter(std::string("Suffix"), suffix);
}

std::string AddLiveAIProduceRulesRequest::getSubtitleName() const {
  return subtitleName_;
}

void AddLiveAIProduceRulesRequest::setSubtitleName(const std::string &subtitleName) {
  subtitleName_ = subtitleName;
  setParameter(std::string("SubtitleName"), subtitleName);
}

std::string AddLiveAIProduceRulesRequest::getRegionId() const {
  return regionId_;
}

void AddLiveAIProduceRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddLiveAIProduceRulesRequest::getApp() const {
  return app_;
}

void AddLiveAIProduceRulesRequest::setApp(const std::string &app) {
  app_ = app;
  setParameter(std::string("App"), app);
}

long AddLiveAIProduceRulesRequest::getOwnerId() const {
  return ownerId_;
}

void AddLiveAIProduceRulesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool AddLiveAIProduceRulesRequest::getIsLazy() const {
  return isLazy_;
}

void AddLiveAIProduceRulesRequest::setIsLazy(bool isLazy) {
  isLazy_ = isLazy;
  setParameter(std::string("IsLazy"), isLazy ? "true" : "false");
}

std::string AddLiveAIProduceRulesRequest::getStudioName() const {
  return studioName_;
}

void AddLiveAIProduceRulesRequest::setStudioName(const std::string &studioName) {
  studioName_ = studioName;
  setParameter(std::string("StudioName"), studioName);
}

std::string AddLiveAIProduceRulesRequest::getLiveTemplate() const {
  return liveTemplate_;
}

void AddLiveAIProduceRulesRequest::setLiveTemplate(const std::string &liveTemplate) {
  liveTemplate_ = liveTemplate;
  setParameter(std::string("LiveTemplate"), liveTemplate);
}

std::string AddLiveAIProduceRulesRequest::getDomain() const {
  return domain_;
}

void AddLiveAIProduceRulesRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

bool AddLiveAIProduceRulesRequest::getIsOrigin() const {
  return isOrigin_;
}

void AddLiveAIProduceRulesRequest::setIsOrigin(bool isOrigin) {
  isOrigin_ = isOrigin;
  setParameter(std::string("IsOrigin"), isOrigin ? "true" : "false");
}

