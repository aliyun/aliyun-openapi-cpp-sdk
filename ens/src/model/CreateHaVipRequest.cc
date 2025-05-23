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

#include <alibabacloud/ens/model/CreateHaVipRequest.h>

using AlibabaCloud::Ens::Model::CreateHaVipRequest;

CreateHaVipRequest::CreateHaVipRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateHaVip") {
  setMethod(HttpRequest::Method::Post);
}

CreateHaVipRequest::~CreateHaVipRequest() {}

std::string CreateHaVipRequest::getIpAddress() const {
  return ipAddress_;
}

void CreateHaVipRequest::setIpAddress(const std::string &ipAddress) {
  ipAddress_ = ipAddress;
  setParameter(std::string("IpAddress"), ipAddress);
}

std::string CreateHaVipRequest::getDescription() const {
  return description_;
}

void CreateHaVipRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int CreateHaVipRequest::getAmount() const {
  return amount_;
}

void CreateHaVipRequest::setAmount(int amount) {
  amount_ = amount;
  setParameter(std::string("Amount"), std::to_string(amount));
}

std::string CreateHaVipRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateHaVipRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateHaVipRequest::getName() const {
  return name_;
}

void CreateHaVipRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

