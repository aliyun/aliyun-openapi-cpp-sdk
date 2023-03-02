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

#include <alibabacloud/ltl/model/ApplyDataModelConfigInfoRequest.h>

using AlibabaCloud::Ltl::Model::ApplyDataModelConfigInfoRequest;

ApplyDataModelConfigInfoRequest::ApplyDataModelConfigInfoRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "ApplyDataModelConfigInfo") {
  setMethod(HttpRequest::Method::Post);
}

ApplyDataModelConfigInfoRequest::~ApplyDataModelConfigInfoRequest() {}

std::string ApplyDataModelConfigInfoRequest::getConfiguration() const {
  return configuration_;
}

void ApplyDataModelConfigInfoRequest::setConfiguration(const std::string &configuration) {
  configuration_ = configuration;
  setParameter(std::string("Configuration"), configuration);
}

std::string ApplyDataModelConfigInfoRequest::getApiVersion() const {
  return apiVersion_;
}

void ApplyDataModelConfigInfoRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string ApplyDataModelConfigInfoRequest::getProductKey() const {
  return productKey_;
}

void ApplyDataModelConfigInfoRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string ApplyDataModelConfigInfoRequest::getDataModelCode() const {
  return dataModelCode_;
}

void ApplyDataModelConfigInfoRequest::setDataModelCode(const std::string &dataModelCode) {
  dataModelCode_ = dataModelCode;
  setParameter(std::string("DataModelCode"), dataModelCode);
}

