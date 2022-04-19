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

#include <alibabacloud/sas/model/DescribeDomainDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeDomainDetailResult::DescribeDomainDetailResult() :
	ServiceResult()
{}

DescribeDomainDetailResult::DescribeDomainDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainDetailResult::~DescribeDomainDetailResult()
{}

void DescribeDomainDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainDetailItemsNode = value["DomainDetailItems"]["DomainDetailItem"];
	for (auto valueDomainDetailItemsDomainDetailItem : allDomainDetailItemsNode)
	{
		DomainDetailItem domainDetailItemsObject;
		if(!valueDomainDetailItemsDomainDetailItem["Uuid"].isNull())
			domainDetailItemsObject.uuid = valueDomainDetailItemsDomainDetailItem["Uuid"].asString();
		if(!valueDomainDetailItemsDomainDetailItem["InternetIp"].isNull())
			domainDetailItemsObject.internetIp = valueDomainDetailItemsDomainDetailItem["InternetIp"].asString();
		if(!valueDomainDetailItemsDomainDetailItem["MachineIp"].isNull())
			domainDetailItemsObject.machineIp = valueDomainDetailItemsDomainDetailItem["MachineIp"].asString();
		if(!valueDomainDetailItemsDomainDetailItem["InstanceName"].isNull())
			domainDetailItemsObject.instanceName = valueDomainDetailItemsDomainDetailItem["InstanceName"].asString();
		if(!valueDomainDetailItemsDomainDetailItem["InstanceId"].isNull())
			domainDetailItemsObject.instanceId = valueDomainDetailItemsDomainDetailItem["InstanceId"].asString();
		if(!valueDomainDetailItemsDomainDetailItem["IntranetIp"].isNull())
			domainDetailItemsObject.intranetIp = valueDomainDetailItemsDomainDetailItem["IntranetIp"].asString();
		if(!valueDomainDetailItemsDomainDetailItem["AssetType"].isNull())
			domainDetailItemsObject.assetType = valueDomainDetailItemsDomainDetailItem["AssetType"].asString();
		domainDetailItems_.push_back(domainDetailItemsObject);
	}
	if(!value["Domain"].isNull())
		domain_ = value["Domain"].asString();
	if(!value["VulCount"].isNull())
		vulCount_ = std::stoi(value["VulCount"].asString());
	if(!value["AlarmCount"].isNull())
		alarmCount_ = std::stoi(value["AlarmCount"].asString());
	if(!value["RootDomain"].isNull())
		rootDomain_ = value["RootDomain"].asString();

}

std::vector<DescribeDomainDetailResult::DomainDetailItem> DescribeDomainDetailResult::getDomainDetailItems()const
{
	return domainDetailItems_;
}

std::string DescribeDomainDetailResult::getRootDomain()const
{
	return rootDomain_;
}

std::string DescribeDomainDetailResult::getDomain()const
{
	return domain_;
}

int DescribeDomainDetailResult::getVulCount()const
{
	return vulCount_;
}

int DescribeDomainDetailResult::getAlarmCount()const
{
	return alarmCount_;
}

