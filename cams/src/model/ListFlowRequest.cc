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

#include <alibabacloud/cams/model/ListFlowRequest.h>

using AlibabaCloud::Cams::Model::ListFlowRequest;

ListFlowRequest::ListFlowRequest()
    : RpcServiceRequest("cams", "2020-06-06", "ListFlow") {
  setMethod(HttpRequest::Method::Post);
}

ListFlowRequest::~ListFlowRequest() {}

std::string ListFlowRequest::getApiCode() const {
  return apiCode_;
}

void ListFlowRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string ListFlowRequest::getProdCode() const {
  return prodCode_;
}

void ListFlowRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string ListFlowRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void ListFlowRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setBodyParameter(std::string("CustSpaceId"), custSpaceId);
}

std::string ListFlowRequest::getFlowName() const {
  return flowName_;
}

void ListFlowRequest::setFlowName(const std::string &flowName) {
  flowName_ = flowName;
  setBodyParameter(std::string("FlowName"), flowName);
}

ListFlowRequest::Page ListFlowRequest::getPage() const {
  return page_;
}

void ListFlowRequest::setPage(const ListFlowRequest::Page &page) {
  page_ = page;
  setBodyParameter(std::string("Page") + ".Size", std::to_string(page.size));
  setBodyParameter(std::string("Page") + ".Index", std::to_string(page.index));
}

