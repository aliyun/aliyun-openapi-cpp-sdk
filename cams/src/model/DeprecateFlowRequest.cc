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

#include <alibabacloud/cams/model/DeprecateFlowRequest.h>

using AlibabaCloud::Cams::Model::DeprecateFlowRequest;

DeprecateFlowRequest::DeprecateFlowRequest()
    : RpcServiceRequest("cams", "2020-06-06", "DeprecateFlow") {
  setMethod(HttpRequest::Method::Post);
}

DeprecateFlowRequest::~DeprecateFlowRequest() {}

std::string DeprecateFlowRequest::getApiCode() const {
  return apiCode_;
}

void DeprecateFlowRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string DeprecateFlowRequest::getProdCode() const {
  return prodCode_;
}

void DeprecateFlowRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string DeprecateFlowRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void DeprecateFlowRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setBodyParameter(std::string("CustSpaceId"), custSpaceId);
}

std::string DeprecateFlowRequest::getFlowId() const {
  return flowId_;
}

void DeprecateFlowRequest::setFlowId(const std::string &flowId) {
  flowId_ = flowId;
  setBodyParameter(std::string("FlowId"), flowId);
}

