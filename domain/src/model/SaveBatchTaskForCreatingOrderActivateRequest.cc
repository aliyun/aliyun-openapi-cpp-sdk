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
		setParameter(str + ".Country", obj.country);
		setParameter(str + ".SubscriptionDuration", std::to_string(obj.subscriptionDuration));
		setParameter(str + ".PermitPremiumActivation", std::to_string(obj.permitPremiumActivation));
		setParameter(str + ".City", obj.city);
		setParameter(str + ".Dns2", obj.dns2);
		setParameter(str + ".Dns1", obj.dns1);
		setParameter(str + ".RegistrantProfileId", std::to_string(obj.registrantProfileId));
		setParameter(str + ".AliyunDns", std::to_string(obj.aliyunDns));
		setParameter(str + ".ZhCity", obj.zhCity);
		setParameter(str + ".TelExt", obj.telExt);
		setParameter(str + ".ZhRegistrantName", obj.zhRegistrantName);
		setParameter(str + ".Province", obj.province);
		setParameter(str + ".PostalCode", obj.postalCode);
		setParameter(str + ".Email", obj.email);
		setParameter(str + ".ZhRegistrantOrganization", obj.zhRegistrantOrganization);
		setParameter(str + ".Address", obj.address);
		setParameter(str + ".TelArea", obj.telArea);
		setParameter(str + ".DomainName", obj.domainName);
		setParameter(str + ".ZhAddress", obj.zhAddress);
		setParameter(str + ".RegistrantType", obj.registrantType);
		setParameter(str + ".Telephone", obj.telephone);
		setParameter(str + ".TrademarkDomainActivation", std::to_string(obj.trademarkDomainActivation));
		setParameter(str + ".ZhProvince", obj.zhProvince);
		setParameter(str + ".RegistrantOrganization", obj.registrantOrganization);
		setParameter(str + ".EnableDomainProxy", std::to_string(obj.enableDomainProxy));
		setParameter(str + ".RegistrantName", obj.registrantName);
	}
}

std::string SaveBatchTaskForCreatingOrderActivateRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveBatchTaskForCreatingOrderActivateRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string SaveBatchTaskForCreatingOrderActivateRequest::getLang()const
{
	return lang_;
}

void SaveBatchTaskForCreatingOrderActivateRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

