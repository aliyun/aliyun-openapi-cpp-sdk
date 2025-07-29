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

#include <alibabacloud/live/model/DescribeLiveAIProduceRulesRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveAIProduceRulesRequest;

DescribeLiveAIProduceRulesRequest::DescribeLiveAIProduceRulesRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveAIProduceRules") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveAIProduceRulesRequest::~DescribeLiveAIProduceRulesRequest() {}

std::string DescribeLiveAIProduceRulesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeLiveAIProduceRulesRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string DescribeLiveAIProduceRulesRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveAIProduceRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLiveAIProduceRulesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLiveAIProduceRulesRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeLiveAIProduceRulesRequest::getRulesId() const {
  return rulesId_;
}

void DescribeLiveAIProduceRulesRequest::setRulesId(const std::string &rulesId) {
  rulesId_ = rulesId;
  setParameter(std::string("RulesId"), rulesId);
}

std::string DescribeLiveAIProduceRulesRequest::getApp() const {
  return app_;
}

void DescribeLiveAIProduceRulesRequest::setApp(const std::string &app) {
  app_ = app;
  setParameter(std::string("App"), app);
}

long DescribeLiveAIProduceRulesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveAIProduceRulesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLiveAIProduceRulesRequest::getSuffixName() const {
  return suffixName_;
}

void DescribeLiveAIProduceRulesRequest::setSuffixName(const std::string &suffixName) {
  suffixName_ = suffixName;
  setParameter(std::string("SuffixName"), suffixName);
}

std::string DescribeLiveAIProduceRulesRequest::getDomain() const {
  return domain_;
}

void DescribeLiveAIProduceRulesRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

