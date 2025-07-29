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

#include <alibabacloud/live/model/UpdateLiveSnapshotNotifyConfigRequest.h>

using AlibabaCloud::Live::Model::UpdateLiveSnapshotNotifyConfigRequest;

UpdateLiveSnapshotNotifyConfigRequest::UpdateLiveSnapshotNotifyConfigRequest()
    : RpcServiceRequest("live", "2016-11-01", "UpdateLiveSnapshotNotifyConfig") {
  setMethod(HttpRequest::Method::Post);
}

UpdateLiveSnapshotNotifyConfigRequest::~UpdateLiveSnapshotNotifyConfigRequest() {}

std::string UpdateLiveSnapshotNotifyConfigRequest::getNotifyReqAuth() const {
  return notifyReqAuth_;
}

void UpdateLiveSnapshotNotifyConfigRequest::setNotifyReqAuth(const std::string &notifyReqAuth) {
  notifyReqAuth_ = notifyReqAuth;
  setParameter(std::string("NotifyReqAuth"), notifyReqAuth);
}

std::string UpdateLiveSnapshotNotifyConfigRequest::getRegionId() const {
  return regionId_;
}

void UpdateLiveSnapshotNotifyConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateLiveSnapshotNotifyConfigRequest::getNotifyUrl() const {
  return notifyUrl_;
}

void UpdateLiveSnapshotNotifyConfigRequest::setNotifyUrl(const std::string &notifyUrl) {
  notifyUrl_ = notifyUrl;
  setParameter(std::string("NotifyUrl"), notifyUrl);
}

std::string UpdateLiveSnapshotNotifyConfigRequest::getDomainName() const {
  return domainName_;
}

void UpdateLiveSnapshotNotifyConfigRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long UpdateLiveSnapshotNotifyConfigRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateLiveSnapshotNotifyConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateLiveSnapshotNotifyConfigRequest::getNotifyAuthKey() const {
  return notifyAuthKey_;
}

void UpdateLiveSnapshotNotifyConfigRequest::setNotifyAuthKey(const std::string &notifyAuthKey) {
  notifyAuthKey_ = notifyAuthKey;
  setParameter(std::string("NotifyAuthKey"), notifyAuthKey);
}

