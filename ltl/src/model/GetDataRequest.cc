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

#include <alibabacloud/ltl/model/GetDataRequest.h>

using AlibabaCloud::Ltl::Model::GetDataRequest;

GetDataRequest::GetDataRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "GetData") {
  setMethod(HttpRequest::Method::Post);
}

GetDataRequest::~GetDataRequest() {}

std::string GetDataRequest::getBusinessId() const {
  return businessId_;
}

void GetDataRequest::setBusinessId(const std::string &businessId) {
  businessId_ = businessId;
  setParameter(std::string("BusinessId"), businessId);
}

std::string GetDataRequest::getApiVersion() const {
  return apiVersion_;
}

void GetDataRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string GetDataRequest::getProductKey() const {
  return productKey_;
}

void GetDataRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string GetDataRequest::getKey() const {
  return key_;
}

void GetDataRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

