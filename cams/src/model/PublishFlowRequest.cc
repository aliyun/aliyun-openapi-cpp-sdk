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

#include <alibabacloud/cams/model/PublishFlowRequest.h>

using AlibabaCloud::Cams::Model::PublishFlowRequest;

PublishFlowRequest::PublishFlowRequest()
    : RpcServiceRequest("cams", "2020-06-06", "PublishFlow") {
  setMethod(HttpRequest::Method::Post);
}

PublishFlowRequest::~PublishFlowRequest() {}

std::string PublishFlowRequest::getApiCode() const {
  return apiCode_;
}

void PublishFlowRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string PublishFlowRequest::getProdCode() const {
  return prodCode_;
}

void PublishFlowRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string PublishFlowRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void PublishFlowRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setBodyParameter(std::string("CustSpaceId"), custSpaceId);
}

std::string PublishFlowRequest::getFlowId() const {
  return flowId_;
}

void PublishFlowRequest::setFlowId(const std::string &flowId) {
  flowId_ = flowId;
  setBodyParameter(std::string("FlowId"), flowId);
}

