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

#include <alibabacloud/market/model/DescribeLicenseRequest.h>

using AlibabaCloud::Market::Model::DescribeLicenseRequest;

DescribeLicenseRequest::DescribeLicenseRequest()
    : RpcServiceRequest("market", "2015-11-01", "DescribeLicense") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLicenseRequest::~DescribeLicenseRequest() {}

std::string DescribeLicenseRequest::getLicenseCode() const {
  return licenseCode_;
}

void DescribeLicenseRequest::setLicenseCode(const std::string &licenseCode) {
  licenseCode_ = licenseCode;
  setParameter(std::string("LicenseCode"), licenseCode);
}

