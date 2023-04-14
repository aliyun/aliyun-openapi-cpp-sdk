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

#include <alibabacloud/cams/model/ChatappSyncPhoneNumberRequest.h>

using AlibabaCloud::Cams::Model::ChatappSyncPhoneNumberRequest;

ChatappSyncPhoneNumberRequest::ChatappSyncPhoneNumberRequest()
    : RpcServiceRequest("cams", "2020-06-06", "ChatappSyncPhoneNumber") {
  setMethod(HttpRequest::Method::Post);
}

ChatappSyncPhoneNumberRequest::~ChatappSyncPhoneNumberRequest() {}

std::string ChatappSyncPhoneNumberRequest::getProdCode() const {
  return prodCode_;
}

void ChatappSyncPhoneNumberRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string ChatappSyncPhoneNumberRequest::getApiCode() const {
  return apiCode_;
}

void ChatappSyncPhoneNumberRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string ChatappSyncPhoneNumberRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void ChatappSyncPhoneNumberRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

