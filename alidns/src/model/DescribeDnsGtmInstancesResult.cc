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

#include <alibabacloud/alidns/model/DescribeDnsGtmInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDnsGtmInstancesResult::DescribeDnsGtmInstancesResult() :
	ServiceResult()
{}

DescribeDnsGtmInstancesResult::DescribeDnsGtmInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDnsGtmInstancesResult::~DescribeDnsGtmInstancesResult()
{}

void DescribeDnsGtmInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGtmInstancesNode = value["GtmInstances"]["GtmInstance"];
	for (auto valueGtmInstancesGtmInstance : allGtmInstancesNode)
	{
		GtmInstance gtmInstancesObject;
		if(!valueGtmInstancesGtmInstance["PaymentType"].isNull())
			gtmInstancesObject.paymentType = valueGtmInstancesGtmInstance["PaymentType"].asString();
		if(!valueGtmInstancesGtmInstance["ExpireTime"].isNull())
			gtmInstancesObject.expireTime = valueGtmInstancesGtmInstance["ExpireTime"].asString();
		if(!valueGtmInstancesGtmInstance["CreateTime"].isNull())
			gtmInstancesObject.createTime = valueGtmInstancesGtmInstance["CreateTime"].asString();
		if(!valueGtmInstancesGtmInstance["SmsQuota"].isNull())
			gtmInstancesObject.smsQuota = std::stoi(valueGtmInstancesGtmInstance["SmsQuota"].asString());
		if(!valueGtmInstancesGtmInstance["InstanceId"].isNull())
			gtmInstancesObject.instanceId = valueGtmInstancesGtmInstance["InstanceId"].asString();
		if(!valueGtmInstancesGtmInstance["ExpireTimestamp"].isNull())
			gtmInstancesObject.expireTimestamp = std::stol(valueGtmInstancesGtmInstance["ExpireTimestamp"].asString());
		if(!valueGtmInstancesGtmInstance["ResourceGroupId"].isNull())
			gtmInstancesObject.resourceGroupId = valueGtmInstancesGtmInstance["ResourceGroupId"].asString();
		if(!valueGtmInstancesGtmInstance["VersionCode"].isNull())
			gtmInstancesObject.versionCode = valueGtmInstancesGtmInstance["VersionCode"].asString();
		if(!valueGtmInstancesGtmInstance["TaskQuota"].isNull())
			gtmInstancesObject.taskQuota = std::stoi(valueGtmInstancesGtmInstance["TaskQuota"].asString());
		if(!valueGtmInstancesGtmInstance["CreateTimestamp"].isNull())
			gtmInstancesObject.createTimestamp = std::stol(valueGtmInstancesGtmInstance["CreateTimestamp"].asString());
		auto configNode = value["Config"];
		if(!configNode["Ttl"].isNull())
			gtmInstancesObject.config.ttl = std::stoi(configNode["Ttl"].asString());
		if(!configNode["AlertGroup"].isNull())
			gtmInstancesObject.config.alertGroup = configNode["AlertGroup"].asString();
		if(!configNode["PublicZoneName"].isNull())
			gtmInstancesObject.config.publicZoneName = configNode["PublicZoneName"].asString();
		if(!configNode["CnameType"].isNull())
			gtmInstancesObject.config.cnameType = configNode["CnameType"].asString();
		if(!configNode["StrategyMode"].isNull())
			gtmInstancesObject.config.strategyMode = configNode["StrategyMode"].asString();
		if(!configNode["InstanceName"].isNull())
			gtmInstancesObject.config.instanceName = configNode["InstanceName"].asString();
		if(!configNode["PublicCnameMode"].isNull())
			gtmInstancesObject.config.publicCnameMode = configNode["PublicCnameMode"].asString();
		if(!configNode["PublicUserDomainName"].isNull())
			gtmInstancesObject.config.publicUserDomainName = configNode["PublicUserDomainName"].asString();
		if(!configNode["PublicRr"].isNull())
			gtmInstancesObject.config.publicRr = configNode["PublicRr"].asString();
		auto allAlertConfigNode = configNode["AlertConfig"]["AlertConfigItem"];
		for (auto configNodeAlertConfigAlertConfigItem : allAlertConfigNode)
		{
			GtmInstance::Config::AlertConfigItem alertConfigItemObject;
			if(!configNodeAlertConfigAlertConfigItem["SmsNotice"].isNull())
				alertConfigItemObject.smsNotice = configNodeAlertConfigAlertConfigItem["SmsNotice"].asString();
			if(!configNodeAlertConfigAlertConfigItem["NoticeType"].isNull())
				alertConfigItemObject.noticeType = configNodeAlertConfigAlertConfigItem["NoticeType"].asString();
			if(!configNodeAlertConfigAlertConfigItem["EmailNotice"].isNull())
				alertConfigItemObject.emailNotice = configNodeAlertConfigAlertConfigItem["EmailNotice"].asString();
			if(!configNodeAlertConfigAlertConfigItem["DingtalkNotice"].isNull())
				alertConfigItemObject.dingtalkNotice = configNodeAlertConfigAlertConfigItem["DingtalkNotice"].asString();
			gtmInstancesObject.config.alertConfig.push_back(alertConfigItemObject);
		}
		auto usedQuotaNode = value["UsedQuota"];
		if(!usedQuotaNode["EmailUsedCount"].isNull())
			gtmInstancesObject.usedQuota.emailUsedCount = std::stoi(usedQuotaNode["EmailUsedCount"].asString());
		if(!usedQuotaNode["TaskUsedCount"].isNull())
			gtmInstancesObject.usedQuota.taskUsedCount = std::stoi(usedQuotaNode["TaskUsedCount"].asString());
		if(!usedQuotaNode["SmsUsedCount"].isNull())
			gtmInstancesObject.usedQuota.smsUsedCount = std::stoi(usedQuotaNode["SmsUsedCount"].asString());
		if(!usedQuotaNode["DingtalkUsedCount"].isNull())
			gtmInstancesObject.usedQuota.dingtalkUsedCount = std::stoi(usedQuotaNode["DingtalkUsedCount"].asString());
		gtmInstances_.push_back(gtmInstancesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalPages"].isNull())
		totalPages_ = std::stoi(value["TotalPages"].asString());
	if(!value["TotalItems"].isNull())
		totalItems_ = std::stoi(value["TotalItems"].asString());

}

int DescribeDnsGtmInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDnsGtmInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDnsGtmInstancesResult::GtmInstance> DescribeDnsGtmInstancesResult::getGtmInstances()const
{
	return gtmInstances_;
}

int DescribeDnsGtmInstancesResult::getTotalPages()const
{
	return totalPages_;
}

int DescribeDnsGtmInstancesResult::getTotalItems()const
{
	return totalItems_;
}

