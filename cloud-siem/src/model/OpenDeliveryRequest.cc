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

#include <alibabacloud/cloud-siem/model/OpenDeliveryRequest.h>

using AlibabaCloud::Cloud_siem::Model::OpenDeliveryRequest;

OpenDeliveryRequest::OpenDeliveryRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "OpenDelivery") {
  setMethod(HttpRequest::Method::Post);
}

OpenDeliveryRequest::~OpenDeliveryRequest() {}

std::string OpenDeliveryRequest::getProductCode() const {
  return productCode_;
}

void OpenDeliveryRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setBodyParameter(std::string("ProductCode"), productCode);
}

std::string OpenDeliveryRequest::getLogCode() const {
  return logCode_;
}

void OpenDeliveryRequest::setLogCode(const std::string &logCode) {
  logCode_ = logCode;
  setBodyParameter(std::string("LogCode"), logCode);
}

std::string OpenDeliveryRequest::getRegionId() const {
  return regionId_;
}

void OpenDeliveryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

