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

#include <alibabacloud/cc5g/model/GetWirelessCloudConnectorResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CC5G;
using namespace AlibabaCloud::CC5G::Model;

GetWirelessCloudConnectorResult::GetWirelessCloudConnectorResult() :
	ServiceResult()
{}

GetWirelessCloudConnectorResult::GetWirelessCloudConnectorResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetWirelessCloudConnectorResult::~GetWirelessCloudConnectorResult()
{}

void GetWirelessCloudConnectorResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNetLinksNode = value["NetLinks"]["NetLink"];
	for (auto valueNetLinksNetLink : allNetLinksNode)
	{
		NetLink netLinksObject;
		if(!valueNetLinksNetLink["RegionId"].isNull())
			netLinksObject.regionId = valueNetLinksNetLink["RegionId"].asString();
		if(!valueNetLinksNetLink["NetLinkId"].isNull())
			netLinksObject.netLinkId = valueNetLinksNetLink["NetLinkId"].asString();
		if(!valueNetLinksNetLink["Name"].isNull())
			netLinksObject.name = valueNetLinksNetLink["Name"].asString();
		if(!valueNetLinksNetLink["Description"].isNull())
			netLinksObject.description = valueNetLinksNetLink["Description"].asString();
		if(!valueNetLinksNetLink["Status"].isNull())
			netLinksObject.status = valueNetLinksNetLink["Status"].asString();
		if(!valueNetLinksNetLink["Type"].isNull())
			netLinksObject.type = valueNetLinksNetLink["Type"].asString();
		if(!valueNetLinksNetLink["APN"].isNull())
			netLinksObject.aPN = valueNetLinksNetLink["APN"].asString();
		if(!valueNetLinksNetLink["ISP"].isNull())
			netLinksObject.iSP = valueNetLinksNetLink["ISP"].asString();
		if(!valueNetLinksNetLink["VpcId"].isNull())
			netLinksObject.vpcId = valueNetLinksNetLink["VpcId"].asString();
		if(!valueNetLinksNetLink["CreateTime"].isNull())
			netLinksObject.createTime = valueNetLinksNetLink["CreateTime"].asString();
		if(!valueNetLinksNetLink["GrantAliUid"].isNull())
			netLinksObject.grantAliUid = valueNetLinksNetLink["GrantAliUid"].asString();
		auto allVSwitchs = value["VSwitchs"]["VSwitch"];
		for (auto value : allVSwitchs)
			netLinksObject.vSwitchs.push_back(value.asString());
		netLinks_.push_back(netLinksObject);
	}
	auto allFeatures = value["Features"]["Feature"];
	for (const auto &item : allFeatures)
		features_.push_back(item.asString());
	if(!value["WirelessCloudConnectorId"].isNull())
		wirelessCloudConnectorId_ = value["WirelessCloudConnectorId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["UseCase"].isNull())
		useCase_ = value["UseCase"].asString();
	if(!value["DataPackageId"].isNull())
		dataPackageId_ = value["DataPackageId"].asString();
	if(!value["DataPackageType"].isNull())
		dataPackageType_ = value["DataPackageType"].asString();
	if(!value["CardCount"].isNull())
		cardCount_ = value["CardCount"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["BusinessType"].isNull())
		businessType_ = value["BusinessType"].asString();
	if(!value["WirelessCloudConnectorGroupId"].isNull())
		wirelessCloudConnectorGroupId_ = value["WirelessCloudConnectorGroupId"].asString();
	if(!value["ServiceType"].isNull())
		serviceType_ = value["ServiceType"].asString();

}

std::string GetWirelessCloudConnectorResult::getStatus()const
{
	return status_;
}

std::string GetWirelessCloudConnectorResult::getDataPackageType()const
{
	return dataPackageType_;
}

std::string GetWirelessCloudConnectorResult::getDescription()const
{
	return description_;
}

std::string GetWirelessCloudConnectorResult::getCreateTime()const
{
	return createTime_;
}

std::string GetWirelessCloudConnectorResult::getBusinessType()const
{
	return businessType_;
}

std::string GetWirelessCloudConnectorResult::getUseCase()const
{
	return useCase_;
}

std::string GetWirelessCloudConnectorResult::getWirelessCloudConnectorGroupId()const
{
	return wirelessCloudConnectorGroupId_;
}

std::string GetWirelessCloudConnectorResult::getName()const
{
	return name_;
}

std::string GetWirelessCloudConnectorResult::getWirelessCloudConnectorId()const
{
	return wirelessCloudConnectorId_;
}

std::string GetWirelessCloudConnectorResult::getCardCount()const
{
	return cardCount_;
}

std::string GetWirelessCloudConnectorResult::getServiceType()const
{
	return serviceType_;
}

std::vector<std::string> GetWirelessCloudConnectorResult::getFeatures()const
{
	return features_;
}

std::string GetWirelessCloudConnectorResult::getDataPackageId()const
{
	return dataPackageId_;
}

std::string GetWirelessCloudConnectorResult::getRegionId()const
{
	return regionId_;
}

std::vector<GetWirelessCloudConnectorResult::NetLink> GetWirelessCloudConnectorResult::getNetLinks()const
{
	return netLinks_;
}

