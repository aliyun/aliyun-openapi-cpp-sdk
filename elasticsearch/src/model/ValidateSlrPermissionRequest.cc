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

#include <alibabacloud/elasticsearch/model/ValidateSlrPermissionRequest.h>

using AlibabaCloud::Elasticsearch::Model::ValidateSlrPermissionRequest;

ValidateSlrPermissionRequest::ValidateSlrPermissionRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/user/servicerolepermission"};
  setMethod(HttpRequest::Method::Get);
}

ValidateSlrPermissionRequest::~ValidateSlrPermissionRequest() {}

std::string ValidateSlrPermissionRequest::getClientToken() const {
  return clientToken_;
}

void ValidateSlrPermissionRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ValidateSlrPermissionRequest::getRolename() const {
  return rolename_;
}

void ValidateSlrPermissionRequest::setRolename(const std::string &rolename) {
  rolename_ = rolename;
  setParameter(std::string("rolename"), rolename);
}

