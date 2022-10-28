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

#include <alibabacloud/dms-enterprise/model/ListDefaultSLARulesRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListDefaultSLARulesRequest;

ListDefaultSLARulesRequest::ListDefaultSLARulesRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListDefaultSLARules") {
  setMethod(HttpRequest::Method::Post);
}

ListDefaultSLARulesRequest::~ListDefaultSLARulesRequest() {}

long ListDefaultSLARulesRequest::getDagId() const {
  return dagId_;
}

void ListDefaultSLARulesRequest::setDagId(long dagId) {
  dagId_ = dagId;
  setParameter(std::string("DagId"), std::to_string(dagId));
}

long ListDefaultSLARulesRequest::getTid() const {
  return tid_;
}

void ListDefaultSLARulesRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

