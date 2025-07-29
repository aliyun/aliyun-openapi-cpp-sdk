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

#include <alibabacloud/live/model/UpdateLiveAIProduceRulesRequest.h>

using AlibabaCloud::Live::Model::UpdateLiveAIProduceRulesRequest;

UpdateLiveAIProduceRulesRequest::UpdateLiveAIProduceRulesRequest()
    : RpcServiceRequest("live", "2016-11-01", "UpdateLiveAIProduceRules") {
  setMethod(HttpRequest::Method::Post);
}

UpdateLiveAIProduceRulesRequest::~UpdateLiveAIProduceRulesRequest() {}

std::string UpdateLiveAIProduceRulesRequest::getDescription() const {
  return description_;
}

void UpdateLiveAIProduceRulesRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateLiveAIProduceRulesRequest::getSuffix() const {
  return suffix_;
}

void UpdateLiveAIProduceRulesRequest::setSuffix(const std::string &suffix) {
  suffix_ = suffix;
  setParameter(std::string("Suffix"), suffix);
}

std::string UpdateLiveAIProduceRulesRequest::getSubtitleName() const {
  return subtitleName_;
}

void UpdateLiveAIProduceRulesRequest::setSubtitleName(const std::string &subtitleName) {
  subtitleName_ = subtitleName;
  setParameter(std::string("SubtitleName"), subtitleName);
}

std::string UpdateLiveAIProduceRulesRequest::getRegionId() const {
  return regionId_;
}

void UpdateLiveAIProduceRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateLiveAIProduceRulesRequest::getRulesId() const {
  return rulesId_;
}

void UpdateLiveAIProduceRulesRequest::setRulesId(const std::string &rulesId) {
  rulesId_ = rulesId;
  setParameter(std::string("RulesId"), rulesId);
}

std::string UpdateLiveAIProduceRulesRequest::getApp() const {
  return app_;
}

void UpdateLiveAIProduceRulesRequest::setApp(const std::string &app) {
  app_ = app;
  setParameter(std::string("App"), app);
}

long UpdateLiveAIProduceRulesRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateLiveAIProduceRulesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool UpdateLiveAIProduceRulesRequest::getIsLazy() const {
  return isLazy_;
}

void UpdateLiveAIProduceRulesRequest::setIsLazy(bool isLazy) {
  isLazy_ = isLazy;
  setParameter(std::string("IsLazy"), isLazy ? "true" : "false");
}

std::string UpdateLiveAIProduceRulesRequest::getStudioName() const {
  return studioName_;
}

void UpdateLiveAIProduceRulesRequest::setStudioName(const std::string &studioName) {
  studioName_ = studioName;
  setParameter(std::string("StudioName"), studioName);
}

std::string UpdateLiveAIProduceRulesRequest::getLiveTemplate() const {
  return liveTemplate_;
}

void UpdateLiveAIProduceRulesRequest::setLiveTemplate(const std::string &liveTemplate) {
  liveTemplate_ = liveTemplate;
  setParameter(std::string("LiveTemplate"), liveTemplate);
}

std::string UpdateLiveAIProduceRulesRequest::getDomain() const {
  return domain_;
}

void UpdateLiveAIProduceRulesRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

bool UpdateLiveAIProduceRulesRequest::getIsOrigin() const {
  return isOrigin_;
}

void UpdateLiveAIProduceRulesRequest::setIsOrigin(bool isOrigin) {
  isOrigin_ = isOrigin;
  setParameter(std::string("IsOrigin"), isOrigin ? "true" : "false");
}

std::string UpdateLiveAIProduceRulesRequest::getSubtitleId() const {
  return subtitleId_;
}

void UpdateLiveAIProduceRulesRequest::setSubtitleId(const std::string &subtitleId) {
  subtitleId_ = subtitleId;
  setParameter(std::string("SubtitleId"), subtitleId);
}

