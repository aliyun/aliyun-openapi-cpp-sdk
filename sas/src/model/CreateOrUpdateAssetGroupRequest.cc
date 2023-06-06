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

#include <alibabacloud/sas/model/CreateOrUpdateAssetGroupRequest.h>

using AlibabaCloud::Sas::Model::CreateOrUpdateAssetGroupRequest;

CreateOrUpdateAssetGroupRequest::CreateOrUpdateAssetGroupRequest()
    : RpcServiceRequest("sas", "2018-12-03", "CreateOrUpdateAssetGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateOrUpdateAssetGroupRequest::~CreateOrUpdateAssetGroupRequest() {}

std::string CreateOrUpdateAssetGroupRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateOrUpdateAssetGroupRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long CreateOrUpdateAssetGroupRequest::getGroupId() const {
  return groupId_;
}

void CreateOrUpdateAssetGroupRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

std::string CreateOrUpdateAssetGroupRequest::getGroupName() const {
  return groupName_;
}

void CreateOrUpdateAssetGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string CreateOrUpdateAssetGroupRequest::getUuids() const {
  return uuids_;
}

void CreateOrUpdateAssetGroupRequest::setUuids(const std::string &uuids) {
  uuids_ = uuids;
  setParameter(std::string("Uuids"), uuids);
}

