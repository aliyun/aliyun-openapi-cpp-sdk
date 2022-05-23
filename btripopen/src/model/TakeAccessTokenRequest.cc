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

#include <alibabacloud/btripopen/model/TakeAccessTokenRequest.h>

using AlibabaCloud::BtripOpen::Model::TakeAccessTokenRequest;

TakeAccessTokenRequest::TakeAccessTokenRequest()
    : RoaServiceRequest("btripopen", "2022-05-17") {
  setResourcePath("/btrip/open/access-token/take"};
  setMethod(HttpRequest::Method::Get);
}

TakeAccessTokenRequest::~TakeAccessTokenRequest() {}

std::string TakeAccessTokenRequest::getApp_key() const {
  return app_key_;
}

void TakeAccessTokenRequest::setApp_key(const std::string &app_key) {
  app_key_ = app_key;
  setParameter(std::string("app_key"), app_key);
}

std::string TakeAccessTokenRequest::getApp_secret() const {
  return app_secret_;
}

void TakeAccessTokenRequest::setApp_secret(const std::string &app_secret) {
  app_secret_ = app_secret;
  setParameter(std::string("app_secret"), app_secret);
}

