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

#include <alibabacloud/live/model/AddLiveSnapshotNotifyConfigRequest.h>

using AlibabaCloud::Live::Model::AddLiveSnapshotNotifyConfigRequest;

AddLiveSnapshotNotifyConfigRequest::AddLiveSnapshotNotifyConfigRequest()
    : RpcServiceRequest("live", "2016-11-01", "AddLiveSnapshotNotifyConfig") {
  setMethod(HttpRequest::Method::Post);
}

AddLiveSnapshotNotifyConfigRequest::~AddLiveSnapshotNotifyConfigRequest() {}

std::string AddLiveSnapshotNotifyConfigRequest::getNotifyReqAuth() const {
  return notifyReqAuth_;
}

void AddLiveSnapshotNotifyConfigRequest::setNotifyReqAuth(const std::string &notifyReqAuth) {
  notifyReqAuth_ = notifyReqAuth;
  setParameter(std::string("NotifyReqAuth"), notifyReqAuth);
}

std::string AddLiveSnapshotNotifyConfigRequest::getRegionId() const {
  return regionId_;
}

void AddLiveSnapshotNotifyConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddLiveSnapshotNotifyConfigRequest::getNotifyUrl() const {
  return notifyUrl_;
}

void AddLiveSnapshotNotifyConfigRequest::setNotifyUrl(const std::string &notifyUrl) {
  notifyUrl_ = notifyUrl;
  setParameter(std::string("NotifyUrl"), notifyUrl);
}

std::string AddLiveSnapshotNotifyConfigRequest::getDomainName() const {
  return domainName_;
}

void AddLiveSnapshotNotifyConfigRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long AddLiveSnapshotNotifyConfigRequest::getOwnerId() const {
  return ownerId_;
}

void AddLiveSnapshotNotifyConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddLiveSnapshotNotifyConfigRequest::getNotifyAuthKey() const {
  return notifyAuthKey_;
}

void AddLiveSnapshotNotifyConfigRequest::setNotifyAuthKey(const std::string &notifyAuthKey) {
  notifyAuthKey_ = notifyAuthKey;
  setParameter(std::string("NotifyAuthKey"), notifyAuthKey);
}

