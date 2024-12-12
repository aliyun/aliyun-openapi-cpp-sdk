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

#include <alibabacloud/dms-enterprise/model/ExecuteDataExportRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ExecuteDataExportRequest;

ExecuteDataExportRequest::ExecuteDataExportRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ExecuteDataExport") {
  setMethod(HttpRequest::Method::Post);
}

ExecuteDataExportRequest::~ExecuteDataExportRequest() {}

long ExecuteDataExportRequest::getTid() const {
  return tid_;
}

void ExecuteDataExportRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::map<std::string, std::string> ExecuteDataExportRequest::getActionDetail() const {
  return actionDetail_;
}

void ExecuteDataExportRequest::setActionDetail(std::map<std::string, std::string> actionDetail) {
  actionDetail_ = actionDetail;
  setParameter(std::string("ActionDetail"), actionDetail);
}

long ExecuteDataExportRequest::getOrderId() const {
  return orderId_;
}

void ExecuteDataExportRequest::setOrderId(long orderId) {
  orderId_ = orderId;
  setParameter(std::string("OrderId"), std::to_string(orderId));
}

std::string ExecuteDataExportRequest::getActionName() const {
  return actionName_;
}

void ExecuteDataExportRequest::setActionName(const std::string &actionName) {
  actionName_ = actionName;
  setParameter(std::string("ActionName"), actionName);
}

std::string ExecuteDataExportRequest::getRealLoginUserUid() const {
  return realLoginUserUid_;
}

void ExecuteDataExportRequest::setRealLoginUserUid(const std::string &realLoginUserUid) {
  realLoginUserUid_ = realLoginUserUid;
  setParameter(std::string("RealLoginUserUid"), realLoginUserUid);
}

