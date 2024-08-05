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

#include <alibabacloud/arms/model/SetRetcodeShareStatusRequest.h>

using AlibabaCloud::ARMS::Model::SetRetcodeShareStatusRequest;

SetRetcodeShareStatusRequest::SetRetcodeShareStatusRequest()
    : RpcServiceRequest("arms", "2019-08-08", "SetRetcodeShareStatus") {
  setMethod(HttpRequest::Method::Post);
}

SetRetcodeShareStatusRequest::~SetRetcodeShareStatusRequest() {}

std::string SetRetcodeShareStatusRequest::getAppName() const {
  return appName_;
}

void SetRetcodeShareStatusRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string SetRetcodeShareStatusRequest::getPid() const {
  return pid_;
}

void SetRetcodeShareStatusRequest::setPid(const std::string &pid) {
  pid_ = pid;
  setParameter(std::string("Pid"), pid);
}

bool SetRetcodeShareStatusRequest::getStatus() const {
  return status_;
}

void SetRetcodeShareStatusRequest::setStatus(bool status) {
  status_ = status;
  setParameter(std::string("Status"), status ? "true" : "false");
}

