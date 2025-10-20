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

#include <alibabacloud/eiam/model/CreateBrandRequest.h>

using AlibabaCloud::Eiam::Model::CreateBrandRequest;

CreateBrandRequest::CreateBrandRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "CreateBrand") {
  setMethod(HttpRequest::Method::Post);
}

CreateBrandRequest::~CreateBrandRequest() {}

std::string CreateBrandRequest::getBrandName() const {
  return brandName_;
}

void CreateBrandRequest::setBrandName(const std::string &brandName) {
  brandName_ = brandName;
  setParameter(std::string("BrandName"), brandName);
}

std::string CreateBrandRequest::getInstanceId() const {
  return instanceId_;
}

void CreateBrandRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

