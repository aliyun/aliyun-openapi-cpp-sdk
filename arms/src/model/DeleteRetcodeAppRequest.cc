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

#include <alibabacloud/arms/model/DeleteRetcodeAppRequest.h>

using AlibabaCloud::ARMS::Model::DeleteRetcodeAppRequest;

DeleteRetcodeAppRequest::DeleteRetcodeAppRequest()
    : RpcServiceRequest("arms", "2019-08-08", "DeleteRetcodeApp") {
  setMethod(HttpRequest::Method::Post);
}

DeleteRetcodeAppRequest::~DeleteRetcodeAppRequest() {}

std::string DeleteRetcodeAppRequest::getAppName() const {
  return appName_;
}

void DeleteRetcodeAppRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string DeleteRetcodeAppRequest::getRegionId() const {
  return regionId_;
}

void DeleteRetcodeAppRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteRetcodeAppRequest::getAppId() const {
  return appId_;
}

void DeleteRetcodeAppRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string DeleteRetcodeAppRequest::getPid() const {
  return pid_;
}

void DeleteRetcodeAppRequest::setPid(const std::string &pid) {
  pid_ = pid;
  setParameter(std::string("Pid"), pid);
}

