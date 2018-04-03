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

#include <alibabacloud/domain/model/SaveBatchTaskForCreatingOrderTransferRequest.h>

using AlibabaCloud::Domain::Model::SaveBatchTaskForCreatingOrderTransferRequest;

SaveBatchTaskForCreatingOrderTransferRequest::SaveBatchTaskForCreatingOrderTransferRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveBatchTaskForCreatingOrderTransfer")
{}

SaveBatchTaskForCreatingOrderTransferRequest::~SaveBatchTaskForCreatingOrderTransferRequest()
{}

std::vector<SaveBatchTaskForCreatingOrderTransferRequest::OrderTransferParam> SaveBatchTaskForCreatingOrderTransferRequest::getOrderTransferParam()const
{
	return orderTransferParam_;
}

void SaveBatchTaskForCreatingOrderTransferRequest::setOrderTransferParam(const std::vector<OrderTransferParam>& orderTransferParam)
{
	orderTransferParam_ = orderTransferParam;
	int i = 0;
	for(int i = 0; i!= orderTransferParam.size(); i++)	{
		auto obj = orderTransferParam.at(i);
		std::string str ="OrderTransferParam."+ std::to_string(i);
		setParameter(str + ".DomainName", obj.domainName);
		setParameter(str + ".AuthorizationCode", obj.authorizationCode);
		setParameter(str + ".RegistrantProfileId", std::to_string(obj.registrantProfileId));
		setParameter(str + ".PermitPremiumTransfer", std::to_string(obj.permitPremiumTransfer));
	}
}

std::string SaveBatchTaskForCreatingOrderTransferRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveBatchTaskForCreatingOrderTransferRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string SaveBatchTaskForCreatingOrderTransferRequest::getLang()const
{
	return lang_;
}

void SaveBatchTaskForCreatingOrderTransferRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

