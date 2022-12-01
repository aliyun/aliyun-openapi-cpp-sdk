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

#include <alibabacloud/opensearch/model/RemoveSearchStrategyRequest.h>

using AlibabaCloud::OpenSearch::Model::RemoveSearchStrategyRequest;

RemoveSearchStrategyRequest::RemoveSearchStrategyRequest()
    : RoaServiceRequest("opensearch", "2017-12-25") {
  setResourcePath("/v4/openapi/app-groups/[appGroupIdentity]/apps/[appId]/search-strategies/[strategyName]"};
  setMethod(HttpRequest::Method::Delete);
}

RemoveSearchStrategyRequest::~RemoveSearchStrategyRequest() {}

std::string RemoveSearchStrategyRequest::getStrategyName() const {
  return strategyName_;
}

void RemoveSearchStrategyRequest::setStrategyName(const std::string &strategyName) {
  strategyName_ = strategyName;
  setParameter(std::string("strategyName"), strategyName);
}

std::string RemoveSearchStrategyRequest::getAppId() const {
  return appId_;
}

void RemoveSearchStrategyRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("appId"), appId);
}

std::string RemoveSearchStrategyRequest::getAppGroupIdentity() const {
  return appGroupIdentity_;
}

void RemoveSearchStrategyRequest::setAppGroupIdentity(const std::string &appGroupIdentity) {
  appGroupIdentity_ = appGroupIdentity;
  setParameter(std::string("appGroupIdentity"), appGroupIdentity);
}

