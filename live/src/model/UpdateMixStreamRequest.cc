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

#include <alibabacloud/live/model/UpdateMixStreamRequest.h>

using AlibabaCloud::Live::Model::UpdateMixStreamRequest;

UpdateMixStreamRequest::UpdateMixStreamRequest()
    : RpcServiceRequest("live", "2016-11-01", "UpdateMixStream") {
  setMethod(HttpRequest::Method::Post);
}

UpdateMixStreamRequest::~UpdateMixStreamRequest() {}

std::string UpdateMixStreamRequest::getLayoutId() const {
  return layoutId_;
}

void UpdateMixStreamRequest::setLayoutId(const std::string &layoutId) {
  layoutId_ = layoutId;
  setParameter(std::string("LayoutId"), layoutId);
}

std::string UpdateMixStreamRequest::getRegionId() const {
  return regionId_;
}

void UpdateMixStreamRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateMixStreamRequest::getMixStreamId() const {
  return mixStreamId_;
}

void UpdateMixStreamRequest::setMixStreamId(const std::string &mixStreamId) {
  mixStreamId_ = mixStreamId;
  setParameter(std::string("MixStreamId"), mixStreamId);
}

std::string UpdateMixStreamRequest::getDomainName() const {
  return domainName_;
}

void UpdateMixStreamRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string UpdateMixStreamRequest::getInputStreamList() const {
  return inputStreamList_;
}

void UpdateMixStreamRequest::setInputStreamList(const std::string &inputStreamList) {
  inputStreamList_ = inputStreamList;
  setParameter(std::string("InputStreamList"), inputStreamList);
}

long UpdateMixStreamRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateMixStreamRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

