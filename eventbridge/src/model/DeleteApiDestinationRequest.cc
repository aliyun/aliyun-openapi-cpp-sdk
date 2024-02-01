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

#include <alibabacloud/eventbridge/model/DeleteApiDestinationRequest.h>

using AlibabaCloud::Eventbridge::Model::DeleteApiDestinationRequest;

DeleteApiDestinationRequest::DeleteApiDestinationRequest()
    : RpcServiceRequest("eventbridge", "2020-04-01", "DeleteApiDestination") {
  setMethod(HttpRequest::Method::Post);
}

DeleteApiDestinationRequest::~DeleteApiDestinationRequest() {}

std::string DeleteApiDestinationRequest::getClientToken() const {
  return clientToken_;
}

void DeleteApiDestinationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteApiDestinationRequest::getApiDestinationName() const {
  return apiDestinationName_;
}

void DeleteApiDestinationRequest::setApiDestinationName(const std::string &apiDestinationName) {
  apiDestinationName_ = apiDestinationName;
  setParameter(std::string("ApiDestinationName"), apiDestinationName);
}

