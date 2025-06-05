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

#include <alibabacloud/dms/model/CreateAirflowLoginTokenRequest.h>

using AlibabaCloud::Dms::Model::CreateAirflowLoginTokenRequest;

CreateAirflowLoginTokenRequest::CreateAirflowLoginTokenRequest()
    : RpcServiceRequest("dms", "2025-04-14", "CreateAirflowLoginToken") {
  setMethod(HttpRequest::Method::Post);
}

CreateAirflowLoginTokenRequest::~CreateAirflowLoginTokenRequest() {}

std::string CreateAirflowLoginTokenRequest::getAirflowId() const {
  return airflowId_;
}

void CreateAirflowLoginTokenRequest::setAirflowId(const std::string &airflowId) {
  airflowId_ = airflowId;
  setParameter(std::string("AirflowId"), airflowId);
}

