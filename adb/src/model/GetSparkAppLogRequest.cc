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

#include <alibabacloud/adb/model/GetSparkAppLogRequest.h>

using AlibabaCloud::Adb::Model::GetSparkAppLogRequest;

GetSparkAppLogRequest::GetSparkAppLogRequest()
    : RpcServiceRequest("adb", "2021-12-01", "GetSparkAppLog") {
  setMethod(HttpRequest::Method::Post);
}

GetSparkAppLogRequest::~GetSparkAppLogRequest() {}

std::string GetSparkAppLogRequest::getAppId() const {
  return appId_;
}

void GetSparkAppLogRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setBodyParameter(std::string("AppId"), appId);
}

long GetSparkAppLogRequest::getLogLength() const {
  return logLength_;
}

void GetSparkAppLogRequest::setLogLength(long logLength) {
  logLength_ = logLength;
  setBodyParameter(std::string("LogLength"), std::to_string(logLength));
}

