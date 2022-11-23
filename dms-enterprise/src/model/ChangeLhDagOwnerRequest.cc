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

#include <alibabacloud/dms-enterprise/model/ChangeLhDagOwnerRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ChangeLhDagOwnerRequest;

ChangeLhDagOwnerRequest::ChangeLhDagOwnerRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ChangeLhDagOwner") {
  setMethod(HttpRequest::Method::Post);
}

ChangeLhDagOwnerRequest::~ChangeLhDagOwnerRequest() {}

long ChangeLhDagOwnerRequest::getDagId() const {
  return dagId_;
}

void ChangeLhDagOwnerRequest::setDagId(long dagId) {
  dagId_ = dagId;
  setParameter(std::string("DagId"), std::to_string(dagId));
}

long ChangeLhDagOwnerRequest::getTid() const {
  return tid_;
}

void ChangeLhDagOwnerRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long ChangeLhDagOwnerRequest::getOwnerUserId() const {
  return ownerUserId_;
}

void ChangeLhDagOwnerRequest::setOwnerUserId(long ownerUserId) {
  ownerUserId_ = ownerUserId;
  setParameter(std::string("OwnerUserId"), std::to_string(ownerUserId));
}

