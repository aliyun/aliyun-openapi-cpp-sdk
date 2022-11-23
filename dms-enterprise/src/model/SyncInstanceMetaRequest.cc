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

#include <alibabacloud/dms-enterprise/model/SyncInstanceMetaRequest.h>

using AlibabaCloud::Dms_enterprise::Model::SyncInstanceMetaRequest;

SyncInstanceMetaRequest::SyncInstanceMetaRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "SyncInstanceMeta") {
  setMethod(HttpRequest::Method::Post);
}

SyncInstanceMetaRequest::~SyncInstanceMetaRequest() {}

long SyncInstanceMetaRequest::getTid() const {
  return tid_;
}

void SyncInstanceMetaRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

bool SyncInstanceMetaRequest::getIgnoreTable() const {
  return ignoreTable_;
}

void SyncInstanceMetaRequest::setIgnoreTable(bool ignoreTable) {
  ignoreTable_ = ignoreTable;
  setParameter(std::string("IgnoreTable"), ignoreTable ? "true" : "false");
}

std::string SyncInstanceMetaRequest::getInstanceId() const {
  return instanceId_;
}

void SyncInstanceMetaRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

