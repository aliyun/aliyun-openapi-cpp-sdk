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

#include <alibabacloud/cas/model/UpdateCACertificateStatusRequest.h>

using AlibabaCloud::Cas::Model::UpdateCACertificateStatusRequest;

UpdateCACertificateStatusRequest::UpdateCACertificateStatusRequest()
    : RpcServiceRequest("cas", "2020-06-30", "UpdateCACertificateStatus") {
  setMethod(HttpRequest::Method::Post);
}

UpdateCACertificateStatusRequest::~UpdateCACertificateStatusRequest() {}

std::string UpdateCACertificateStatusRequest::getIdentifier() const {
  return identifier_;
}

void UpdateCACertificateStatusRequest::setIdentifier(const std::string &identifier) {
  identifier_ = identifier;
  setParameter(std::string("Identifier"), identifier);
}

std::string UpdateCACertificateStatusRequest::getClientToken() const {
  return clientToken_;
}

void UpdateCACertificateStatusRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateCACertificateStatusRequest::getStatus() const {
  return status_;
}

void UpdateCACertificateStatusRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

