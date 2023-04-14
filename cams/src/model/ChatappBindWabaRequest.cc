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

#include <alibabacloud/cams/model/ChatappBindWabaRequest.h>

using AlibabaCloud::Cams::Model::ChatappBindWabaRequest;

ChatappBindWabaRequest::ChatappBindWabaRequest()
    : RpcServiceRequest("cams", "2020-06-06", "ChatappBindWaba") {
  setMethod(HttpRequest::Method::Post);
}

ChatappBindWabaRequest::~ChatappBindWabaRequest() {}

std::string ChatappBindWabaRequest::getProdCode() const {
  return prodCode_;
}

void ChatappBindWabaRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string ChatappBindWabaRequest::getWabaId() const {
  return wabaId_;
}

void ChatappBindWabaRequest::setWabaId(const std::string &wabaId) {
  wabaId_ = wabaId;
  setBodyParameter(std::string("WabaId"), wabaId);
}

std::string ChatappBindWabaRequest::getApiCode() const {
  return apiCode_;
}

void ChatappBindWabaRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

