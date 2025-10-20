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

#include <alibabacloud/eiam/model/SetLoginRedirectApplicationForBrandRequest.h>

using AlibabaCloud::Eiam::Model::SetLoginRedirectApplicationForBrandRequest;

SetLoginRedirectApplicationForBrandRequest::SetLoginRedirectApplicationForBrandRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "SetLoginRedirectApplicationForBrand") {
  setMethod(HttpRequest::Method::Post);
}

SetLoginRedirectApplicationForBrandRequest::~SetLoginRedirectApplicationForBrandRequest() {}

std::string SetLoginRedirectApplicationForBrandRequest::getBrandId() const {
  return brandId_;
}

void SetLoginRedirectApplicationForBrandRequest::setBrandId(const std::string &brandId) {
  brandId_ = brandId;
  setParameter(std::string("BrandId"), brandId);
}

std::string SetLoginRedirectApplicationForBrandRequest::getApplicationId() const {
  return applicationId_;
}

void SetLoginRedirectApplicationForBrandRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::string SetLoginRedirectApplicationForBrandRequest::getInstanceId() const {
  return instanceId_;
}

void SetLoginRedirectApplicationForBrandRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

