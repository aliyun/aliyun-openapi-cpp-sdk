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

#include <alibabacloud/eiam/model/UpdateApplicationInfoRequest.h>

using AlibabaCloud::Eiam::Model::UpdateApplicationInfoRequest;

UpdateApplicationInfoRequest::UpdateApplicationInfoRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "UpdateApplicationInfo") {
  setMethod(HttpRequest::Method::Post);
}

UpdateApplicationInfoRequest::~UpdateApplicationInfoRequest() {}

std::string UpdateApplicationInfoRequest::getClientToken() const {
  return clientToken_;
}

void UpdateApplicationInfoRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateApplicationInfoRequest::getLogoUrl() const {
  return logoUrl_;
}

void UpdateApplicationInfoRequest::setLogoUrl(const std::string &logoUrl) {
  logoUrl_ = logoUrl;
  setParameter(std::string("LogoUrl"), logoUrl);
}

std::string UpdateApplicationInfoRequest::getApplicationId() const {
  return applicationId_;
}

void UpdateApplicationInfoRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::string UpdateApplicationInfoRequest::getApplicationName() const {
  return applicationName_;
}

void UpdateApplicationInfoRequest::setApplicationName(const std::string &applicationName) {
  applicationName_ = applicationName;
  setParameter(std::string("ApplicationName"), applicationName);
}

std::vector<UpdateApplicationInfoRequest::std::string> UpdateApplicationInfoRequest::getApplicationVisibility() const {
  return applicationVisibility_;
}

void UpdateApplicationInfoRequest::setApplicationVisibility(const std::vector<UpdateApplicationInfoRequest::std::string> &applicationVisibility) {
  applicationVisibility_ = applicationVisibility;
  for(int dep1 = 0; dep1 != applicationVisibility.size(); dep1++) {
    setParameter(std::string("ApplicationVisibility") + "." + std::to_string(dep1 + 1), applicationVisibility[dep1]);
  }
}

std::string UpdateApplicationInfoRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateApplicationInfoRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

