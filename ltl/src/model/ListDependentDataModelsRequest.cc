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

#include <alibabacloud/ltl/model/ListDependentDataModelsRequest.h>

using AlibabaCloud::Ltl::Model::ListDependentDataModelsRequest;

ListDependentDataModelsRequest::ListDependentDataModelsRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "ListDependentDataModels") {
  setMethod(HttpRequest::Method::Post);
}

ListDependentDataModelsRequest::~ListDependentDataModelsRequest() {}

std::string ListDependentDataModelsRequest::getApiVersion() const {
  return apiVersion_;
}

void ListDependentDataModelsRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string ListDependentDataModelsRequest::getProductKey() const {
  return productKey_;
}

void ListDependentDataModelsRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

