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

#include <alibabacloud/devops/model/CreateOAuthTokenRequest.h>

using AlibabaCloud::Devops::Model::CreateOAuthTokenRequest;

CreateOAuthTokenRequest::CreateOAuthTokenRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/login/oauth/create"};
  setMethod(HttpRequest::Method::Post);
}

CreateOAuthTokenRequest::~CreateOAuthTokenRequest() {}

CreateOAuthTokenRequest::body CreateOAuthTokenRequest::getBody() const {
  return body_;
}

void CreateOAuthTokenRequest::setBody(const CreateOAuthTokenRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".clientId", body.clientId);
  setBodyParameter(std::string("body") + ".code", body.code);
  setBodyParameter(std::string("body") + ".clientSecret", body.clientSecret);
  setBodyParameter(std::string("body") + ".scope", body.scope);
  setBodyParameter(std::string("body") + ".login", body.login);
  setBodyParameter(std::string("body") + ".grantType", body.grantType);
}

