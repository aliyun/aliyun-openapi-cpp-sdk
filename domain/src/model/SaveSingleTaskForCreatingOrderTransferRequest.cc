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

#include <alibabacloud/domain/model/SaveSingleTaskForCreatingOrderTransferRequest.h>

using AlibabaCloud::Domain::Model::SaveSingleTaskForCreatingOrderTransferRequest;

SaveSingleTaskForCreatingOrderTransferRequest::SaveSingleTaskForCreatingOrderTransferRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveSingleTaskForCreatingOrderTransfer")
{}

SaveSingleTaskForCreatingOrderTransferRequest::~SaveSingleTaskForCreatingOrderTransferRequest()
{}

bool SaveSingleTaskForCreatingOrderTransferRequest::getPermitPremiumTransfer()const
{
	return permitPremiumTransfer_;
}

void SaveSingleTaskForCreatingOrderTransferRequest::setPermitPremiumTransfer(bool permitPremiumTransfer)
{
	permitPremiumTransfer_ = permitPremiumTransfer;
	setCoreParameter("PermitPremiumTransfer", permitPremiumTransfer ? "true" : "false");
}

std::string SaveSingleTaskForCreatingOrderTransferRequest::getPromotionNo()const
{
	return promotionNo_;
}

void SaveSingleTaskForCreatingOrderTransferRequest::setPromotionNo(const std::string& promotionNo)
{
	promotionNo_ = promotionNo;
	setCoreParameter("PromotionNo", promotionNo);
}

std::string SaveSingleTaskForCreatingOrderTransferRequest::getAuthorizationCode()const
{
	return authorizationCode_;
}

void SaveSingleTaskForCreatingOrderTransferRequest::setAuthorizationCode(const std::string& authorizationCode)
{
	authorizationCode_ = authorizationCode;
	setCoreParameter("AuthorizationCode", authorizationCode);
}

std::string SaveSingleTaskForCreatingOrderTransferRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveSingleTaskForCreatingOrderTransferRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string SaveSingleTaskForCreatingOrderTransferRequest::getDomainName()const
{
	return domainName_;
}

void SaveSingleTaskForCreatingOrderTransferRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long SaveSingleTaskForCreatingOrderTransferRequest::getRegistrantProfileId()const
{
	return registrantProfileId_;
}

void SaveSingleTaskForCreatingOrderTransferRequest::setRegistrantProfileId(long registrantProfileId)
{
	registrantProfileId_ = registrantProfileId;
	setCoreParameter("RegistrantProfileId", std::to_string(registrantProfileId));
}

std::string SaveSingleTaskForCreatingOrderTransferRequest::getCouponNo()const
{
	return couponNo_;
}

void SaveSingleTaskForCreatingOrderTransferRequest::setCouponNo(const std::string& couponNo)
{
	couponNo_ = couponNo;
	setCoreParameter("CouponNo", couponNo);
}

bool SaveSingleTaskForCreatingOrderTransferRequest::getUseCoupon()const
{
	return useCoupon_;
}

void SaveSingleTaskForCreatingOrderTransferRequest::setUseCoupon(bool useCoupon)
{
	useCoupon_ = useCoupon;
	setCoreParameter("UseCoupon", useCoupon ? "true" : "false");
}

std::string SaveSingleTaskForCreatingOrderTransferRequest::getLang()const
{
	return lang_;
}

void SaveSingleTaskForCreatingOrderTransferRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

bool SaveSingleTaskForCreatingOrderTransferRequest::getUsePromotion()const
{
	return usePromotion_;
}

void SaveSingleTaskForCreatingOrderTransferRequest::setUsePromotion(bool usePromotion)
{
	usePromotion_ = usePromotion;
	setCoreParameter("UsePromotion", usePromotion ? "true" : "false");
}

