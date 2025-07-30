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

#include <alibabacloud/ciomarketpop/model/GetEveryOneSellsFormListRequest.h>

using AlibabaCloud::CioMarketPop::Model::GetEveryOneSellsFormListRequest;

GetEveryOneSellsFormListRequest::GetEveryOneSellsFormListRequest()
    : RpcServiceRequest("ciomarketpop", "2025-07-09", "GetEveryOneSellsFormList") {
  setMethod(HttpRequest::Method::Get);
}

GetEveryOneSellsFormListRequest::~GetEveryOneSellsFormListRequest() {}

std::string GetEveryOneSellsFormListRequest::getAuth() const {
  return auth_;
}

void GetEveryOneSellsFormListRequest::setAuth(const std::string &auth) {
  auth_ = auth;
  setParameter(std::string("Auth"), auth);
}

