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

#include <alibabacloud/live/model/DeleteLiveAIProduceRulesRequest.h>

using AlibabaCloud::Live::Model::DeleteLiveAIProduceRulesRequest;

DeleteLiveAIProduceRulesRequest::DeleteLiveAIProduceRulesRequest()
    : RpcServiceRequest("live", "2016-11-01", "DeleteLiveAIProduceRules") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLiveAIProduceRulesRequest::~DeleteLiveAIProduceRulesRequest() {}

std::string DeleteLiveAIProduceRulesRequest::getRegionId() const {
  return regionId_;
}

void DeleteLiveAIProduceRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteLiveAIProduceRulesRequest::getRulesId() const {
  return rulesId_;
}

void DeleteLiveAIProduceRulesRequest::setRulesId(const std::string &rulesId) {
  rulesId_ = rulesId;
  setParameter(std::string("RulesId"), rulesId);
}

std::string DeleteLiveAIProduceRulesRequest::getApp() const {
  return app_;
}

void DeleteLiveAIProduceRulesRequest::setApp(const std::string &app) {
  app_ = app;
  setParameter(std::string("App"), app);
}

long DeleteLiveAIProduceRulesRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteLiveAIProduceRulesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteLiveAIProduceRulesRequest::getSuffixName() const {
  return suffixName_;
}

void DeleteLiveAIProduceRulesRequest::setSuffixName(const std::string &suffixName) {
  suffixName_ = suffixName;
  setParameter(std::string("SuffixName"), suffixName);
}

std::string DeleteLiveAIProduceRulesRequest::getDomain() const {
  return domain_;
}

void DeleteLiveAIProduceRulesRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

