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

#include <alibabacloud/eiam/model/SetApplicationGrantScopeRequest.h>

using AlibabaCloud::Eiam::Model::SetApplicationGrantScopeRequest;

SetApplicationGrantScopeRequest::SetApplicationGrantScopeRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "SetApplicationGrantScope") {
  setMethod(HttpRequest::Method::Post);
}

SetApplicationGrantScopeRequest::~SetApplicationGrantScopeRequest() {}

std::string SetApplicationGrantScopeRequest::getApplicationId() const {
  return applicationId_;
}

void SetApplicationGrantScopeRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::vector<SetApplicationGrantScopeRequest::std::string> SetApplicationGrantScopeRequest::getGrantScopes() const {
  return grantScopes_;
}

void SetApplicationGrantScopeRequest::setGrantScopes(const std::vector<SetApplicationGrantScopeRequest::std::string> &grantScopes) {
  grantScopes_ = grantScopes;
  for(int dep1 = 0; dep1 != grantScopes.size(); dep1++) {
    setParameter(std::string("GrantScopes") + "." + std::to_string(dep1 + 1), grantScopes[dep1]);
  }
}

std::string SetApplicationGrantScopeRequest::getInstanceId() const {
  return instanceId_;
}

void SetApplicationGrantScopeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

