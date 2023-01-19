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

#include <alibabacloud/sas/model/ExecStrategyRequest.h>

using AlibabaCloud::Sas::Model::ExecStrategyRequest;

ExecStrategyRequest::ExecStrategyRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ExecStrategy") {
  setMethod(HttpRequest::Method::Post);
}

ExecStrategyRequest::~ExecStrategyRequest() {}

int ExecStrategyRequest::getStrategyId() const {
  return strategyId_;
}

void ExecStrategyRequest::setStrategyId(int strategyId) {
  strategyId_ = strategyId;
  setParameter(std::string("StrategyId"), std::to_string(strategyId));
}

std::string ExecStrategyRequest::getLang() const {
  return lang_;
}

void ExecStrategyRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

