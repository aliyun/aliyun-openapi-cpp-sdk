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

#include <alibabacloud/alb/model/EnableDeletionProtectionRequest.h>

using AlibabaCloud::Alb::Model::EnableDeletionProtectionRequest;

EnableDeletionProtectionRequest::EnableDeletionProtectionRequest()
    : RpcServiceRequest("alb", "2020-06-16", "EnableDeletionProtection") {
  setMethod(HttpRequest::Method::Post);
}

EnableDeletionProtectionRequest::~EnableDeletionProtectionRequest() {}

std::string EnableDeletionProtectionRequest::getClientToken() const {
  return clientToken_;
}

void EnableDeletionProtectionRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string EnableDeletionProtectionRequest::getResourceId() const {
  return resourceId_;
}

void EnableDeletionProtectionRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

bool EnableDeletionProtectionRequest::getDryRun() const {
  return dryRun_;
}

void EnableDeletionProtectionRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

