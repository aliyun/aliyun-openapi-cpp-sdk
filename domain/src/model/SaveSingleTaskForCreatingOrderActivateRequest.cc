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
{
	setMethod(HttpRequest::Method::Post);
}

SaveSingleTaskForCreatingOrderActivateRequest::~SaveSingleTaskForCreatingOrderActivateRequest()
{}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getCountry()const
{
	return country_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setCountry(const std::string& country)
{
	country_ = country;
	setParameter("Country", country);
}

int SaveSingleTaskForCreatingOrderActivateRequest::getSubscriptionDuration()const
{
	return subscriptionDuration_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setSubscriptionDuration(int subscriptionDuration)
{
	subscriptionDuration_ = subscriptionDuration;
	setParameter("SubscriptionDuration", std::to_string(subscriptionDuration));
}

bool SaveSingleTaskForCreatingOrderActivateRequest::getPermitPremiumActivation()const
{
	return permitPremiumActivation_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setPermitPremiumActivation(bool permitPremiumActivation)
{
	permitPremiumActivation_ = permitPremiumActivation;
	setParameter("PermitPremiumActivation", permitPremiumActivation ? "true" : "false");
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getCity()const
{
	return city_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setCity(const std::string& city)
{
	city_ = city;
	setParameter("City", city);
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getDns2()const
{
	return dns2_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setDns2(const std::string& dns2)
{
	dns2_ = dns2;
	setParameter("Dns2", dns2);
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getDns1()const
{
	return dns1_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setDns1(const std::string& dns1)
{
	dns1_ = dns1;
	setParameter("Dns1", dns1);
}

long SaveSingleTaskForCreatingOrderActivateRequest::getRegistrantProfileId()const
{
	return registrantProfileId_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setRegistrantProfileId(long registrantProfileId)
{
	registrantProfileId_ = registrantProfileId;
	setParameter("RegistrantProfileId", std::to_string(registrantProfileId));
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getCouponNo()const
{
	return couponNo_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setCouponNo(const std::string& couponNo)
{
	couponNo_ = couponNo;
	setParameter("CouponNo", couponNo);
}

bool SaveSingleTaskForCreatingOrderActivateRequest::getAliyunDns()const
{
	return aliyunDns_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setAliyunDns(bool aliyunDns)
{
	aliyunDns_ = aliyunDns;
	setParameter("AliyunDns", aliyunDns ? "true" : "false");
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getZhCity()const
{
	return zhCity_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setZhCity(const std::string& zhCity)
{
	zhCity_ = zhCity;
	setParameter("ZhCity", zhCity);
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getTelExt()const
{
	return telExt_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setTelExt(const std::string& telExt)
{
	telExt_ = telExt;
	setParameter("TelExt", telExt);
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getZhRegistrantName()const
{
	return zhRegistrantName_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setZhRegistrantName(const std::string& zhRegistrantName)
{
	zhRegistrantName_ = zhRegistrantName;
	setParameter("ZhRegistrantName", zhRegistrantName);
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getProvince()const
{
	return province_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setProvince(const std::string& province)
{
	province_ = province;
	setParameter("Province", province);
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getPostalCode()const
{
	return postalCode_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setPostalCode(const std::string& postalCode)
{
	postalCode_ = postalCode;
	setParameter("PostalCode", postalCode);
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getLang()const
{
	return lang_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getEmail()const
{
	return email_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setEmail(const std::string& email)
{
	email_ = email;
	setParameter("Email", email);
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getZhRegistrantOrganization()const
{
	return zhRegistrantOrganization_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setZhRegistrantOrganization(const std::string& zhRegistrantOrganization)
{
	zhRegistrantOrganization_ = zhRegistrantOrganization;
	setParameter("ZhRegistrantOrganization", zhRegistrantOrganization);
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getAddress()const
{
	return address_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setAddress(const std::string& address)
{
	address_ = address;
	setParameter("Address", address);
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getTelArea()const
{
	return telArea_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setTelArea(const std::string& telArea)
{
	telArea_ = telArea;
	setParameter("TelArea", telArea);
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getDomainName()const
{
	return domainName_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getZhAddress()const
{
	return zhAddress_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setZhAddress(const std::string& zhAddress)
{
	zhAddress_ = zhAddress;
	setParameter("ZhAddress", zhAddress);
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getRegistrantType()const
{
	return registrantType_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setRegistrantType(const std::string& registrantType)
{
	registrantType_ = registrantType;
	setParameter("RegistrantType", registrantType);
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getTelephone()const
{
	return telephone_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setTelephone(const std::string& telephone)
{
	telephone_ = telephone;
	setParameter("Telephone", telephone);
}

bool SaveSingleTaskForCreatingOrderActivateRequest::getTrademarkDomainActivation()const
{
	return trademarkDomainActivation_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setTrademarkDomainActivation(bool trademarkDomainActivation)
{
	trademarkDomainActivation_ = trademarkDomainActivation;
	setParameter("TrademarkDomainActivation", trademarkDomainActivation ? "true" : "false");
}

bool SaveSingleTaskForCreatingOrderActivateRequest::getUseCoupon()const
{
	return useCoupon_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setUseCoupon(bool useCoupon)
{
	useCoupon_ = useCoupon;
	setParameter("UseCoupon", useCoupon ? "true" : "false");
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getZhProvince()const
{
	return zhProvince_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setZhProvince(const std::string& zhProvince)
{
	zhProvince_ = zhProvince;
	setParameter("ZhProvince", zhProvince);
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getRegistrantOrganization()const
{
	return registrantOrganization_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setRegistrantOrganization(const std::string& registrantOrganization)
{
	registrantOrganization_ = registrantOrganization;
	setParameter("RegistrantOrganization", registrantOrganization);
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getPromotionNo()const
{
	return promotionNo_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setPromotionNo(const std::string& promotionNo)
{
	promotionNo_ = promotionNo;
	setParameter("PromotionNo", promotionNo);
}

bool SaveSingleTaskForCreatingOrderActivateRequest::getEnableDomainProxy()const
{
	return enableDomainProxy_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setEnableDomainProxy(bool enableDomainProxy)
{
	enableDomainProxy_ = enableDomainProxy;
	setParameter("EnableDomainProxy", enableDomainProxy ? "true" : "false");
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string SaveSingleTaskForCreatingOrderActivateRequest::getRegistrantName()const
{
	return registrantName_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setRegistrantName(const std::string& registrantName)
{
	registrantName_ = registrantName;
	setParameter("RegistrantName", registrantName);
}

bool SaveSingleTaskForCreatingOrderActivateRequest::getUsePromotion()const
{
	return usePromotion_;
}

void SaveSingleTaskForCreatingOrderActivateRequest::setUsePromotion(bool usePromotion)
{
	usePromotion_ = usePromotion;
	setParameter("UsePromotion", usePromotion ? "true" : "false");
}

