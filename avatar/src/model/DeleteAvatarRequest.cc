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

#include <alibabacloud/avatar/model/DeleteAvatarRequest.h>

using AlibabaCloud::Avatar::Model::DeleteAvatarRequest;

DeleteAvatarRequest::DeleteAvatarRequest()
    : RpcServiceRequest("avatar", "2022-01-30", "DeleteAvatar") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAvatarRequest::~DeleteAvatarRequest() {}

std::string DeleteAvatarRequest::getCode() const {
  return code_;
}

void DeleteAvatarRequest::setCode(const std::string &code) {
  code_ = code;
  setParameter(std::string("Code"), code);
}

long DeleteAvatarRequest::getTenantId() const {
  return tenantId_;
}

void DeleteAvatarRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setParameter(std::string("TenantId"), std::to_string(tenantId));
}

std::string DeleteAvatarRequest::getExtParams_CLS() const {
  return extParams_CLS_;
}

void DeleteAvatarRequest::setExtParams_CLS(const std::string &extParams_CLS) {
  extParams_CLS_ = extParams_CLS;
  setParameter(std::string("ExtParams_CLS"), extParams_CLS);
}

std::string DeleteAvatarRequest::getExtParams() const {
  return extParams_;
}

void DeleteAvatarRequest::setExtParams(const std::string &extParams) {
  extParams_ = extParams;
  setParameter(std::string("ExtParams"), extParams);
}

