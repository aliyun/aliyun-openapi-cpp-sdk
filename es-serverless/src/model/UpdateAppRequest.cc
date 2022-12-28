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

#include <alibabacloud/es-serverless/model/UpdateAppRequest.h>

using AlibabaCloud::Es_serverless::Model::UpdateAppRequest;

UpdateAppRequest::UpdateAppRequest()
    : RoaServiceRequest("es-serverless", "2022-08-22") {
  setResourcePath("/openapi/xops/instances/[appName]"};
  setMethod(HttpRequest::Method::Put);
}

UpdateAppRequest::~UpdateAppRequest() {}

std::string UpdateAppRequest::getAppName() const {
  return appName_;
}

void UpdateAppRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("appName"), appName);
}

std::string UpdateAppRequest::getBody() const {
  return body_;
}

void UpdateAppRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("Body"), body);
}

