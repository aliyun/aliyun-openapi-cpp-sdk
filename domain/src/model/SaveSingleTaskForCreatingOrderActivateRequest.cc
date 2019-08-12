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

#include <alibabacloud/domain/model/SaveSingleTaskForCreatingOrderActivateRequest.h>

using AlibabaCloud::Domain::Model::SaveSingleTaskForCreatingOrderActivateRequest;

SaveSingleTaskForCreatingOrderActivateRequest::SaveSingleTaskForCreatingOrderActivateRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveSingleTaskForCreatingOrderActivate")
{}

SaveSingleTaskForCreatingOrderActivateRequest::~SaveSingleTaskForCreatingOrderActivateRequest()
{}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getCountry()const
{
	return country_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setCountry(const std::string& country)
{
	country_ = country;
	setCoreParameter("Country", std::to_string(country));
}

int SaveSingleTaskForCreatingOrderActivateRequest::getSubscriptionDuration()const
{
	return subscriptionDuration_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setSubscriptionDuration(int subscriptionDuration)
{
	subscriptionDuration_ = subscriptionDuration;
	setCoreParameter("SubscriptionDuration", subscriptionDuration);
}

bool SaveSingleTaskForCreatingOrderActivateRequest::getPermitPremiumActivation()const
{
	return permitPremiumActivation_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setPermitPremiumActivation(bool permitPremiumActivation)
{
	permitPremiumActivation_ = permitPremiumActivation;
	setCoreParameter("PermitPremiumActivation", permitPremiumActivation ? "true" : "false");
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getCity()const
{
	return city_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setCity(const std::string& city)
{
	city_ = city;
	setCoreParameter("City", std::to_string(city));
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getDns2()const
{
	return dns2_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setDns2(const std::string& dns2)
{
	dns2_ = dns2;
	setCoreParameter("Dns2", std::to_string(dns2));
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getDns1()const
{
	return dns1_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setDns1(const std::string& dns1)
{
	dns1_ = dns1;
	setCoreParameter("Dns1", std::to_string(dns1));
}

long SaveSingleTaskForCreatingOrderActivateRequest::getRegistrantProfileId()const
{
	return registrantProfileId_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setRegistrantProfileId(long registrantProfileId)
{
	registrantProfileId_ = registrantProfileId;
	setCoreParameter("RegistrantProfileId", registrantProfileId);
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getCouponNo()const
{
	return couponNo_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setCouponNo(const std::string& couponNo)
{
	couponNo_ = couponNo;
	setCoreParameter("CouponNo", std::to_string(couponNo));
}

bool SaveSingleTaskForCreatingOrderActivateRequest::getAliyunDns()const
{
	return aliyunDns_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setAliyunDns(bool aliyunDns)
{
	aliyunDns_ = aliyunDns;
	setCoreParameter("AliyunDns", aliyunDns ? "true" : "false");
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getZhCity()const
{
	return zhCity_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setZhCity(const std::string& zhCity)
{
	zhCity_ = zhCity;
	setCoreParameter("ZhCity", std::to_string(zhCity));
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getTelExt()const
{
	return telExt_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setTelExt(const std::string& telExt)
{
	telExt_ = telExt;
	setCoreParameter("TelExt", std::to_string(telExt));
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getZhRegistrantName()const
{
	return zhRegistrantName_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setZhRegistrantName(const std::string& zhRegistrantName)
{
	zhRegistrantName_ = zhRegistrantName;
	setCoreParameter("ZhRegistrantName", std::to_string(zhRegistrantName));
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getProvince()const
{
	return province_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setProvince(const std::string& province)
{
	province_ = province;
	setCoreParameter("Province", std::to_string(province));
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getPostalCode()const
{
	return postalCode_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setPostalCode(const std::string& postalCode)
{
	postalCode_ = postalCode;
	setCoreParameter("PostalCode", std::to_string(postalCode));
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getLang()const
{
	return lang_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getEmail()const
{
	return email_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setEmail(const std::string& email)
{
	email_ = email;
	setCoreParameter("Email", std::to_string(email));
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getZhRegistrantOrganization()const
{
	return zhRegistrantOrganization_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setZhRegistrantOrganization(const std::string& zhRegistrantOrganization)
{
	zhRegistrantOrganization_ = zhRegistrantOrganization;
	setCoreParameter("ZhRegistrantOrganization", std::to_string(zhRegistrantOrganization));
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getAddress()const
{
	return address_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setAddress(const std::string& address)
{
	address_ = address;
	setCoreParameter("Address", std::to_string(address));
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getTelArea()const
{
	return telArea_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setTelArea(const std::string& telArea)
{
	telArea_ = telArea;
	setCoreParameter("TelArea", std::to_string(telArea));
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getDomainName()const
{
	return domainName_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getZhAddress()const
{
	return zhAddress_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setZhAddress(const std::string& zhAddress)
{
	zhAddress_ = zhAddress;
	setCoreParameter("ZhAddress", std::to_string(zhAddress));
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getRegistrantType()const
{
	return registrantType_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setRegistrantType(const std::string& registrantType)
{
	registrantType_ = registrantType;
	setCoreParameter("RegistrantType", std::to_string(registrantType));
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getTelephone()const
{
	return telephone_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setTelephone(const std::string& telephone)
{
	telephone_ = telephone;
	setCoreParameter("Telephone", std::to_string(telephone));
}

bool SaveSingleTaskForCreatingOrderActivateRequest::getTrademarkDomainActivation()const
{
	return trademarkDomainActivation_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setTrademarkDomainActivation(bool trademarkDomainActivation)
{
	trademarkDomainActivation_ = trademarkDomainActivation;
	setCoreParameter("TrademarkDomainActivation", trademarkDomainActivation ? "true" : "false");
}

bool SaveSingleTaskForCreatingOrderActivateRequest::getUseCoupon()const
{
	return useCoupon_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setUseCoupon(bool useCoupon)
{
	useCoupon_ = useCoupon;
	setCoreParameter("UseCoupon", useCoupon ? "true" : "false");
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getZhProvince()const
{
	return zhProvince_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setZhProvince(const std::string& zhProvince)
{
	zhProvince_ = zhProvince;
	setCoreParameter("ZhProvince", std::to_string(zhProvince));
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getRegistrantOrganization()const
{
	return registrantOrganization_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setRegistrantOrganization(const std::string& registrantOrganization)
{
	registrantOrganization_ = registrantOrganization;
	setCoreParameter("RegistrantOrganization", std::to_string(registrantOrganization));
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getPromotionNo()const
{
	return promotionNo_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setPromotionNo(const std::string& promotionNo)
{
	promotionNo_ = promotionNo;
	setCoreParameter("PromotionNo", std::to_string(promotionNo));
}

bool SaveSingleTaskForCreatingOrderActivateRequest::getEnableDomainProxy()const
{
	return enableDomainProxy_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setEnableDomainProxy(bool enableDomainProxy)
{
	enableDomainProxy_ = enableDomainProxy;
	setCoreParameter("EnableDomainProxy", enableDomainProxy ? "true" : "false");
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", std::to_string(userClientIp));
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getRegistrantName()const
{
	return registrantName_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setRegistrantName(const std::string& registrantName)
{
	registrantName_ = registrantName;
	setCoreParameter("RegistrantName", std::to_string(registrantName));
}

bool SaveSingleTaskForCreatingOrderActivateRequest::getUsePromotion()const
{
	return usePromotion_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setUsePromotion(bool usePromotion)
{
	usePromotion_ = usePromotion;
	setCoreParameter("UsePromotion", usePromotion ? "true" : "false");
}

