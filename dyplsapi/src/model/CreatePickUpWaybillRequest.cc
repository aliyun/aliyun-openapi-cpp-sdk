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

#include <alibabacloud/dyplsapi/model/CreatePickUpWaybillRequest.h>

using AlibabaCloud::Dyplsapi::Model::CreatePickUpWaybillRequest;

CreatePickUpWaybillRequest::CreatePickUpWaybillRequest()
    : RpcServiceRequest("dyplsapi", "2017-05-25", "CreatePickUpWaybill") {
  setMethod(HttpRequest::Method::Post);
}

CreatePickUpWaybillRequest::~CreatePickUpWaybillRequest() {}

std::string CreatePickUpWaybillRequest::getConsigneeName() const {
  return consigneeName_;
}

void CreatePickUpWaybillRequest::setConsigneeName(const std::string &consigneeName) {
  consigneeName_ = consigneeName;
  setParameter(std::string("ConsigneeName"), consigneeName);
}

std::string CreatePickUpWaybillRequest::getOrderChannels() const {
  return orderChannels_;
}

void CreatePickUpWaybillRequest::setOrderChannels(const std::string &orderChannels) {
  orderChannels_ = orderChannels;
  setParameter(std::string("OrderChannels"), orderChannels);
}

CreatePickUpWaybillRequest::SendAddress CreatePickUpWaybillRequest::getSendAddress() const {
  return sendAddress_;
}

void CreatePickUpWaybillRequest::setSendAddress(const CreatePickUpWaybillRequest::SendAddress &sendAddress) {
  sendAddress_ = sendAddress;
  setParameter(std::string("SendAddress") + ".ProvinceName", sendAddress.provinceName);
  setParameter(std::string("SendAddress") + ".CityName", sendAddress.cityName);
  setParameter(std::string("SendAddress") + ".AreaName", sendAddress.areaName);
  setParameter(std::string("SendAddress") + ".TownName", sendAddress.townName);
  setParameter(std::string("SendAddress") + ".AddressDetail", sendAddress.addressDetail);
}

std::string CreatePickUpWaybillRequest::getOuterOrderCode() const {
  return outerOrderCode_;
}

void CreatePickUpWaybillRequest::setOuterOrderCode(const std::string &outerOrderCode) {
  outerOrderCode_ = outerOrderCode;
  setParameter(std::string("OuterOrderCode"), outerOrderCode);
}

std::string CreatePickUpWaybillRequest::getRemark() const {
  return remark_;
}

void CreatePickUpWaybillRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string CreatePickUpWaybillRequest::getAppointGotStartTime() const {
  return appointGotStartTime_;
}

void CreatePickUpWaybillRequest::setAppointGotStartTime(const std::string &appointGotStartTime) {
  appointGotStartTime_ = appointGotStartTime;
  setParameter(std::string("AppointGotStartTime"), appointGotStartTime);
}

std::string CreatePickUpWaybillRequest::getAppointGotEndTime() const {
  return appointGotEndTime_;
}

void CreatePickUpWaybillRequest::setAppointGotEndTime(const std::string &appointGotEndTime) {
  appointGotEndTime_ = appointGotEndTime;
  setParameter(std::string("AppointGotEndTime"), appointGotEndTime);
}

std::string CreatePickUpWaybillRequest::getCpCode() const {
  return cpCode_;
}

void CreatePickUpWaybillRequest::setCpCode(const std::string &cpCode) {
  cpCode_ = cpCode;
  setParameter(std::string("CpCode"), cpCode);
}

std::string CreatePickUpWaybillRequest::getSendMobile() const {
  return sendMobile_;
}

void CreatePickUpWaybillRequest::setSendMobile(const std::string &sendMobile) {
  sendMobile_ = sendMobile;
  setParameter(std::string("SendMobile"), sendMobile);
}

std::string CreatePickUpWaybillRequest::getConsigneeMobile() const {
  return consigneeMobile_;
}

void CreatePickUpWaybillRequest::setConsigneeMobile(const std::string &consigneeMobile) {
  consigneeMobile_ = consigneeMobile;
  setParameter(std::string("ConsigneeMobile"), consigneeMobile);
}

std::string CreatePickUpWaybillRequest::getContentType() const {
  return contentType_;
}

void CreatePickUpWaybillRequest::setContentType(const std::string &contentType) {
  contentType_ = contentType;
  setHeader(std::string("Content-Type"), contentType);
}

CreatePickUpWaybillRequest::ConsigneeAddress CreatePickUpWaybillRequest::getConsigneeAddress() const {
  return consigneeAddress_;
}

void CreatePickUpWaybillRequest::setConsigneeAddress(const CreatePickUpWaybillRequest::ConsigneeAddress &consigneeAddress) {
  consigneeAddress_ = consigneeAddress;
  setParameter(std::string("ConsigneeAddress") + ".ProvinceName", consigneeAddress.provinceName);
  setParameter(std::string("ConsigneeAddress") + ".CityName", consigneeAddress.cityName);
  setParameter(std::string("ConsigneeAddress") + ".AreaName", consigneeAddress.areaName);
  setParameter(std::string("ConsigneeAddress") + ".TownName", consigneeAddress.townName);
  setParameter(std::string("ConsigneeAddress") + ".AddressDetail", consigneeAddress.addressDetail);
}

std::string CreatePickUpWaybillRequest::getSendPhone() const {
  return sendPhone_;
}

void CreatePickUpWaybillRequest::setSendPhone(const std::string &sendPhone) {
  sendPhone_ = sendPhone;
  setParameter(std::string("SendPhone"), sendPhone);
}

std::vector<CreatePickUpWaybillRequest::GoodsInfos> CreatePickUpWaybillRequest::getGoodsInfos() const {
  return goodsInfos_;
}

void CreatePickUpWaybillRequest::setGoodsInfos(const std::vector<CreatePickUpWaybillRequest::GoodsInfos> &goodsInfos) {
  goodsInfos_ = goodsInfos;
  for(int dep1 = 0; dep1 != goodsInfos.size(); dep1++) {
    setParameter(std::string("GoodsInfos") + "." + std::to_string(dep1 + 1) + ".Name", goodsInfos[dep1].name);
    setParameter(std::string("GoodsInfos") + "." + std::to_string(dep1 + 1) + ".Weight", goodsInfos[dep1].weight);
    setParameter(std::string("GoodsInfos") + "." + std::to_string(dep1 + 1) + ".Quantity", goodsInfos[dep1].quantity);
  }
}

int CreatePickUpWaybillRequest::getBizType() const {
  return bizType_;
}

void CreatePickUpWaybillRequest::setBizType(int bizType) {
  bizType_ = bizType;
  setParameter(std::string("BizType"), std::to_string(bizType));
}

std::string CreatePickUpWaybillRequest::getSendName() const {
  return sendName_;
}

void CreatePickUpWaybillRequest::setSendName(const std::string &sendName) {
  sendName_ = sendName;
  setParameter(std::string("SendName"), sendName);
}

std::string CreatePickUpWaybillRequest::getConsigneePhone() const {
  return consigneePhone_;
}

void CreatePickUpWaybillRequest::setConsigneePhone(const std::string &consigneePhone) {
  consigneePhone_ = consigneePhone;
  setParameter(std::string("ConsigneePhone"), consigneePhone);
}

