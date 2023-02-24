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

#include <alibabacloud/dyplsapi/model/CreatePickUpWaybillPreQueryRequest.h>

using AlibabaCloud::Dyplsapi::Model::CreatePickUpWaybillPreQueryRequest;

CreatePickUpWaybillPreQueryRequest::CreatePickUpWaybillPreQueryRequest()
    : RpcServiceRequest("dyplsapi", "2017-05-25", "CreatePickUpWaybillPreQuery") {
  setMethod(HttpRequest::Method::Post);
}

CreatePickUpWaybillPreQueryRequest::~CreatePickUpWaybillPreQueryRequest() {}

std::string CreatePickUpWaybillPreQueryRequest::getPreWeight() const {
  return preWeight_;
}

void CreatePickUpWaybillPreQueryRequest::setPreWeight(const std::string &preWeight) {
  preWeight_ = preWeight;
  setParameter(std::string("PreWeight"), preWeight);
}

std::string CreatePickUpWaybillPreQueryRequest::getOrderChannels() const {
  return orderChannels_;
}

void CreatePickUpWaybillPreQueryRequest::setOrderChannels(const std::string &orderChannels) {
  orderChannels_ = orderChannels;
  setParameter(std::string("OrderChannels"), orderChannels);
}

std::string CreatePickUpWaybillPreQueryRequest::getOuterOrderCode() const {
  return outerOrderCode_;
}

void CreatePickUpWaybillPreQueryRequest::setOuterOrderCode(const std::string &outerOrderCode) {
  outerOrderCode_ = outerOrderCode;
  setParameter(std::string("OuterOrderCode"), outerOrderCode);
}

CreatePickUpWaybillPreQueryRequest::ConsigneeInfo CreatePickUpWaybillPreQueryRequest::getConsigneeInfo() const {
  return consigneeInfo_;
}

void CreatePickUpWaybillPreQueryRequest::setConsigneeInfo(const CreatePickUpWaybillPreQueryRequest::ConsigneeInfo &consigneeInfo) {
  consigneeInfo_ = consigneeInfo;
  setParameter(std::string("ConsigneeInfo") + ".Name", consigneeInfo.name);
  setParameter(std::string("ConsigneeInfo") + ".Mobile", consigneeInfo.mobile);
  setParameter(std::string("ConsigneeInfo") + ".AddressInfo.ProvinceName", consigneeInfo.addressInfo.provinceName);
  setParameter(std::string("ConsigneeInfo") + ".AddressInfo.CityName", consigneeInfo.addressInfo.cityName);
  setParameter(std::string("ConsigneeInfo") + ".AddressInfo.AreaName", consigneeInfo.addressInfo.areaName);
  setParameter(std::string("ConsigneeInfo") + ".AddressInfo.TownName", consigneeInfo.addressInfo.townName);
  setParameter(std::string("ConsigneeInfo") + ".AddressInfo.AddressDetail", consigneeInfo.addressInfo.addressDetail);
}

std::string CreatePickUpWaybillPreQueryRequest::getCpCode() const {
  return cpCode_;
}

void CreatePickUpWaybillPreQueryRequest::setCpCode(const std::string &cpCode) {
  cpCode_ = cpCode;
  setParameter(std::string("CpCode"), cpCode);
}

std::string CreatePickUpWaybillPreQueryRequest::getContentType() const {
  return contentType_;
}

void CreatePickUpWaybillPreQueryRequest::setContentType(const std::string &contentType) {
  contentType_ = contentType;
  setHeader(std::string("Content-Type"), contentType);
}

CreatePickUpWaybillPreQueryRequest::SenderInfo CreatePickUpWaybillPreQueryRequest::getSenderInfo() const {
  return senderInfo_;
}

void CreatePickUpWaybillPreQueryRequest::setSenderInfo(const CreatePickUpWaybillPreQueryRequest::SenderInfo &senderInfo) {
  senderInfo_ = senderInfo;
  setParameter(std::string("SenderInfo") + ".Name", senderInfo.name);
  setParameter(std::string("SenderInfo") + ".Mobile", senderInfo.mobile);
  setParameter(std::string("SenderInfo") + ".AddressInfo.ProvinceName", senderInfo.addressInfo.provinceName);
  setParameter(std::string("SenderInfo") + ".AddressInfo.CityName", senderInfo.addressInfo.cityName);
  setParameter(std::string("SenderInfo") + ".AddressInfo.AreaName", senderInfo.addressInfo.areaName);
  setParameter(std::string("SenderInfo") + ".AddressInfo.TownName", senderInfo.addressInfo.townName);
  setParameter(std::string("SenderInfo") + ".AddressInfo.AddressDetail", senderInfo.addressInfo.addressDetail);
}

