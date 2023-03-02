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

#include <alibabacloud/ltl/model/GetBlockChainInfoRequest.h>

using AlibabaCloud::Ltl::Model::GetBlockChainInfoRequest;

GetBlockChainInfoRequest::GetBlockChainInfoRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "GetBlockChainInfo") {
  setMethod(HttpRequest::Method::Post);
}

GetBlockChainInfoRequest::~GetBlockChainInfoRequest() {}

std::string GetBlockChainInfoRequest::getBusinessId() const {
  return businessId_;
}

void GetBlockChainInfoRequest::setBusinessId(const std::string &businessId) {
  businessId_ = businessId;
  setParameter(std::string("BusinessId"), businessId);
}

std::string GetBlockChainInfoRequest::getApiVersion() const {
  return apiVersion_;
}

void GetBlockChainInfoRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string GetBlockChainInfoRequest::getProductKey() const {
  return productKey_;
}

void GetBlockChainInfoRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string GetBlockChainInfoRequest::getKey() const {
  return key_;
}

void GetBlockChainInfoRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

