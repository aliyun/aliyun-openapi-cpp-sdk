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

#include <alibabacloud/itag/model/GetModelByIdRequest.h>

using AlibabaCloud::Itag::Model::GetModelByIdRequest;

GetModelByIdRequest::GetModelByIdRequest()
    : RoaServiceRequest("itag", "2021-05-17") {
  setResourcePath("/mng/api/v1/model/queryById"};
  setMethod(HttpRequest::Method::Post);
}

GetModelByIdRequest::~GetModelByIdRequest() {}

std::string GetModelByIdRequest::getBody() const {
  return body_;
}

void GetModelByIdRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

