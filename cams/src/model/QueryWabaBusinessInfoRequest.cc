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

#include <alibabacloud/cams/model/QueryWabaBusinessInfoRequest.h>

using AlibabaCloud::Cams::Model::QueryWabaBusinessInfoRequest;

QueryWabaBusinessInfoRequest::QueryWabaBusinessInfoRequest()
    : RpcServiceRequest("cams", "2020-06-06", "QueryWabaBusinessInfo") {
  setMethod(HttpRequest::Method::Post);
}

QueryWabaBusinessInfoRequest::~QueryWabaBusinessInfoRequest() {}

std::string QueryWabaBusinessInfoRequest::getApiCode() const {
  return apiCode_;
}

void QueryWabaBusinessInfoRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string QueryWabaBusinessInfoRequest::getProdCode() const {
  return prodCode_;
}

void QueryWabaBusinessInfoRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string QueryWabaBusinessInfoRequest::getWabaId() const {
  return wabaId_;
}

void QueryWabaBusinessInfoRequest::setWabaId(const std::string &wabaId) {
  wabaId_ = wabaId;
  setParameter(std::string("WabaId"), wabaId);
}

std::string QueryWabaBusinessInfoRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void QueryWabaBusinessInfoRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

