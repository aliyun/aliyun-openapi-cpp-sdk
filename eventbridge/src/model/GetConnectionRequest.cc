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

#include <alibabacloud/eventbridge/model/GetConnectionRequest.h>

using AlibabaCloud::Eventbridge::Model::GetConnectionRequest;

GetConnectionRequest::GetConnectionRequest()
    : RpcServiceRequest("eventbridge", "2020-04-01", "GetConnection") {
  setMethod(HttpRequest::Method::Post);
}

GetConnectionRequest::~GetConnectionRequest() {}

std::string GetConnectionRequest::getConnectionName() const {
  return connectionName_;
}

void GetConnectionRequest::setConnectionName(const std::string &connectionName) {
  connectionName_ = connectionName;
  setParameter(std::string("ConnectionName"), connectionName);
}

