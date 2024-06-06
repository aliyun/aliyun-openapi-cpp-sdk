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

#include <alibabacloud/csas/model/RevokeUserSessionRequest.h>

using AlibabaCloud::Csas::Model::RevokeUserSessionRequest;

RevokeUserSessionRequest::RevokeUserSessionRequest()
    : RpcServiceRequest("csas", "2023-01-20", "RevokeUserSession") {
  setMethod(HttpRequest::Method::Post);
}

RevokeUserSessionRequest::~RevokeUserSessionRequest() {}

std::string RevokeUserSessionRequest::getIdpId() const {
  return idpId_;
}

void RevokeUserSessionRequest::setIdpId(const std::string &idpId) {
  idpId_ = idpId;
  setParameter(std::string("IdpId"), idpId);
}

std::string RevokeUserSessionRequest::getExternalIds() const {
  return externalIds_;
}

void RevokeUserSessionRequest::setExternalIds(const std::string &externalIds) {
  externalIds_ = externalIds;
  setParameter(std::string("ExternalIds"), externalIds);
}

