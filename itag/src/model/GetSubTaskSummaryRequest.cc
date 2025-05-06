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

#include <alibabacloud/itag/model/GetSubTaskSummaryRequest.h>

using AlibabaCloud::Itag::Model::GetSubTaskSummaryRequest;

GetSubTaskSummaryRequest::GetSubTaskSummaryRequest()
    : RoaServiceRequest("itag", "2021-05-17") {
  setResourcePath("/work/api/v1/usersubtask/getSubTaskSummary"};
  setMethod(HttpRequest::Method::Post);
}

GetSubTaskSummaryRequest::~GetSubTaskSummaryRequest() {}

std::string GetSubTaskSummaryRequest::getBody() const {
  return body_;
}

void GetSubTaskSummaryRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

