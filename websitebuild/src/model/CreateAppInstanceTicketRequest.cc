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

#include <alibabacloud/websitebuild/model/CreateAppInstanceTicketRequest.h>

using AlibabaCloud::WebsiteBuild::Model::CreateAppInstanceTicketRequest;

CreateAppInstanceTicketRequest::CreateAppInstanceTicketRequest()
    : RpcServiceRequest("websitebuild", "2025-04-29", "CreateAppInstanceTicket") {
  setMethod(HttpRequest::Method::Post);
}

CreateAppInstanceTicketRequest::~CreateAppInstanceTicketRequest() {}

std::string CreateAppInstanceTicketRequest::getClientId() const {
  return clientId_;
}

void CreateAppInstanceTicketRequest::setClientId(const std::string &clientId) {
  clientId_ = clientId;
  setParameter(std::string("ClientId"), clientId);
}

std::string CreateAppInstanceTicketRequest::getBizId() const {
  return bizId_;
}

void CreateAppInstanceTicketRequest::setBizId(const std::string &bizId) {
  bizId_ = bizId;
  setParameter(std::string("BizId"), bizId);
}

