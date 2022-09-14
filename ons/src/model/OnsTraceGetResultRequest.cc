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

#include <alibabacloud/ons/model/OnsTraceGetResultRequest.h>

using AlibabaCloud::Ons::Model::OnsTraceGetResultRequest;

OnsTraceGetResultRequest::OnsTraceGetResultRequest()
    : RpcServiceRequest("ons", "2019-02-14", "OnsTraceGetResult") {
  setMethod(HttpRequest::Method::Post);
}

OnsTraceGetResultRequest::~OnsTraceGetResultRequest() {}

std::string OnsTraceGetResultRequest::getQueryId() const {
  return queryId_;
}

void OnsTraceGetResultRequest::setQueryId(const std::string &queryId) {
  queryId_ = queryId;
  setParameter(std::string("QueryId"), queryId);
}

