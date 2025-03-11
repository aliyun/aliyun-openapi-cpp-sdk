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

#include <alibabacloud/drds/model/CreateDrdsInstanceRequest.h>

using AlibabaCloud::Drds::Model::CreateDrdsInstanceRequest;

CreateDrdsInstanceRequest::CreateDrdsInstanceRequest()
    : RpcServiceRequest("drds", "2019-01-23", "CreateDrdsInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateDrdsInstanceRequest::~CreateDrdsInstanceRequest() {}

bool CreateDrdsInstanceRequest::getIsAutoRenew() const {
  return isAutoRenew_;
}

void CreateDrdsInstanceRequest::setIsAutoRenew(bool isAutoRenew) {
  isAutoRenew_ = isAutoRenew;
  setParameter(std::string("IsAutoRenew"), isAutoRenew ? "true" : "false");
}

std::string CreateDrdsInstanceRequest::getClientToken() const {
  return clientToken_;
}

void CreateDrdsInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDrdsInstanceRequest::getDescription() const {
  return description_;
}

void CreateDrdsInstanceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateDrdsInstanceRequest::getType() const {
  return type_;
}

void CreateDrdsInstanceRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string CreateDrdsInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateDrdsInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int CreateDrdsInstanceRequest::getDuration() const {
  return duration_;
}

void CreateDrdsInstanceRequest::setDuration(int duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), std::to_string(duration));
}

std::string CreateDrdsInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateDrdsInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

bool CreateDrdsInstanceRequest::getIsHa() const {
  return isHa_;
}

void CreateDrdsInstanceRequest::setIsHa(bool isHa) {
  isHa_ = isHa;
  setParameter(std::string("isHa"), isHa ? "true" : "false");
}

int CreateDrdsInstanceRequest::getMySQLVersion() const {
  return mySQLVersion_;
}

void CreateDrdsInstanceRequest::setMySQLVersion(int mySQLVersion) {
  mySQLVersion_ = mySQLVersion;
  setParameter(std::string("MySQLVersion"), std::to_string(mySQLVersion));
}

std::string CreateDrdsInstanceRequest::getRegionId() const {
  return regionId_;
}

void CreateDrdsInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDrdsInstanceRequest::getInstanceSeries() const {
  return instanceSeries_;
}

void CreateDrdsInstanceRequest::setInstanceSeries(const std::string &instanceSeries) {
  instanceSeries_ = instanceSeries;
  setParameter(std::string("InstanceSeries"), instanceSeries);
}

std::string CreateDrdsInstanceRequest::getMasterInstId() const {
  return masterInstId_;
}

void CreateDrdsInstanceRequest::setMasterInstId(const std::string &masterInstId) {
  masterInstId_ = masterInstId;
  setParameter(std::string("MasterInstId"), masterInstId);
}

int CreateDrdsInstanceRequest::getQuantity() const {
  return quantity_;
}

void CreateDrdsInstanceRequest::setQuantity(int quantity) {
  quantity_ = quantity;
  setParameter(std::string("Quantity"), std::to_string(quantity));
}

std::string CreateDrdsInstanceRequest::getSpecification() const {
  return specification_;
}

void CreateDrdsInstanceRequest::setSpecification(const std::string &specification) {
  specification_ = specification;
  setParameter(std::string("Specification"), specification);
}

std::string CreateDrdsInstanceRequest::getVswitchId() const {
  return vswitchId_;
}

void CreateDrdsInstanceRequest::setVswitchId(const std::string &vswitchId) {
  vswitchId_ = vswitchId;
  setParameter(std::string("VswitchId"), vswitchId);
}

std::string CreateDrdsInstanceRequest::getVpcId() const {
  return vpcId_;
}

void CreateDrdsInstanceRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CreateDrdsInstanceRequest::getZoneId() const {
  return zoneId_;
}

void CreateDrdsInstanceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateDrdsInstanceRequest::getPayType() const {
  return payType_;
}

void CreateDrdsInstanceRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

std::string CreateDrdsInstanceRequest::getPricingCycle() const {
  return pricingCycle_;
}

void CreateDrdsInstanceRequest::setPricingCycle(const std::string &pricingCycle) {
  pricingCycle_ = pricingCycle;
  setParameter(std::string("PricingCycle"), pricingCycle);
}

