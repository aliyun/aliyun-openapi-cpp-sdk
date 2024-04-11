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

#include <alibabacloud/cams/model/GetFlowJSONAssestRequest.h>

using AlibabaCloud::Cams::Model::GetFlowJSONAssestRequest;

GetFlowJSONAssestRequest::GetFlowJSONAssestRequest()
    : RpcServiceRequest("cams", "2020-06-06", "GetFlowJSONAssest") {
  setMethod(HttpRequest::Method::Post);
}

GetFlowJSONAssestRequest::~GetFlowJSONAssestRequest() {}

std::string GetFlowJSONAssestRequest::getApiCode() const {
  return apiCode_;
}

void GetFlowJSONAssestRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string GetFlowJSONAssestRequest::getProdCode() const {
  return prodCode_;
}

void GetFlowJSONAssestRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string GetFlowJSONAssestRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void GetFlowJSONAssestRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setBodyParameter(std::string("CustSpaceId"), custSpaceId);
}

std::string GetFlowJSONAssestRequest::getFlowId() const {
  return flowId_;
}

void GetFlowJSONAssestRequest::setFlowId(const std::string &flowId) {
  flowId_ = flowId;
  setBodyParameter(std::string("FlowId"), flowId);
}

