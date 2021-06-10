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

#include <alibabacloud/dms-enterprise/model/ListIndexesRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListIndexesRequest;

ListIndexesRequest::ListIndexesRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListIndexes") {
  setMethod(HttpRequest::Method::Post);
}

ListIndexesRequest::~ListIndexesRequest() {}

long ListIndexesRequest::getTid() const {
  return tid_;
}

void ListIndexesRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string ListIndexesRequest::getTableId() const {
  return tableId_;
}

void ListIndexesRequest::setTableId(const std::string &tableId) {
  tableId_ = tableId;
  setParameter(std::string("TableId"), tableId);
}

bool ListIndexesRequest::getLogic() const {
  return logic_;
}

void ListIndexesRequest::setLogic(bool logic) {
  logic_ = logic;
  setParameter(std::string("Logic"), logic ? "true" : "false");
}

