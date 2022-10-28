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

#include <alibabacloud/dms-enterprise/model/GetTableTopologyRequest.h>

using AlibabaCloud::Dms_enterprise::Model::GetTableTopologyRequest;

GetTableTopologyRequest::GetTableTopologyRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "GetTableTopology") {
  setMethod(HttpRequest::Method::Post);
}

GetTableTopologyRequest::~GetTableTopologyRequest() {}

long GetTableTopologyRequest::getTid() const {
  return tid_;
}

void GetTableTopologyRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string GetTableTopologyRequest::getTableGuid() const {
  return tableGuid_;
}

void GetTableTopologyRequest::setTableGuid(const std::string &tableGuid) {
  tableGuid_ = tableGuid;
  setParameter(std::string("TableGuid"), tableGuid);
}

