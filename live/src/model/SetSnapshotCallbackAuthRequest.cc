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

#include <alibabacloud/live/model/SetSnapshotCallbackAuthRequest.h>

using AlibabaCloud::Live::Model::SetSnapshotCallbackAuthRequest;

SetSnapshotCallbackAuthRequest::SetSnapshotCallbackAuthRequest()
    : RpcServiceRequest("live", "2016-11-01", "SetSnapshotCallbackAuth") {
  setMethod(HttpRequest::Method::Post);
}

SetSnapshotCallbackAuthRequest::~SetSnapshotCallbackAuthRequest() {}

std::string SetSnapshotCallbackAuthRequest::getRegionId() const {
  return regionId_;
}

void SetSnapshotCallbackAuthRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SetSnapshotCallbackAuthRequest::getCallbackAuthKey() const {
  return callbackAuthKey_;
}

void SetSnapshotCallbackAuthRequest::setCallbackAuthKey(const std::string &callbackAuthKey) {
  callbackAuthKey_ = callbackAuthKey;
  setParameter(std::string("CallbackAuthKey"), callbackAuthKey);
}

std::string SetSnapshotCallbackAuthRequest::getDomainName() const {
  return domainName_;
}

void SetSnapshotCallbackAuthRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long SetSnapshotCallbackAuthRequest::getOwnerId() const {
  return ownerId_;
}

void SetSnapshotCallbackAuthRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetSnapshotCallbackAuthRequest::getCallbackReqAuth() const {
  return callbackReqAuth_;
}

void SetSnapshotCallbackAuthRequest::setCallbackReqAuth(const std::string &callbackReqAuth) {
  callbackReqAuth_ = callbackReqAuth;
  setParameter(std::string("CallbackReqAuth"), callbackReqAuth);
}

