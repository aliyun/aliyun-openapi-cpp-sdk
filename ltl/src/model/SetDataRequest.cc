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

#include <alibabacloud/ltl/model/SetDataRequest.h>

using AlibabaCloud::Ltl::Model::SetDataRequest;

SetDataRequest::SetDataRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "SetData") {
  setMethod(HttpRequest::Method::Post);
}

SetDataRequest::~SetDataRequest() {}

std::string SetDataRequest::getApiVersion() const {
  return apiVersion_;
}

void SetDataRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string SetDataRequest::getProductKey() const {
  return productKey_;
}

void SetDataRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string SetDataRequest::getValue() const {
  return value_;
}

void SetDataRequest::setValue(const std::string &value) {
  value_ = value;
  setParameter(std::string("Value"), value);
}

std::string SetDataRequest::getKey() const {
  return key_;
}

void SetDataRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

