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

#include <alibabacloud/dms-enterprise/model/DeleteLogicTableRouteConfigRequest.h>

using AlibabaCloud::Dms_enterprise::Model::DeleteLogicTableRouteConfigRequest;

DeleteLogicTableRouteConfigRequest::DeleteLogicTableRouteConfigRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "DeleteLogicTableRouteConfig") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLogicTableRouteConfigRequest::~DeleteLogicTableRouteConfigRequest() {}

long DeleteLogicTableRouteConfigRequest::getTid() const {
  return tid_;
}

void DeleteLogicTableRouteConfigRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long DeleteLogicTableRouteConfigRequest::getTableId() const {
  return tableId_;
}

void DeleteLogicTableRouteConfigRequest::setTableId(long tableId) {
  tableId_ = tableId;
  setParameter(std::string("TableId"), std::to_string(tableId));
}

std::string DeleteLogicTableRouteConfigRequest::getRouteKey() const {
  return routeKey_;
}

void DeleteLogicTableRouteConfigRequest::setRouteKey(const std::string &routeKey) {
  routeKey_ = routeKey;
  setParameter(std::string("RouteKey"), routeKey);
}

