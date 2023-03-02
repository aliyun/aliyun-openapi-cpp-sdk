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

#include <alibabacloud/lto/model/AuthorizeDeviceGroupBizChainRequest.h>

using AlibabaCloud::Lto::Model::AuthorizeDeviceGroupBizChainRequest;

AuthorizeDeviceGroupBizChainRequest::AuthorizeDeviceGroupBizChainRequest()
    : RpcServiceRequest("lto", "2021-07-07", "AuthorizeDeviceGroupBizChain") {
  setMethod(HttpRequest::Method::Post);
}

AuthorizeDeviceGroupBizChainRequest::~AuthorizeDeviceGroupBizChainRequest() {}

std::string AuthorizeDeviceGroupBizChainRequest::getBizChainIdList() const {
  return bizChainIdList_;
}

void AuthorizeDeviceGroupBizChainRequest::setBizChainIdList(const std::string &bizChainIdList) {
  bizChainIdList_ = bizChainIdList;
  setParameter(std::string("BizChainIdList"), bizChainIdList);
}

std::string AuthorizeDeviceGroupBizChainRequest::getRegionId() const {
  return regionId_;
}

void AuthorizeDeviceGroupBizChainRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AuthorizeDeviceGroupBizChainRequest::getDeviceGroupId() const {
  return deviceGroupId_;
}

void AuthorizeDeviceGroupBizChainRequest::setDeviceGroupId(const std::string &deviceGroupId) {
  deviceGroupId_ = deviceGroupId;
  setParameter(std::string("DeviceGroupId"), deviceGroupId);
}

