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

#include <alibabacloud/sgw/model/DescribeGatewayResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeGatewayResult::DescribeGatewayResult() :
	ServiceResult()
{}

DescribeGatewayResult::DescribeGatewayResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGatewayResult::~DescribeGatewayResult()
{}

void DescribeGatewayResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allElasticNodes = value["ElasticNodes"]["ElasticNode"];
	for (const auto &item : allElasticNodes)
		elasticNodes_.push_back(item.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["GatewayId"].isNull())
		gatewayId_ = value["GatewayId"].asString();
	if(!value["StorageBundleId"].isNull())
		storageBundleId_ = value["StorageBundleId"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["Location"].isNull())
		location_ = value["Location"].asString();
	if(!value["Category"].isNull())
		category_ = value["Category"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["GatewayClass"].isNull())
		gatewayClass_ = value["GatewayClass"].asString();
	if(!value["Model"].isNull())
		model_ = value["Model"].asString();
	if(!value["SerialNumber"].isNull())
		serialNumber_ = value["SerialNumber"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["EcsInstanceId"].isNull())
		ecsInstanceId_ = value["EcsInstanceId"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["Ip"].isNull())
		ip_ = value["Ip"].asString();
	if(!value["InnerIp"].isNull())
		innerIp_ = value["InnerIp"].asString();
	if(!value["CreatedTime"].isNull())
		createdTime_ = std::stol(value["CreatedTime"].asString());
	if(!value["ActivatedTime"].isNull())
		activatedTime_ = std::stol(value["ActivatedTime"].asString());
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();
	if(!value["GatewayVersion"].isNull())
		gatewayVersion_ = value["GatewayVersion"].asString();
	if(!value["BuyURL"].isNull())
		buyURL_ = value["BuyURL"].asString();
	if(!value["RenewURL"].isNull())
		renewURL_ = value["RenewURL"].asString();
	if(!value["IsPostPaid"].isNull())
		isPostPaid_ = value["IsPostPaid"].asString() == "true";
	if(!value["IsReleaseAfterExpiration"].isNull())
		isReleaseAfterExpiration_ = value["IsReleaseAfterExpiration"].asString() == "true";
	if(!value["ExpiredTime"].isNull())
		expiredTime_ = std::stol(value["ExpiredTime"].asString());
	if(!value["ExpireStatus"].isNull())
		expireStatus_ = std::stoi(value["ExpireStatus"].asString());
	if(!value["CommonBuyInstanceId"].isNull())
		commonBuyInstanceId_ = value["CommonBuyInstanceId"].asString();
	if(!value["PublicNetworkBandwidth"].isNull())
		publicNetworkBandwidth_ = std::stoi(value["PublicNetworkBandwidth"].asString());
	if(!value["GatewayType"].isNull())
		gatewayType_ = value["GatewayType"].asString();
	if(!value["ElasticGateway"].isNull())
		elasticGateway_ = value["ElasticGateway"].asString() == "true";
	if(!value["MaxThroughput"].isNull())
		maxThroughput_ = std::stoi(value["MaxThroughput"].asString());
	if(!value["Capacity"].isNull())
		capacity_ = std::stoi(value["Capacity"].asString());
	if(!value["DataLoadType"].isNull())
		dataLoadType_ = value["DataLoadType"].asString();
	if(!value["DataLoadInterval"].isNull())
		dataLoadInterval_ = std::stoi(value["DataLoadInterval"].asString());
	if(!value["LastErrorKey"].isNull())
		lastErrorKey_ = value["LastErrorKey"].asString();
	if(!value["InnerIpv6Ip"].isNull())
		innerIpv6Ip_ = value["InnerIpv6Ip"].asString();

}

std::string DescribeGatewayResult::getDescription()const
{
	return description_;
}

std::string DescribeGatewayResult::getCategory()const
{
	return category_;
}

long DescribeGatewayResult::getCreatedTime()const
{
	return createdTime_;
}

std::string DescribeGatewayResult::getTaskId()const
{
	return taskId_;
}

int DescribeGatewayResult::getPublicNetworkBandwidth()const
{
	return publicNetworkBandwidth_;
}

std::string DescribeGatewayResult::getDataLoadType()const
{
	return dataLoadType_;
}

std::string DescribeGatewayResult::getMessage()const
{
	return message_;
}

std::string DescribeGatewayResult::getIp()const
{
	return ip_;
}

int DescribeGatewayResult::getExpireStatus()const
{
	return expireStatus_;
}

std::string DescribeGatewayResult::getStorageBundleId()const
{
	return storageBundleId_;
}

std::string DescribeGatewayResult::getGatewayType()const
{
	return gatewayType_;
}

std::string DescribeGatewayResult::getGatewayClass()const
{
	return gatewayClass_;
}

bool DescribeGatewayResult::getSuccess()const
{
	return success_;
}

std::string DescribeGatewayResult::getName()const
{
	return name_;
}

bool DescribeGatewayResult::getIsPostPaid()const
{
	return isPostPaid_;
}

int DescribeGatewayResult::getCapacity()const
{
	return capacity_;
}

long DescribeGatewayResult::getExpiredTime()const
{
	return expiredTime_;
}

std::string DescribeGatewayResult::getGatewayVersion()const
{
	return gatewayVersion_;
}

bool DescribeGatewayResult::getIsReleaseAfterExpiration()const
{
	return isReleaseAfterExpiration_;
}

std::string DescribeGatewayResult::getStatus()const
{
	return status_;
}

std::string DescribeGatewayResult::getBuyURL()const
{
	return buyURL_;
}

int DescribeGatewayResult::getMaxThroughput()const
{
	return maxThroughput_;
}

int DescribeGatewayResult::getDataLoadInterval()const
{
	return dataLoadInterval_;
}

std::string DescribeGatewayResult::getInnerIp()const
{
	return innerIp_;
}

std::string DescribeGatewayResult::getVSwitchId()const
{
	return vSwitchId_;
}

std::vector<std::string> DescribeGatewayResult::getElasticNodes()const
{
	return elasticNodes_;
}

std::string DescribeGatewayResult::getGatewayId()const
{
	return gatewayId_;
}

std::string DescribeGatewayResult::getCode()const
{
	return code_;
}

std::string DescribeGatewayResult::getEcsInstanceId()const
{
	return ecsInstanceId_;
}

std::string DescribeGatewayResult::getType()const
{
	return type_;
}

std::string DescribeGatewayResult::getRenewURL()const
{
	return renewURL_;
}

std::string DescribeGatewayResult::getSerialNumber()const
{
	return serialNumber_;
}

std::string DescribeGatewayResult::getVpcId()const
{
	return vpcId_;
}

long DescribeGatewayResult::getActivatedTime()const
{
	return activatedTime_;
}

bool DescribeGatewayResult::getElasticGateway()const
{
	return elasticGateway_;
}

std::string DescribeGatewayResult::getCommonBuyInstanceId()const
{
	return commonBuyInstanceId_;
}

std::string DescribeGatewayResult::getModel()const
{
	return model_;
}

std::string DescribeGatewayResult::getInnerIpv6Ip()const
{
	return innerIpv6Ip_;
}

std::string DescribeGatewayResult::getLastErrorKey()const
{
	return lastErrorKey_;
}

std::string DescribeGatewayResult::getLocation()const
{
	return location_;
}

