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

#include <alibabacloud/wfts/model/GetLjxAccountInfoRequest.h>

using AlibabaCloud::Wfts::Model::GetLjxAccountInfoRequest;

GetLjxAccountInfoRequest::GetLjxAccountInfoRequest()
    : RoaServiceRequest("wfts", "2022-02-12") {
  setResourcePath("/get/ljx/acc"};
  setMethod(HttpRequest::Method::Get);
}

GetLjxAccountInfoRequest::~GetLjxAccountInfoRequest() {}

string GetLjxAccountInfoRequest::getLjxAccountInfoId() const {
  return ljxAccountInfoId_;
}

void GetLjxAccountInfoRequest::setLjxAccountInfoId(string ljxAccountInfoId) {
  ljxAccountInfoId_ = ljxAccountInfoId;
  setParameter(std::string("LjxAccountInfoId"), std::to_string(ljxAccountInfoId));
}

