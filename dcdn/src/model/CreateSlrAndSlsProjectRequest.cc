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

#include <alibabacloud/dcdn/model/CreateSlrAndSlsProjectRequest.h>

using AlibabaCloud::Dcdn::Model::CreateSlrAndSlsProjectRequest;

CreateSlrAndSlsProjectRequest::CreateSlrAndSlsProjectRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "CreateSlrAndSlsProject") {
  setMethod(HttpRequest::Method::Post);
}

CreateSlrAndSlsProjectRequest::~CreateSlrAndSlsProjectRequest() {}

std::string CreateSlrAndSlsProjectRequest::getRegion() const {
  return region_;
}

void CreateSlrAndSlsProjectRequest::setRegion(const std::string &region) {
  region_ = region;
  setBodyParameter(std::string("Region"), region);
}

std::string CreateSlrAndSlsProjectRequest::getBusinessType() const {
  return businessType_;
}

void CreateSlrAndSlsProjectRequest::setBusinessType(const std::string &businessType) {
  businessType_ = businessType;
  setBodyParameter(std::string("BusinessType"), businessType);
}

