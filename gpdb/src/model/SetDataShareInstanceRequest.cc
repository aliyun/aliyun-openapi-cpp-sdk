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

#include <alibabacloud/gpdb/model/SetDataShareInstanceRequest.h>

using AlibabaCloud::Gpdb::Model::SetDataShareInstanceRequest;

SetDataShareInstanceRequest::SetDataShareInstanceRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "SetDataShareInstance") {
  setMethod(HttpRequest::Method::Post);
}

SetDataShareInstanceRequest::~SetDataShareInstanceRequest() {}

std::string SetDataShareInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SetDataShareInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SetDataShareInstanceRequest::getRegionId() const {
  return regionId_;
}

void SetDataShareInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<SetDataShareInstanceRequest::std::string> SetDataShareInstanceRequest::getInstanceList() const {
  return instanceList_;
}

void SetDataShareInstanceRequest::setInstanceList(const std::vector<SetDataShareInstanceRequest::std::string> &instanceList) {
  instanceList_ = instanceList;
  for(int dep1 = 0; dep1 != instanceList.size(); dep1++) {
    setParameter(std::string("InstanceList") + "." + std::to_string(dep1 + 1), instanceList[dep1]);
  }
}

std::string SetDataShareInstanceRequest::getOperationType() const {
  return operationType_;
}

void SetDataShareInstanceRequest::setOperationType(const std::string &operationType) {
  operationType_ = operationType;
  setParameter(std::string("OperationType"), operationType);
}

long SetDataShareInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void SetDataShareInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

