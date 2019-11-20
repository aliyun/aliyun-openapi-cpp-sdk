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
{
	setMethod(HttpRequest::Method::Post);
}

SaveBatchTaskForCreatingOrderActivateRequest::~SaveBatchTaskForCreatingOrderActivateRequest()
{}

std::vector<SaveBatchTaskForCreatingOrderActivateRequest::OrderActivateParam> SaveBatchTaskForCreatingOrderActivateRequest::getOrderActivateParam()const
{
	return orderActivateParam_;
}

void SaveBatchTaskForCreatingOrderActivateRequest::setOrderActivateParam(const std::vector<OrderActivateParam>& orderActivateParam)
{
	orderActivateParam_ = orderActivateParam;
	for(int dep1 = 0; dep1!= orderActivateParam.size(); dep1++) {
		auto orderActivateParamObj = orderActivateParam.at(dep1);
		std::string orderActivateParamObjStr = "OrderActivateParam." + std::to_string(dep1);
		setCoreParameter(orderActivateParamObjStr + ".Country", orderActivateParamObj.country);
		setCoreParameter(orderActivateParamObjStr + ".SubscriptionDuration", std::to_string(orderActivateParamObj.subscriptionDuration));
		setCoreParameter(orderActivateParamObjStr + ".PermitPremiumActivation", orderActivateParamObj.permitPremiumActivation ? "true" : "false");
		setCoreParameter(orderActivateParamObjStr + ".City", orderActivateParamObj.city);
		setCoreParameter(orderActivateParamObjStr + ".Dns2", orderActivateParamObj.dns2);
		setCoreParameter(orderActivateParamObjStr + ".Dns1", orderActivateParamObj.dns1);
		setCoreParameter(orderActivateParamObjStr + ".RegistrantProfileId", std::to_string(orderActivateParamObj.registrantProfileId));
		setCoreParameter(orderActivateParamObjStr + ".AliyunDns", orderActivateParamObj.aliyunDns ? "true" : "false");
		setCoreParameter(orderActivateParamObjStr + ".ZhCity", orderActivateParamObj.zhCity);
		setCoreParameter(orderActivateParamObjStr + ".TelExt", orderActivateParamObj.telExt);
		setCoreParameter(orderActivateParamObjStr + ".ZhRegistrantName", orderActivateParamObj.zhRegistrantName);
		setCoreParameter(orderActivateParamObjStr + ".Province", orderActivateParamObj.province);
		setCoreParameter(orderActivateParamObjStr + ".PostalCode", orderActivateParamObj.postalCode);
		setCoreParameter(orderActivateParamObjStr + ".Email", orderActivateParamObj.email);
		setCoreParameter(orderActivateParamObjStr + ".ZhRegistrantOrganization", orderActivateParamObj.zhRegistrantOrganization);
		setCoreParameter(orderActivateParamObjStr + ".Address", orderActivateParamObj.address);
		setCoreParameter(orderActivateParamObjStr + ".TelArea", orderActivateParamObj.telArea);
		setCoreParameter(orderActivateParamObjStr + ".DomainName", orderActivateParamObj.domainName);
		setCoreParameter(orderActivateParamObjStr + ".ZhAddress", orderActivateParamObj.zhAddress);
		setCoreParameter(orderActivateParamObjStr + ".RegistrantType", orderActivateParamObj.registrantType);
		setCoreParameter(orderActivateParamObjStr + ".Telephone", orderActivateParamObj.telephone);
		setCoreParameter(orderActivateParamObjStr + ".TrademarkDomainActivation", orderActivateParamObj.trademarkDomainActivation ? "true" : "false");
		setCoreParameter(orderActivateParamObjStr + ".ZhProvince", orderActivateParamObj.zhProvince);
		setCoreParameter(orderActivateParamObjStr + ".RegistrantOrganization", orderActivateParamObj.registrantOrganization);
		setCoreParameter(orderActivateParamObjStr + ".EnableDomainProxy", orderActivateParamObj.enableDomainProxy ? "true" : "false");
		setCoreParameter(orderActivateParamObjStr + ".RegistrantName", orderActivateParamObj.registrantName);
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

