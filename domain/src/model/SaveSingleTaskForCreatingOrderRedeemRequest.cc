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

#include <alibabacloud/domain/model/SaveSingleTaskForCreatingOrderRedeemRequest.h>

using AlibabaCloud::Domain::Model::SaveSingleTaskForCreatingOrderRedeemRequest;

SaveSingleTaskForCreatingOrderRedeemRequest::SaveSingleTaskForCreatingOrderRedeemRequest()
    : RpcServiceRequest("domain", "2018-01-29", "SaveSingleTaskForCreatingOrderRedeem") {
  setMethod(HttpRequest::Method::Post);
}

SaveSingleTaskForCreatingOrderRedeemRequest::~SaveSingleTaskForCreatingOrderRedeemRequest() {}

std::string SaveSingleTaskForCreatingOrderRedeemRequest::getDomainName() const {
  return domainName_;
}

void SaveSingleTaskForCreatingOrderRedeemRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string SaveSingleTaskForCreatingOrderRedeemRequest::getCouponNo() const {
  return couponNo_;
}

void SaveSingleTaskForCreatingOrderRedeemRequest::setCouponNo(const std::string &couponNo) {
  couponNo_ = couponNo;
  setParameter(std::string("CouponNo"), couponNo);
}

bool SaveSingleTaskForCreatingOrderRedeemRequest::getUseCoupon() const {
  return useCoupon_;
}

void SaveSingleTaskForCreatingOrderRedeemRequest::setUseCoupon(bool useCoupon) {
  useCoupon_ = useCoupon;
  setParameter(std::string("UseCoupon"), useCoupon ? "true" : "false");
}

std::string SaveSingleTaskForCreatingOrderRedeemRequest::getPromotionNo() const {
  return promotionNo_;
}

void SaveSingleTaskForCreatingOrderRedeemRequest::setPromotionNo(const std::string &promotionNo) {
  promotionNo_ = promotionNo;
  setParameter(std::string("PromotionNo"), promotionNo);
}

long SaveSingleTaskForCreatingOrderRedeemRequest::getCurrentExpirationDate() const {
  return currentExpirationDate_;
}

void SaveSingleTaskForCreatingOrderRedeemRequest::setCurrentExpirationDate(long currentExpirationDate) {
  currentExpirationDate_ = currentExpirationDate;
  setParameter(std::string("CurrentExpirationDate"), std::to_string(currentExpirationDate));
}

std::string SaveSingleTaskForCreatingOrderRedeemRequest::getUserClientIp() const {
  return userClientIp_;
}

void SaveSingleTaskForCreatingOrderRedeemRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string SaveSingleTaskForCreatingOrderRedeemRequest::getLang() const {
  return lang_;
}

void SaveSingleTaskForCreatingOrderRedeemRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

bool SaveSingleTaskForCreatingOrderRedeemRequest::getUsePromotion() const {
  return usePromotion_;
}

void SaveSingleTaskForCreatingOrderRedeemRequest::setUsePromotion(bool usePromotion) {
  usePromotion_ = usePromotion;
  setParameter(std::string("UsePromotion"), usePromotion ? "true" : "false");
}

