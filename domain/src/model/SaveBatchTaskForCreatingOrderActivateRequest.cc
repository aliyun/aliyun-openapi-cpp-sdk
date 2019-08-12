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
		setCoreParameter(str + ".Country", std::to_string(obj.country));
		setCoreParameter(str + ".SubscriptionDuration", obj.subscriptionDuration);
		setCoreParameter(str + ".PermitPremiumActivation", obj.permitPremiumActivation ? "true" : "false");
		setCoreParameter(str + ".City", std::to_string(obj.city));
		setCoreParameter(str + ".Dns2", std::to_string(obj.dns2));
		setCoreParameter(str + ".Dns1", std::to_string(obj.dns1));
		setCoreParameter(str + ".RegistrantProfileId", obj.registrantProfileId);
		setCoreParameter(str + ".AliyunDns", obj.aliyunDns ? "true" : "false");
		setCoreParameter(str + ".ZhCity", std::to_string(obj.zhCity));
		setCoreParameter(str + ".TelExt", std::to_string(obj.telExt));
		setCoreParameter(str + ".ZhRegistrantName", std::to_string(obj.zhRegistrantName));
		setCoreParameter(str + ".Province", std::to_string(obj.province));
		setCoreParameter(str + ".PostalCode", std::to_string(obj.postalCode));
		setCoreParameter(str + ".Email", std::to_string(obj.email));
		setCoreParameter(str + ".ZhRegistrantOrganization", std::to_string(obj.zhRegistrantOrganization));
		setCoreParameter(str + ".Address", std::to_string(obj.address));
		setCoreParameter(str + ".TelArea", std::to_string(obj.telArea));
		setCoreParameter(str + ".DomainName", std::to_string(obj.domainName));
		setCoreParameter(str + ".ZhAddress", std::to_string(obj.zhAddress));
		setCoreParameter(str + ".RegistrantType", std::to_string(obj.registrantType));
		setCoreParameter(str + ".Telephone", std::to_string(obj.telephone));
		setCoreParameter(str + ".TrademarkDomainActivation", obj.trademarkDomainActivation ? "true" : "false");
		setCoreParameter(str + ".ZhProvince", std::to_string(obj.zhProvince));
		setCoreParameter(str + ".RegistrantOrganization", std::to_string(obj.registrantOrganization));
		setCoreParameter(str + ".EnableDomainProxy", obj.enableDomainProxy ? "true" : "false");
		setCoreParameter(str + ".RegistrantName", std::to_string(obj.registrantName));
	}
}

std::string SaveBatchTaskForCreatingOrderActivateRequest::getPromotionNo()const
{
	return promotionNo_;
}

void SaveBatchTaskForCreatingOrderActivateRequest::setPromotionNo(const std::string& promotionNo)
{
	promotionNo_ = promotionNo;
	setCoreParameter("PromotionNo", std::to_string(promotionNo));
}

std::string SaveBatchTaskForCreatingOrderActivateRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveBatchTaskForCreatingOrderActivateRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", std::to_string(userClientIp));
}

std::string SaveBatchTaskForCreatingOrderActivateRequest::getCouponNo()const
{
	return couponNo_;
}

void SaveBatchTaskForCreatingOrderActivateRequest::setCouponNo(const std::string& couponNo)
{
	couponNo_ = couponNo;
	setCoreParameter("CouponNo", std::to_string(couponNo));
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

std::string SaveBatchTaskForCreatingOrderActivateRequest::getLang()const
{
	return lang_;
}

void SaveBatchTaskForCreatingOrderActivateRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
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

