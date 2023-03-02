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

#include <alibabacloud/lto/model/ListRouteRuleRequest.h>

using AlibabaCloud::Lto::Model::ListRouteRuleRequest;

ListRouteRuleRequest::ListRouteRuleRequest()
    : RpcServiceRequest("lto", "2021-07-07", "ListRouteRule") {
  setMethod(HttpRequest::Method::Post);
}

ListRouteRuleRequest::~ListRouteRuleRequest() {}

int ListRouteRuleRequest::getNum() const {
  return num_;
}

void ListRouteRuleRequest::setNum(int num) {
  num_ = num;
  setParameter(std::string("Num"), std::to_string(num));
}

std::string ListRouteRuleRequest::getBizChainName() const {
  return bizChainName_;
}

void ListRouteRuleRequest::setBizChainName(const std::string &bizChainName) {
  bizChainName_ = bizChainName;
  setParameter(std::string("BizChainName"), bizChainName);
}

int ListRouteRuleRequest::getSize() const {
  return size_;
}

void ListRouteRuleRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

std::string ListRouteRuleRequest::getRegionId() const {
  return regionId_;
}

void ListRouteRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListRouteRuleRequest::getDeviceGroupName() const {
  return deviceGroupName_;
}

void ListRouteRuleRequest::setDeviceGroupName(const std::string &deviceGroupName) {
  deviceGroupName_ = deviceGroupName;
  setParameter(std::string("DeviceGroupName"), deviceGroupName);
}

std::string ListRouteRuleRequest::getChainUpMode() const {
  return chainUpMode_;
}

void ListRouteRuleRequest::setChainUpMode(const std::string &chainUpMode) {
  chainUpMode_ = chainUpMode;
  setParameter(std::string("ChainUpMode"), chainUpMode);
}

