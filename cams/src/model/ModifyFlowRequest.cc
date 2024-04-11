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

#include <alibabacloud/cams/model/ModifyFlowRequest.h>

using AlibabaCloud::Cams::Model::ModifyFlowRequest;

ModifyFlowRequest::ModifyFlowRequest()
    : RpcServiceRequest("cams", "2020-06-06", "ModifyFlow") {
  setMethod(HttpRequest::Method::Post);
}

ModifyFlowRequest::~ModifyFlowRequest() {}

std::string ModifyFlowRequest::getApiCode() const {
  return apiCode_;
}

void ModifyFlowRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::vector<ModifyFlowRequest::std::string> ModifyFlowRequest::getCategories() const {
  return categories_;
}

void ModifyFlowRequest::setCategories(const std::vector<ModifyFlowRequest::std::string> &categories) {
  categories_ = categories;
  for(int dep1 = 0; dep1 != categories.size(); dep1++) {
    setBodyParameter(std::string("Categories") + "." + std::to_string(dep1 + 1), categories[dep1]);
  }
}

std::string ModifyFlowRequest::getProdCode() const {
  return prodCode_;
}

void ModifyFlowRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string ModifyFlowRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void ModifyFlowRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setBodyParameter(std::string("CustSpaceId"), custSpaceId);
}

std::string ModifyFlowRequest::getFlowName() const {
  return flowName_;
}

void ModifyFlowRequest::setFlowName(const std::string &flowName) {
  flowName_ = flowName;
  setBodyParameter(std::string("FlowName"), flowName);
}

std::string ModifyFlowRequest::getFlowId() const {
  return flowId_;
}

void ModifyFlowRequest::setFlowId(const std::string &flowId) {
  flowId_ = flowId;
  setBodyParameter(std::string("FlowId"), flowId);
}

