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

SaveBatchTaskForCreatingOrderActivateRequest::SaveBatchTaskForCreatingOrderActivateRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveBatchTaskForCreatingOrderActivate")
{}

SaveBatchTaskForCreatingOrderActivateRequest::~SaveBatchTaskForCreatingOrderActivateRequest()
{}

std::vector<SaveBatchTaskForCreatingOrderActivateRequest::OrderActivateParam> SaveBatchTaskForCreatingOrderActivateRequest::getOrderActivateParam()const
{
	return orderActivateParam_;
}

void SaveBatchTaskForCreatingOrderActivateRequest::setOrderActivateParam(const std::vector<OrderActivateParam>& orderActivateParam)
{
	orderActivateParam_ = orderActivateParam;
	int i = 0;
	for(int i = 0; i!= orderActivateParam.size(); i++)	{
		auto obj = orderActivateParam.at(i);
		std::string str ="OrderActivateParam."+ std::to_string(i);
		setCoreParameter(str + ".Country", obj.country);
		setCoreParameter(str + ".SubscriptionDuration", std::to_string(obj.subscriptionDuration));
		setCoreParameter(str + ".PermitPremiumActivation", obj.permitPremiumActivation ? "true" : "false");
		setCoreParameter(str + ".City", obj.city);
		setCoreParameter(str + ".Dns2", obj.dns2);
		setCoreParameter(str + ".Dns1", obj.dns1);
		setCoreParameter(str + ".RegistrantProfileId", std::to_string(obj.registrantProfileId));
		setCoreParameter(str + ".AliyunDns", obj.aliyunDns ? "true" : "false");
		setCoreParameter(str + ".ZhCity", obj.zhCity);
		setCoreParameter(str + ".TelExt", obj.telExt);
		setCoreParameter(str + ".ZhRegistrantName", obj.zhRegistrantName);
		setCoreParameter(str + ".Province", obj.province);
		setCoreParameter(str + ".PostalCode", obj.postalCode);
		setCoreParameter(str + ".Email", obj.email);
		setCoreParameter(str + ".ZhRegistrantOrganization", obj.zhRegistrantOrganization);
		setCoreParameter(str + ".Address", obj.address);
		setCoreParameter(str + ".TelArea", obj.telArea);
		setCoreParameter(str + ".DomainName", obj.domainName);
		setCoreParameter(str + ".ZhAddress", obj.zhAddress);
		setCoreParameter(str + ".RegistrantType", obj.registrantType);
		setCoreParameter(str + ".Telephone", obj.telephone);
		setCoreParameter(str + ".TrademarkDomainActivation", obj.trademarkDomainActivation ? "true" : "false");
		setCoreParameter(str + ".ZhProvince", obj.zhProvince);
		setCoreParameter(str + ".RegistrantOrganization", obj.registrantOrganization);
		setCoreParameter(str + ".EnableDomainProxy", obj.enableDomainProxy ? "true" : "false");
		setCoreParameter(str + ".RegistrantName", obj.registrantName);
	}
}

std::string SaveBatchTaskForCreatingOrderActivateRequest::getCouponNo()const
{
	return couponNo_;
}

void SaveBatchTaskForCreatingOrderActivateRequest::setCouponNo(const std::string& couponNo)
{
	couponNo_ = couponNo;
	setCoreParameter("CouponNo", couponNo);
}

bool SaveBatchTaskForCreatingOrderActivateRequest::getUseCoupon()const
{
	return useCoupon_;
}

void SaveBatchTaskForCreatingOrderActivateRequest::setUseCoupon(bool useCoupon)
{
	useCoupon_ = useCoupon;
	setCoreParameter("UseCoupon", useCoupon ? "true" : "false");
}

std::string SaveBatchTaskForCreatingOrderActivateRequest::getPromotionNo()const
{
	return promotionNo_;
}

void SaveBatchTaskForCreatingOrderActivateRequest::setPromotionNo(const std::string& promotionNo)
{
	promotionNo_ = promotionNo;
	setCoreParameter("PromotionNo", promotionNo);
}

std::string SaveBatchTaskForCreatingOrderActivateRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveBatchTaskForCreatingOrderActivateRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string SaveBatchTaskForCreatingOrderActivateRequest::getLang()const
{
	return lang_;
}

void SaveBatchTaskForCreatingOrderActivateRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

bool SaveBatchTaskForCreatingOrderActivateRequest::getUsePromotion()const
{
	return usePromotion_;
}

void SaveBatchTaskForCreatingOrderActivateRequest::setUsePromotion(bool usePromotion)
{
	usePromotion_ = usePromotion;
	setCoreParameter("UsePromotion", usePromotion ? "true" : "false");
}

