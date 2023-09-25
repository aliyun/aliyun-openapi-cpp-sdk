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

#include <alibabacloud/dataworks-public/model/GetDIJobRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetDIJobRequest;

GetDIJobRequest::GetDIJobRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetDIJob") {
  setMethod(HttpRequest::Method::Post);
}

GetDIJobRequest::~GetDIJobRequest() {}

long GetDIJobRequest::getDIJobId() const {
  return dIJobId_;
}

void GetDIJobRequest::setDIJobId(long dIJobId) {
  dIJobId_ = dIJobId;
  setBodyParameter(std::string("DIJobId"), std::to_string(dIJobId));
}

bool GetDIJobRequest::getWithDetails() const {
  return withDetails_;
}

void GetDIJobRequest::setWithDetails(bool withDetails) {
  withDetails_ = withDetails;
  setBodyParameter(std::string("WithDetails"), withDetails ? "true" : "false");
}

