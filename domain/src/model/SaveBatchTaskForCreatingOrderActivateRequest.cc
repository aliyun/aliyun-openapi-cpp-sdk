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

#include <alibabacloud/domain/model/SaveBatchTaskForCreatingOrderActivateRequest.h>

using AlibabaCloud::Domain::Model::SaveBatchTaskForCreatingOrderActivateRequest;

SaveBatchTaskForCreatingOrderActivateRequest::SaveBatchTaskForCreatingOrderActivateRequest()
    : RpcServiceRequest("domain", "2018-01-29", "SaveBatchTaskForCreatingOrderActivate") {
  setMethod(HttpRequest::Method::Post);
}

SaveBatchTaskForCreatingOrderActivateRequest::~SaveBatchTaskForCreatingOrderActivateRequest() {}

std::vector<SaveBatchTaskForCreatingOrderActivateRequest::OrderActivateParam> SaveBatchTaskForCreatingOrderActivateRequest::getOrderActivateParam() const {
  return orderActivateParam_;
}

void SaveBatchTaskForCreatingOrderActivateRequest::setOrderActivateParam(const std::vector<SaveBatchTaskForCreatingOrderActivateRequest::OrderActivateParam> &orderActivateParam) {
  orderActivateParam_ = orderActivateParam;
  for(int dep1 = 0; dep1 != orderActivateParam.size(); dep1++) {
  auto orderActivateParamObj = orderActivateParam.at(dep1);
  std::string orderActivateParamObjStr = std::string("OrderActivateParam") + "." + std::to_string(dep1 + 1);
    setParameter(orderActivateParamObjStr + ".Country", orderActivateParamObj.country);
    setParameter(orderActivateParamObjStr + ".SubscriptionDuration", std::to_string(orderActivateParamObj.subscriptionDuration));
    setParameter(orderActivateParamObjStr + ".PermitPremiumActivation", orderActivateParamObj.permitPremiumActivation ? "true" : "false");
    setParameter(orderActivateParamObjStr + ".City", orderActivateParamObj.city);
    setParameter(orderActivateParamObjStr + ".Dns2", orderActivateParamObj.dns2);
    setParameter(orderActivateParamObjStr + ".Dns1", orderActivateParamObj.dns1);
    setParameter(orderActivateParamObjStr + ".RegistrantProfileId", std::to_string(orderActivateParamObj.registrantProfileId));
    setParameter(orderActivateParamObjStr + ".AliyunDns", orderActivateParamObj.aliyunDns ? "true" : "false");
    setParameter(orderActivateParamObjStr + ".ZhCity", orderActivateParamObj.zhCity);
    setParameter(orderActivateParamObjStr + ".ResourceGroupId", orderActivateParamObj.resourceGroupId);
    setParameter(orderActivateParamObjStr + ".TelExt", orderActivateParamObj.telExt);
    setParameter(orderActivateParamObjStr + ".ZhRegistrantName", orderActivateParamObj.zhRegistrantName);
    setParameter(orderActivateParamObjStr + ".Province", orderActivateParamObj.province);
    setParameter(orderActivateParamObjStr + ".PostalCode", orderActivateParamObj.postalCode);
    setParameter(orderActivateParamObjStr + ".Email", orderActivateParamObj.email);
    setParameter(orderActivateParamObjStr + ".ZhRegistrantOrganization", orderActivateParamObj.zhRegistrantOrganization);
    setParameter(orderActivateParamObjStr + ".Address", orderActivateParamObj.address);
    setParameter(orderActivateParamObjStr + ".TelArea", orderActivateParamObj.telArea);
    setParameter(orderActivateParamObjStr + ".DomainName", orderActivateParamObj.domainName);
    setParameter(orderActivateParamObjStr + ".RegistrantType", orderActivateParamObj.registrantType);
    setParameter(orderActivateParamObjStr + ".ZhAddress", orderActivateParamObj.zhAddress);
    setParameter(orderActivateParamObjStr + ".Telephone", orderActivateParamObj.telephone);
    setParameter(orderActivateParamObjStr + ".TrademarkDomainActivation", orderActivateParamObj.trademarkDomainActivation ? "true" : "false");
    setParameter(orderActivateParamObjStr + ".ZhProvince", orderActivateParamObj.zhProvince);
    setParameter(orderActivateParamObjStr + ".RegistrantOrganization", orderActivateParamObj.registrantOrganization);
    setParameter(orderActivateParamObjStr + ".EnableDomainProxy", orderActivateParamObj.enableDomainProxy ? "true" : "false");
    setParameter(orderActivateParamObjStr + ".RegistrantName", orderActivateParamObj.registrantName);
  }
}

std::string SaveBatchTaskForCreatingOrderActivateRequest::getCouponNo() const {
  return couponNo_;
}

void SaveBatchTaskForCreatingOrderActivateRequest::setCouponNo(const std::string &couponNo) {
  couponNo_ = couponNo;
  setParameter(std::string("CouponNo"), couponNo);
}

bool SaveBatchTaskForCreatingOrderActivateRequest::getUseCoupon() const {
  return useCoupon_;
}

void SaveBatchTaskForCreatingOrderActivateRequest::setUseCoupon(bool useCoupon) {
  useCoupon_ = useCoupon;
  setParameter(std::string("UseCoupon"), useCoupon ? "true" : "false");
}

std::string SaveBatchTaskForCreatingOrderActivateRequest::getPromotionNo() const {
  return promotionNo_;
}

void SaveBatchTaskForCreatingOrderActivateRequest::setPromotionNo(const std::string &promotionNo) {
  promotionNo_ = promotionNo;
  setParameter(std::string("PromotionNo"), promotionNo);
}

std::string SaveBatchTaskForCreatingOrderActivateRequest::getUserClientIp() const {
  return userClientIp_;
}

void SaveBatchTaskForCreatingOrderActivateRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string SaveBatchTaskForCreatingOrderActivateRequest::getLang() const {
  return lang_;
}

void SaveBatchTaskForCreatingOrderActivateRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

bool SaveBatchTaskForCreatingOrderActivateRequest::getUsePromotion() const {
  return usePromotion_;
}

void SaveBatchTaskForCreatingOrderActivateRequest::setUsePromotion(bool usePromotion) {
  usePromotion_ = usePromotion;
  setParameter(std::string("UsePromotion"), usePromotion ? "true" : "false");
}

