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

#include <alibabacloud/sas/model/DescribeExposedStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeExposedStatisticsResult::DescribeExposedStatisticsResult() :
	ServiceResult()
{}

DescribeExposedStatisticsResult::DescribeExposedStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeExposedStatisticsResult::~DescribeExposedStatisticsResult()
{}

void DescribeExposedStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ExposedLaterVulCount"].isNull())
		exposedLaterVulCount_ = std::stoi(value["ExposedLaterVulCount"].asString());
	if(!value["ExposedComponentCount"].isNull())
		exposedComponentCount_ = std::stoi(value["ExposedComponentCount"].asString());
	if(!value["ExposedPortCount"].isNull())
		exposedPortCount_ = std::stoi(value["ExposedPortCount"].asString());
	if(!value["ExposedInstanceCount"].isNull())
		exposedInstanceCount_ = std::stoi(value["ExposedInstanceCount"].asString());
	if(!value["ExposedWeekPasswordMachineCount"].isNull())
		exposedWeekPasswordMachineCount_ = std::stoi(value["ExposedWeekPasswordMachineCount"].asString());
	if(!value["ExposedNntfVulCount"].isNull())
		exposedNntfVulCount_ = std::stoi(value["ExposedNntfVulCount"].asString());
	if(!value["GatewayAssetCount"].isNull())
		gatewayAssetCount_ = std::stoi(value["GatewayAssetCount"].asString());
	if(!value["ExposedIpCount"].isNull())
		exposedIpCount_ = std::stoi(value["ExposedIpCount"].asString());
	if(!value["ExposedAsapVulCount"].isNull())
		exposedAsapVulCount_ = std::stoi(value["ExposedAsapVulCount"].asString());

}

int DescribeExposedStatisticsResult::getExposedPortCount()const
{
	return exposedPortCount_;
}

int DescribeExposedStatisticsResult::getExposedWeekPasswordMachineCount()const
{
	return exposedWeekPasswordMachineCount_;
}

int DescribeExposedStatisticsResult::getExposedLaterVulCount()const
{
	return exposedLaterVulCount_;
}

int DescribeExposedStatisticsResult::getExposedInstanceCount()const
{
	return exposedInstanceCount_;
}

int DescribeExposedStatisticsResult::getGatewayAssetCount()const
{
	return gatewayAssetCount_;
}

int DescribeExposedStatisticsResult::getExposedComponentCount()const
{
	return exposedComponentCount_;
}

int DescribeExposedStatisticsResult::getExposedNntfVulCount()const
{
	return exposedNntfVulCount_;
}

int DescribeExposedStatisticsResult::getExposedIpCount()const
{
	return exposedIpCount_;
}

int DescribeExposedStatisticsResult::getExposedAsapVulCount()const
{
	return exposedAsapVulCount_;
}

