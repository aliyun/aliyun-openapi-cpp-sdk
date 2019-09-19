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

#include <alibabacloud/csb/model/GetOrderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CSB;
using namespace AlibabaCloud::CSB::Model;

GetOrderResult::GetOrderResult() :
	ServiceResult()
{}

GetOrderResult::GetOrderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOrderResult::~GetOrderResult()
{}

void GetOrderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto orderNode = dataNode["Order"];
	if(!orderNode["Alias"].isNull())
		data_.order.alias = orderNode["Alias"].asString();
	if(!orderNode["CredentialGroupId"].isNull())
		data_.order.credentialGroupId = std::stol(orderNode["CredentialGroupId"].asString());
	if(!orderNode["CsbId"].isNull())
		data_.order.csbId = std::stol(orderNode["CsbId"].asString());
	if(!orderNode["DauthGroupName"].isNull())
		data_.order.dauthGroupName = orderNode["DauthGroupName"].asString();
	if(!orderNode["GmtCreate"].isNull())
		data_.order.gmtCreate = std::stol(orderNode["GmtCreate"].asString());
	if(!orderNode["GmtModified"].isNull())
		data_.order.gmtModified = std::stol(orderNode["GmtModified"].asString());
	if(!orderNode["GroupName"].isNull())
		data_.order.groupName = orderNode["GroupName"].asString();
	if(!orderNode["Id"].isNull())
		data_.order.id = std::stol(orderNode["Id"].asString());
	if(!orderNode["ProjectName"].isNull())
		data_.order.projectName = orderNode["ProjectName"].asString();
	if(!orderNode["ServiceId"].isNull())
		data_.order.serviceId = std::stol(orderNode["ServiceId"].asString());
	if(!orderNode["ServiceName"].isNull())
		data_.order.serviceName = orderNode["ServiceName"].asString();
	if(!orderNode["ServiceStatus"].isNull())
		data_.order.serviceStatus = std::stoi(orderNode["ServiceStatus"].asString());
	if(!orderNode["ServiceVersion"].isNull())
		data_.order.serviceVersion = orderNode["ServiceVersion"].asString();
	if(!orderNode["StatisticName"].isNull())
		data_.order.statisticName = orderNode["StatisticName"].asString();
	if(!orderNode["Status"].isNull())
		data_.order.status = std::stoi(orderNode["Status"].asString());
	if(!orderNode["StrictWhiteListJson"].isNull())
		data_.order.strictWhiteListJson = orderNode["StrictWhiteListJson"].asString();
	if(!orderNode["UserId"].isNull())
		data_.order.userId = orderNode["UserId"].asString();
	auto allErrorTypeCatagoryListNode = orderNode["ErrorTypeCatagoryList"]["ErrorTypeCatagory"];
	for (auto orderNodeErrorTypeCatagoryListErrorTypeCatagory : allErrorTypeCatagoryListNode)
	{
		Data::Order::ErrorTypeCatagory errorTypeCatagoryObject;
		if(!orderNodeErrorTypeCatagoryListErrorTypeCatagory["Total"].isNull())
			errorTypeCatagoryObject.total = std::stoi(orderNodeErrorTypeCatagoryListErrorTypeCatagory["Total"].asString());
		if(!orderNodeErrorTypeCatagoryListErrorTypeCatagory["ErrorNum"].isNull())
			errorTypeCatagoryObject.errorNum = std::stoi(orderNodeErrorTypeCatagoryListErrorTypeCatagory["ErrorNum"].asString());
		if(!orderNodeErrorTypeCatagoryListErrorTypeCatagory["Name"].isNull())
			errorTypeCatagoryObject.name = orderNodeErrorTypeCatagoryListErrorTypeCatagory["Name"].asString();
		data_.order.errorTypeCatagoryList.push_back(errorTypeCatagoryObject);
	}
	auto serviceNode = orderNode["Service"];
	if(!serviceNode["AccessParamsJSON"].isNull())
		data_.order.service.accessParamsJSON = serviceNode["AccessParamsJSON"].asString();
	if(!serviceNode["Active"].isNull())
		data_.order.service.active = serviceNode["Active"].asString() == "true";
	if(!serviceNode["Alias"].isNull())
		data_.order.service.alias = serviceNode["Alias"].asString();
	if(!serviceNode["AllVisiable"].isNull())
		data_.order.service.allVisiable = serviceNode["AllVisiable"].asString() == "true";
	if(!serviceNode["ConsumeTypesJSON"].isNull())
		data_.order.service.consumeTypesJSON = serviceNode["ConsumeTypesJSON"].asString();
	if(!serviceNode["CreateTime"].isNull())
		data_.order.service.createTime = std::stol(serviceNode["CreateTime"].asString());
	if(!serviceNode["CsbId"].isNull())
		data_.order.service.csbId = std::stol(serviceNode["CsbId"].asString());
	if(!serviceNode["ErrDefJSON"].isNull())
		data_.order.service.errDefJSON = serviceNode["ErrDefJSON"].asString();
	if(!serviceNode["Id"].isNull())
		data_.order.service.id = std::stol(serviceNode["Id"].asString());
	if(!serviceNode["InterfaceName"].isNull())
		data_.order.service.interfaceName = serviceNode["InterfaceName"].asString();
	if(!serviceNode["OldVersion"].isNull())
		data_.order.service.oldVersion = serviceNode["OldVersion"].asString();
	if(!serviceNode["OttFlag"].isNull())
		data_.order.service.ottFlag = serviceNode["OttFlag"].asString() == "true";
	if(!serviceNode["OwnerId"].isNull())
		data_.order.service.ownerId = serviceNode["OwnerId"].asString();
	if(!serviceNode["PrincipalName"].isNull())
		data_.order.service.principalName = serviceNode["PrincipalName"].asString();
	if(!serviceNode["ProjectId"].isNull())
		data_.order.service.projectId = serviceNode["ProjectId"].asString();
	if(!serviceNode["ProjectName"].isNull())
		data_.order.service.projectName = serviceNode["ProjectName"].asString();
	if(!serviceNode["ProvideType"].isNull())
		data_.order.service.provideType = serviceNode["ProvideType"].asString();
	if(!serviceNode["SSL"].isNull())
		data_.order.service.sSL = serviceNode["SSL"].asString() == "true";
	if(!serviceNode["Scope"].isNull())
		data_.order.service.scope = serviceNode["Scope"].asString();
	if(!serviceNode["ServiceName"].isNull())
		data_.order.service.serviceName = serviceNode["ServiceName"].asString();
	if(!serviceNode["ServiceProviderType"].isNull())
		data_.order.service.serviceProviderType = serviceNode["ServiceProviderType"].asString();
	if(!serviceNode["ServiceVersion"].isNull())
		data_.order.service.serviceVersion = serviceNode["ServiceVersion"].asString();
	if(!serviceNode["SkipAuth"].isNull())
		data_.order.service.skipAuth = serviceNode["SkipAuth"].asString() == "true";
	if(!serviceNode["StatisticName"].isNull())
		data_.order.service.statisticName = serviceNode["StatisticName"].asString();
	if(!serviceNode["Status"].isNull())
		data_.order.service.status = std::stoi(serviceNode["Status"].asString());
	if(!serviceNode["UserId"].isNull())
		data_.order.service.userId = std::stol(serviceNode["UserId"].asString());
	if(!serviceNode["ValidConsumeTypes"].isNull())
		data_.order.service.validConsumeTypes = serviceNode["ValidConsumeTypes"].asString() == "true";
	if(!serviceNode["ValidProvideType"].isNull())
		data_.order.service.validProvideType = serviceNode["ValidProvideType"].asString() == "true";
	auto slaInfoNode = orderNode["SlaInfo"];
	if(!slaInfoNode["Qph"].isNull())
		data_.order.slaInfo.qph = slaInfoNode["Qph"].asString();
	if(!slaInfoNode["Qps"].isNull())
		data_.order.slaInfo.qps = slaInfoNode["Qps"].asString();
	auto totalNode = orderNode["Total"];
	if(!totalNode["ErrorNum"].isNull())
		data_.order.total.errorNum = std::stoi(totalNode["ErrorNum"].asString());
	if(!totalNode["Total"].isNull())
		data_.order.total.total = std::stoi(totalNode["Total"].asString());
		auto allStrictWhiteList = orderNode["StrictWhiteList"]["StrictWhite"];
		for (auto value : allStrictWhiteList)
			data_.order.strictWhiteList.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetOrderResult::getMessage()const
{
	return message_;
}

GetOrderResult::Data GetOrderResult::getData()const
{
	return data_;
}

int GetOrderResult::getCode()const
{
	return code_;
}

