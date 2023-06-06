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

#include <alibabacloud/sas/model/SaveImageBaselineStrategyRequest.h>

using AlibabaCloud::Sas::Model::SaveImageBaselineStrategyRequest;

SaveImageBaselineStrategyRequest::SaveImageBaselineStrategyRequest()
    : RpcServiceRequest("sas", "2018-12-03", "SaveImageBaselineStrategy") {
  setMethod(HttpRequest::Method::Post);
}

SaveImageBaselineStrategyRequest::~SaveImageBaselineStrategyRequest() {}

std::string SaveImageBaselineStrategyRequest::getSourceIp() const {
  return sourceIp_;
}

void SaveImageBaselineStrategyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string SaveImageBaselineStrategyRequest::getLang() const {
  return lang_;
}

void SaveImageBaselineStrategyRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string SaveImageBaselineStrategyRequest::getBaselineItemList() const {
  return baselineItemList_;
}

void SaveImageBaselineStrategyRequest::setBaselineItemList(const std::string &baselineItemList) {
  baselineItemList_ = baselineItemList;
  setParameter(std::string("BaselineItemList"), baselineItemList);
}

std::string SaveImageBaselineStrategyRequest::getStrategyName() const {
  return strategyName_;
}

void SaveImageBaselineStrategyRequest::setStrategyName(const std::string &strategyName) {
  strategyName_ = strategyName;
  setParameter(std::string("StrategyName"), strategyName);
}

long SaveImageBaselineStrategyRequest::getStrategyId() const {
  return strategyId_;
}

void SaveImageBaselineStrategyRequest::setStrategyId(long strategyId) {
  strategyId_ = strategyId;
  setParameter(std::string("StrategyId"), std::to_string(strategyId));
}

