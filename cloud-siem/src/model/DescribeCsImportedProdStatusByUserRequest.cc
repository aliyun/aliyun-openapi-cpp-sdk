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

#include <alibabacloud/cloud-siem/model/DescribeCsImportedProdStatusByUserRequest.h>

using AlibabaCloud::Cloud_siem::Model::DescribeCsImportedProdStatusByUserRequest;

DescribeCsImportedProdStatusByUserRequest::DescribeCsImportedProdStatusByUserRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "DescribeCsImportedProdStatusByUser") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCsImportedProdStatusByUserRequest::~DescribeCsImportedProdStatusByUserRequest() {}

long DescribeCsImportedProdStatusByUserRequest::getUserId() const {
  return userId_;
}

void DescribeCsImportedProdStatusByUserRequest::setUserId(long userId) {
  userId_ = userId;
  setBodyParameter(std::string("UserId"), std::to_string(userId));
}

std::string DescribeCsImportedProdStatusByUserRequest::getRegionId() const {
  return regionId_;
}

void DescribeCsImportedProdStatusByUserRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string DescribeCsImportedProdStatusByUserRequest::getSourceLogProd() const {
  return sourceLogProd_;
}

void DescribeCsImportedProdStatusByUserRequest::setSourceLogProd(const std::string &sourceLogProd) {
  sourceLogProd_ = sourceLogProd;
  setBodyParameter(std::string("SourceLogProd"), sourceLogProd);
}

