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

#include <alibabacloud/config/model/CreateAggregatorRequest.h>

using AlibabaCloud::Config::Model::CreateAggregatorRequest;

CreateAggregatorRequest::CreateAggregatorRequest()
    : RpcServiceRequest("config", "2020-09-07", "CreateAggregator") {
  setMethod(HttpRequest::Method::Post);
}

CreateAggregatorRequest::~CreateAggregatorRequest() {}

std::string CreateAggregatorRequest::getAggregatorType() const {
  return aggregatorType_;
}

void CreateAggregatorRequest::setAggregatorType(const std::string &aggregatorType) {
  aggregatorType_ = aggregatorType;
  setBodyParameter(std::string("AggregatorType"), aggregatorType);
}

std::string CreateAggregatorRequest::getClientToken() const {
  return clientToken_;
}

void CreateAggregatorRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string CreateAggregatorRequest::getAggregatorName() const {
  return aggregatorName_;
}

void CreateAggregatorRequest::setAggregatorName(const std::string &aggregatorName) {
  aggregatorName_ = aggregatorName;
  setBodyParameter(std::string("AggregatorName"), aggregatorName);
}

std::string CreateAggregatorRequest::getDescription() const {
  return description_;
}

void CreateAggregatorRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::vector<CreateAggregatorRequest::AggregatorAccounts> CreateAggregatorRequest::getAggregatorAccounts() const {
  return aggregatorAccounts_;
}

void CreateAggregatorRequest::setAggregatorAccounts(const std::vector<CreateAggregatorRequest::AggregatorAccounts> &aggregatorAccounts) {
  aggregatorAccounts_ = aggregatorAccounts;
  for(int dep1 = 0; dep1 != aggregatorAccounts.size(); dep1++) {
    setBodyParameter(std::string("AggregatorAccounts") + "." + std::to_string(dep1 + 1) + ".AccountId", std::to_string(aggregatorAccounts[dep1].accountId));
    setBodyParameter(std::string("AggregatorAccounts") + "." + std::to_string(dep1 + 1) + ".AccountName", aggregatorAccounts[dep1].accountName);
    setBodyParameter(std::string("AggregatorAccounts") + "." + std::to_string(dep1 + 1) + ".AccountType", aggregatorAccounts[dep1].accountType);
  }
}

