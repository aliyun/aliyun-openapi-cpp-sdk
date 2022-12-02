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

#include <alibabacloud/live/model/CreateMessageAppRequest.h>

using AlibabaCloud::Live::Model::CreateMessageAppRequest;

CreateMessageAppRequest::CreateMessageAppRequest()
    : RpcServiceRequest("live", "2016-11-01", "CreateMessageApp") {
  setMethod(HttpRequest::Method::Post);
}

CreateMessageAppRequest::~CreateMessageAppRequest() {}

std::map<std::string, std::string> CreateMessageAppRequest::getExtension() const {
  return extension_;
}

void CreateMessageAppRequest::setExtension(const std::map<std::string, std::string> &extension) {
  extension_ = extension;
  for(auto const &iter1 : extension) {
    setBodyParameter(std::string("Extension") + "." + iter1.first, iter1.second);
  }
}

std::map<std::string, std::string> CreateMessageAppRequest::getAppConfig() const {
  return appConfig_;
}

void CreateMessageAppRequest::setAppConfig(const std::map<std::string, std::string> &appConfig) {
  appConfig_ = appConfig;
  for(auto const &iter1 : appConfig) {
    setBodyParameter(std::string("AppConfig") + "." + iter1.first, iter1.second);
  }
}

std::string CreateMessageAppRequest::getAppName() const {
  return appName_;
}

void CreateMessageAppRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setBodyParameter(std::string("AppName"), appName);
}

