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

#include <alibabacloud/config/model/UpdateAggregatorRequest.h>

using AlibabaCloud::Config::Model::UpdateAggregatorRequest;

UpdateAggregatorRequest::UpdateAggregatorRequest()
    : RpcServiceRequest("config", "2020-09-07", "UpdateAggregator") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAggregatorRequest::~UpdateAggregatorRequest() {}

std::string UpdateAggregatorRequest::getClientToken() const {
  return clientToken_;
}

void UpdateAggregatorRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateAggregatorRequest::getAggregatorName() const {
  return aggregatorName_;
}

void UpdateAggregatorRequest::setAggregatorName(const std::string &aggregatorName) {
  aggregatorName_ = aggregatorName;
  setBodyParameter(std::string("AggregatorName"), aggregatorName);
}

std::string UpdateAggregatorRequest::getDescription() const {
  return description_;
}

void UpdateAggregatorRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdateAggregatorRequest::getAggregatorId() const {
  return aggregatorId_;
}

void UpdateAggregatorRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setBodyParameter(std::string("AggregatorId"), aggregatorId);
}

std::vector<UpdateAggregatorRequest::AggregatorAccounts> UpdateAggregatorRequest::getAggregatorAccounts() const {
  return aggregatorAccounts_;
}

void UpdateAggregatorRequest::setAggregatorAccounts(const std::vector<UpdateAggregatorRequest::AggregatorAccounts> &aggregatorAccounts) {
  aggregatorAccounts_ = aggregatorAccounts;
  for(int dep1 = 0; dep1 != aggregatorAccounts.size(); dep1++) {
    setBodyParameter(std::string("AggregatorAccounts") + "." + std::to_string(dep1 + 1) + ".AccountId", std::to_string(aggregatorAccounts[dep1].accountId));
    setBodyParameter(std::string("AggregatorAccounts") + "." + std::to_string(dep1 + 1) + ".AccountName", aggregatorAccounts[dep1].accountName);
    setBodyParameter(std::string("AggregatorAccounts") + "." + std::to_string(dep1 + 1) + ".AccountType", aggregatorAccounts[dep1].accountType);
  }
}

