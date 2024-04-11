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

#include <alibabacloud/cams/model/GetPermissionByCodeRequest.h>

using AlibabaCloud::Cams::Model::GetPermissionByCodeRequest;

GetPermissionByCodeRequest::GetPermissionByCodeRequest()
    : RpcServiceRequest("cams", "2020-06-06", "GetPermissionByCode") {
  setMethod(HttpRequest::Method::Post);
}

GetPermissionByCodeRequest::~GetPermissionByCodeRequest() {}

std::string GetPermissionByCodeRequest::getCode() const {
  return code_;
}

void GetPermissionByCodeRequest::setCode(const std::string &code) {
  code_ = code;
  setBodyParameter(std::string("Code"), code);
}

std::string GetPermissionByCodeRequest::getApiCode() const {
  return apiCode_;
}

void GetPermissionByCodeRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::vector<GetPermissionByCodeRequest::std::string> GetPermissionByCodeRequest::getPermissions() const {
  return permissions_;
}

void GetPermissionByCodeRequest::setPermissions(const std::vector<GetPermissionByCodeRequest::std::string> &permissions) {
  permissions_ = permissions;
  for(int dep1 = 0; dep1 != permissions.size(); dep1++) {
    setBodyParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1), permissions[dep1]);
  }
}

std::string GetPermissionByCodeRequest::getProdCode() const {
  return prodCode_;
}

void GetPermissionByCodeRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string GetPermissionByCodeRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void GetPermissionByCodeRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setBodyParameter(std::string("CustSpaceId"), custSpaceId);
}

