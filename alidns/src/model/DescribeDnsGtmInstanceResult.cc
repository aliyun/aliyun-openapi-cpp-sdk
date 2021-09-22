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

#include <alibabacloud/alidns/model/DescribeDnsGtmInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDnsGtmInstanceResult::DescribeDnsGtmInstanceResult() :
	ServiceResult()
{}

DescribeDnsGtmInstanceResult::DescribeDnsGtmInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDnsGtmInstanceResult::~DescribeDnsGtmInstanceResult()
{}

void DescribeDnsGtmInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto configNode = value["Config"];
	if(!configNode["Ttl"].isNull())
		config_.ttl = std::stoi(configNode["Ttl"].asString());
	if(!configNode["AlertGroup"].isNull())
		config_.alertGroup = configNode["AlertGroup"].asString();
	if(!configNode["CnameType"].isNull())
		config_.cnameType = configNode["CnameType"].asString();
	if(!configNode["StrategyMode"].isNull())
		config_.strategyMode = configNode["StrategyMode"].asString();
	if(!configNode["InstanceName"].isNull())
		config_.instanceName = configNode["InstanceName"].asString();
	if(!configNode["PublicCnameMode"].isNull())
		config_.publicCnameMode = configNode["PublicCnameMode"].asString();
	if(!configNode["PublicUserDomainName"].isNull())
		config_.publicUserDomainName = configNode["PublicUserDomainName"].asString();
	if(!configNode["PubicZoneName"].isNull())
		config_.pubicZoneName = configNode["PubicZoneName"].asString();
	if(!configNode["PublicRr"].isNull())
		config_.publicRr = configNode["PublicRr"].asString();
	auto allAlertConfigNode = configNode["AlertConfig"]["AlertConfigItem"];
	for (auto configNodeAlertConfigAlertConfigItem : allAlertConfigNode)
	{
		Config::AlertConfigItem alertConfigItemObject;
		if(!configNodeAlertConfigAlertConfigItem["SmsNotice"].isNull())
			alertConfigItemObject.smsNotice = configNodeAlertConfigAlertConfigItem["SmsNotice"].asString() == "true";
		if(!configNodeAlertConfigAlertConfigItem["NoticeType"].isNull())
			alertConfigItemObject.noticeType = configNodeAlertConfigAlertConfigItem["NoticeType"].asString();
		if(!configNodeAlertConfigAlertConfigItem["EmailNotice"].isNull())
			alertConfigItemObject.emailNotice = configNodeAlertConfigAlertConfigItem["EmailNotice"].asString() == "true";
		if(!configNodeAlertConfigAlertConfigItem["DingtalkNotice"].isNull())
			alertConfigItemObject.dingtalkNotice = configNodeAlertConfigAlertConfigItem["DingtalkNotice"].asString() == "true";
		config_.alertConfig.push_back(alertConfigItemObject);
	}
	auto usedQuotaNode = value["UsedQuota"];
	if(!usedQuotaNode["EmailUsedCount"].isNull())
		usedQuota_.emailUsedCount = std::stoi(usedQuotaNode["EmailUsedCount"].asString());
	if(!usedQuotaNode["TaskUsedCount"].isNull())
		usedQuota_.taskUsedCount = std::stoi(usedQuotaNode["TaskUsedCount"].asString());
	if(!usedQuotaNode["SmsUsedCount"].isNull())
		usedQuota_.smsUsedCount = std::stoi(usedQuotaNode["SmsUsedCount"].asString());
	if(!usedQuotaNode["DingtalkUsedCount"].isNull())
		usedQuota_.dingtalkUsedCount = std::stoi(usedQuotaNode["DingtalkUsedCount"].asString());
	if(!value["ExpireTimestamp"].isNull())
		expireTimestamp_ = std::stol(value["ExpireTimestamp"].asString());
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["TaskQuota"].isNull())
		taskQuota_ = std::stoi(value["TaskQuota"].asString());
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["SmsQuota"].isNull())
		smsQuota_ = std::stoi(value["SmsQuota"].asString());
	if(!value["VersionCode"].isNull())
		versionCode_ = value["VersionCode"].asString();
	if(!value["PaymentType"].isNull())
		paymentType_ = value["PaymentType"].asString();
	if(!value["ExpireTime"].isNull())
		expireTime_ = value["ExpireTime"].asString();
	if(!value["CreateTimestamp"].isNull())
		createTimestamp_ = std::stol(value["CreateTimestamp"].asString());

}

long DescribeDnsGtmInstanceResult::getExpireTimestamp()const
{
	return expireTimestamp_;
}

std::string DescribeDnsGtmInstanceResult::getVersionCode()const
{
	return versionCode_;
}

std::string DescribeDnsGtmInstanceResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string DescribeDnsGtmInstanceResult::getInstanceId()const
{
	return instanceId_;
}

DescribeDnsGtmInstanceResult::Config DescribeDnsGtmInstanceResult::getConfig()const
{
	return config_;
}

int DescribeDnsGtmInstanceResult::getTaskQuota()const
{
	return taskQuota_;
}

std::string DescribeDnsGtmInstanceResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeDnsGtmInstanceResult::getPaymentType()const
{
	return paymentType_;
}

std::string DescribeDnsGtmInstanceResult::getExpireTime()const
{
	return expireTime_;
}

DescribeDnsGtmInstanceResult::UsedQuota DescribeDnsGtmInstanceResult::getUsedQuota()const
{
	return usedQuota_;
}

int DescribeDnsGtmInstanceResult::getSmsQuota()const
{
	return smsQuota_;
}

long DescribeDnsGtmInstanceResult::getCreateTimestamp()const
{
	return createTimestamp_;
}

