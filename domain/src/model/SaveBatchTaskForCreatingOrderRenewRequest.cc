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

#include <alibabacloud/domain/model/SaveBatchTaskForCreatingOrderRenewRequest.h>

using AlibabaCloud::Domain::Model::SaveBatchTaskForCreatingOrderRenewRequest;

SaveBatchTaskForCreatingOrderRenewRequest::SaveBatchTaskForCreatingOrderRenewRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveBatchTaskForCreatingOrderRenew")
{}

SaveBatchTaskForCreatingOrderRenewRequest::~SaveBatchTaskForCreatingOrderRenewRequest()
{}

std::string SaveBatchTaskForCreatingOrderRenewRequest::getPromotionNo()const
{
	return promotionNo_;
}

void SaveBatchTaskForCreatingOrderRenewRequest::setPromotionNo(const std::string& promotionNo)
{
	promotionNo_ = promotionNo;
	setCoreParameter("PromotionNo", promotionNo);
}

std::string SaveBatchTaskForCreatingOrderRenewRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveBatchTaskForCreatingOrderRenewRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::vector<SaveBatchTaskForCreatingOrderRenewRequest::OrderRenewParam> SaveBatchTaskForCreatingOrderRenewRequest::getOrderRenewParam()const
{
	return orderRenewParam_;
}

void SaveBatchTaskForCreatingOrderRenewRequest::setOrderRenewParam(const std::vector<OrderRenewParam>& orderRenewParam)
{
	orderRenewParam_ = orderRenewParam;
	int i = 0;
	for(int i = 0; i!= orderRenewParam.size(); i++)	{
		auto obj = orderRenewParam.at(i);
		std::string str ="OrderRenewParam."+ std::to_string(i);
		setCoreParameter(str + ".SubscriptionDuration", std::to_string(obj.subscriptionDuration));
		setCoreParameter(str + ".CurrentExpirationDate", std::to_string(obj.currentExpirationDate));
		setCoreParameter(str + ".DomainName", obj.domainName);
	}
}

std::string SaveBatchTaskForCreatingOrderRenewRequest::getCouponNo()const
{
	return couponNo_;
}

void SaveBatchTaskForCreatingOrderRenewRequest::setCouponNo(const std::string& couponNo)
{
	couponNo_ = couponNo;
	setCoreParameter("CouponNo", couponNo);
}

bool SaveBatchTaskForCreatingOrderRenewRequest::getUseCoupon()const
{
	return useCoupon_;
}

void SaveBatchTaskForCreatingOrderRenewRequest::setUseCoupon(bool useCoupon)
{
	useCoupon_ = useCoupon;
	setCoreParameter("UseCoupon", useCoupon ? "true" : "false");
}

std::string SaveBatchTaskForCreatingOrderRenewRequest::getLang()const
{
	return lang_;
}

void SaveBatchTaskForCreatingOrderRenewRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

bool SaveBatchTaskForCreatingOrderRenewRequest::getUsePromotion()const
{
	return usePromotion_;
}

void SaveBatchTaskForCreatingOrderRenewRequest::setUsePromotion(bool usePromotion)
{
	usePromotion_ = usePromotion;
	setCoreParameter("UsePromotion", usePromotion ? "true" : "false");
}

