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

#include <alibabacloud/dataworks-public/model/UpdateConnectionRequest.h>

using AlibabaCloud::Dataworks_public::Model::UpdateConnectionRequest;

UpdateConnectionRequest::UpdateConnectionRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "UpdateConnection") {
  setMethod(HttpRequest::Method::Put);
}

UpdateConnectionRequest::~UpdateConnectionRequest() {}

std::string UpdateConnectionRequest::getDescription() const {
  return description_;
}

void UpdateConnectionRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateConnectionRequest::getContent() const {
  return content_;
}

void UpdateConnectionRequest::setContent(const std::string &content) {
  content_ = content;
  setParameter(std::string("Content"), content);
}

int UpdateConnectionRequest::getEnvType() const {
  return envType_;
}

void UpdateConnectionRequest::setEnvType(int envType) {
  envType_ = envType;
  setParameter(std::string("EnvType"), std::to_string(envType));
}

long UpdateConnectionRequest::getConnectionId() const {
  return connectionId_;
}

void UpdateConnectionRequest::setConnectionId(long connectionId) {
  connectionId_ = connectionId;
  setParameter(std::string("ConnectionId"), std::to_string(connectionId));
}

std::string UpdateConnectionRequest::getStatus() const {
  return status_;
}

void UpdateConnectionRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

