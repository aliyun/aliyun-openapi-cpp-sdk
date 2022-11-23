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

#include <alibabacloud/dms-enterprise/model/GetDataCorrectSQLFileRequest.h>

using AlibabaCloud::Dms_enterprise::Model::GetDataCorrectSQLFileRequest;

GetDataCorrectSQLFileRequest::GetDataCorrectSQLFileRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "GetDataCorrectSQLFile") {
  setMethod(HttpRequest::Method::Post);
}

GetDataCorrectSQLFileRequest::~GetDataCorrectSQLFileRequest() {}

long GetDataCorrectSQLFileRequest::getTid() const {
  return tid_;
}

void GetDataCorrectSQLFileRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long GetDataCorrectSQLFileRequest::getOrderId() const {
  return orderId_;
}

void GetDataCorrectSQLFileRequest::setOrderId(long orderId) {
  orderId_ = orderId;
  setParameter(std::string("OrderId"), std::to_string(orderId));
}

std::string GetDataCorrectSQLFileRequest::getOrderActionName() const {
  return orderActionName_;
}

void GetDataCorrectSQLFileRequest::setOrderActionName(const std::string &orderActionName) {
  orderActionName_ = orderActionName;
  setParameter(std::string("OrderActionName"), orderActionName);
}

