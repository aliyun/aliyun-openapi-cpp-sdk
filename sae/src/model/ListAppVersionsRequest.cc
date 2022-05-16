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

#include <alibabacloud/sae/model/ListAppVersionsRequest.h>

using AlibabaCloud::Sae::Model::ListAppVersionsRequest;

ListAppVersionsRequest::ListAppVersionsRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/app/listAppVersions"};
  setMethod(HttpRequest::Method::Get);
}

ListAppVersionsRequest::~ListAppVersionsRequest() {}

std::string ListAppVersionsRequest::getAppId() const {
  return appId_;
}

void ListAppVersionsRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

