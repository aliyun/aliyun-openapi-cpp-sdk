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

#include <alibabacloud/domain/model/SaveSingleTaskForCreatingOrderRenewRequest.h>

using AlibabaCloud::Domain::Model::SaveSingleTaskForCreatingOrderRenewRequest;

SaveSingleTaskForCreatingOrderRenewRequest::SaveSingleTaskForCreatingOrderRenewRequest()
    : RpcServiceRequest("domain", "2018-01-29", "SaveSingleTaskForCreatingOrderRenew") {
  setMethod(HttpRequest::Method::Post);
}

SaveSingleTaskForCreatingOrderRenewRequest::~SaveSingleTaskForCreatingOrderRenewRequest() {}

int SaveSingleTaskForCreatingOrderRenewRequest::getSubscriptionDuration() const {
  return subscriptionDuration_;
}

void SaveSingleTaskForCreatingOrderRenewRequest::setSubscriptionDuration(int subscriptionDuration) {
  subscriptionDuration_ = subscriptionDuration;
  setParameter(std::string("SubscriptionDuration"), std::to_string(subscriptionDuration));
}

std::string SaveSingleTaskForCreatingOrderRenewRequest::getCouponNo() const {
  return couponNo_;
}

void SaveSingleTaskForCreatingOrderRenewRequest::setCouponNo(const std::string &couponNo) {
  couponNo_ = couponNo;
  setParameter(std::string("CouponNo"), couponNo);
}

long SaveSingleTaskForCreatingOrderRenewRequest::getCurrentExpirationDate() const {
  return currentExpirationDate_;
}

void SaveSingleTaskForCreatingOrderRenewRequest::setCurrentExpirationDate(long currentExpirationDate) {
  currentExpirationDate_ = currentExpirationDate;
  setParameter(std::string("CurrentExpirationDate"), std::to_string(currentExpirationDate));
}

std::string SaveSingleTaskForCreatingOrderRenewRequest::getLang() const {
  return lang_;
}

void SaveSingleTaskForCreatingOrderRenewRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string SaveSingleTaskForCreatingOrderRenewRequest::getDomainName() const {
  return domainName_;
}

void SaveSingleTaskForCreatingOrderRenewRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

bool SaveSingleTaskForCreatingOrderRenewRequest::getUseCoupon() const {
  return useCoupon_;
}

void SaveSingleTaskForCreatingOrderRenewRequest::setUseCoupon(bool useCoupon) {
  useCoupon_ = useCoupon;
  setParameter(std::string("UseCoupon"), useCoupon ? "true" : "false");
}

std::string SaveSingleTaskForCreatingOrderRenewRequest::getPromotionNo() const {
  return promotionNo_;
}

void SaveSingleTaskForCreatingOrderRenewRequest::setPromotionNo(const std::string &promotionNo) {
  promotionNo_ = promotionNo;
  setParameter(std::string("PromotionNo"), promotionNo);
}

std::string SaveSingleTaskForCreatingOrderRenewRequest::getUserClientIp() const {
  return userClientIp_;
}

void SaveSingleTaskForCreatingOrderRenewRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

bool SaveSingleTaskForCreatingOrderRenewRequest::getUsePromotion() const {
  return usePromotion_;
}

void SaveSingleTaskForCreatingOrderRenewRequest::setUsePromotion(bool usePromotion) {
  usePromotion_ = usePromotion;
  setParameter(std::string("UsePromotion"), usePromotion ? "true" : "false");
}

