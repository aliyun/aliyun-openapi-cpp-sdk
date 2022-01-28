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

#include <alibabacloud/ens/model/CreateEnsServiceRequest.h>

using AlibabaCloud::Ens::Model::CreateEnsServiceRequest;

CreateEnsServiceRequest::CreateEnsServiceRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateEnsService") {
  setMethod(HttpRequest::Method::Post);
}

CreateEnsServiceRequest::~CreateEnsServiceRequest() {}

std::string CreateEnsServiceRequest::getEnsServiceId() const {
  return ensServiceId_;
}

void CreateEnsServiceRequest::setEnsServiceId(const std::string &ensServiceId) {
  ensServiceId_ = ensServiceId;
  setParameter(std::string("EnsServiceId"), ensServiceId);
}

std::string CreateEnsServiceRequest::getOrderType() const {
  return orderType_;
}

void CreateEnsServiceRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

