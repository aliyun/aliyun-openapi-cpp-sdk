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

#include <alibabacloud/opensearch/model/ModifyFirstRankRequest.h>

using AlibabaCloud::OpenSearch::Model::ModifyFirstRankRequest;

ModifyFirstRankRequest::ModifyFirstRankRequest()
    : RoaServiceRequest("opensearch", "2017-12-25") {
  setResourcePath("/v4/openapi/app-groups/[appGroupIdentity]/apps/[appId]/first-ranks/[name]"};
  setMethod(HttpRequest::Method::Put);
}

ModifyFirstRankRequest::~ModifyFirstRankRequest() {}

bool ModifyFirstRankRequest::getDryRun() const {
  return dryRun_;
}

void ModifyFirstRankRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("dryRun"), dryRun ? "true" : "false");
}

int ModifyFirstRankRequest::getAppId() const {
  return appId_;
}

void ModifyFirstRankRequest::setAppId(int appId) {
  appId_ = appId;
  setParameter(std::string("appId"), std::to_string(appId));
}

std::string ModifyFirstRankRequest::getName() const {
  return name_;
}

void ModifyFirstRankRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("name"), name);
}

std::string ModifyFirstRankRequest::getAppGroupIdentity() const {
  return appGroupIdentity_;
}

void ModifyFirstRankRequest::setAppGroupIdentity(const std::string &appGroupIdentity) {
  appGroupIdentity_ = appGroupIdentity;
  setParameter(std::string("appGroupIdentity"), appGroupIdentity);
}

