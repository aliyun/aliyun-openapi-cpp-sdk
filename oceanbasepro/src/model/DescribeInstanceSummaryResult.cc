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

#include <alibabacloud/oceanbasepro/model/DescribeInstanceSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeInstanceSummaryResult::DescribeInstanceSummaryResult() :
	ServiceResult()
{}

DescribeInstanceSummaryResult::DescribeInstanceSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceSummaryResult::~DescribeInstanceSummaryResult()
{}

void DescribeInstanceSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto instanceSummaryNode = value["InstanceSummary"];
	if(!instanceSummaryNode["TotalInstancesCount"].isNull())
		instanceSummary_.totalInstancesCount = std::stol(instanceSummaryNode["TotalInstancesCount"].asString());
	if(!instanceSummaryNode["OverLoadInstancesCount"].isNull())
		instanceSummary_.overLoadInstancesCount = std::stol(instanceSummaryNode["OverLoadInstancesCount"].asString());
	if(!instanceSummaryNode["ImmediatelyExpiredInstancesCount"].isNull())
		instanceSummary_.immediatelyExpiredInstancesCount = std::stol(instanceSummaryNode["ImmediatelyExpiredInstancesCount"].asString());
	if(!instanceSummaryNode["RunningInstancesCount"].isNull())
		instanceSummary_.runningInstancesCount = std::stol(instanceSummaryNode["RunningInstancesCount"].asString());
	if(!instanceSummaryNode["InsufficientDiskInstancesCount"].isNull())
		instanceSummary_.insufficientDiskInstancesCount = std::stol(instanceSummaryNode["InsufficientDiskInstancesCount"].asString());
	if(!instanceSummaryNode["ExpiredInstancesCount"].isNull())
		instanceSummary_.expiredInstancesCount = std::stol(instanceSummaryNode["ExpiredInstancesCount"].asString());
	if(!instanceSummaryNode["AlarmSummaryCount"].isNull())
		instanceSummary_.alarmSummaryCount = std::stol(instanceSummaryNode["AlarmSummaryCount"].asString());
	if(!instanceSummaryNode["AnomalySQLCount"].isNull())
		instanceSummary_.anomalySQLCount = std::stol(instanceSummaryNode["AnomalySQLCount"].asString());
	if(!instanceSummaryNode["ClusterInstancesCount"].isNull())
		instanceSummary_.clusterInstancesCount = std::stol(instanceSummaryNode["ClusterInstancesCount"].asString());
	if(!instanceSummaryNode["TenantInstancesCount"].isNull())
		instanceSummary_.tenantInstancesCount = std::stol(instanceSummaryNode["TenantInstancesCount"].asString());
	if(!instanceSummaryNode["TotalOmsInstancesCount"].isNull())
		instanceSummary_.totalOmsInstancesCount = std::stol(instanceSummaryNode["TotalOmsInstancesCount"].asString());
	auto allRegionalInstanceSummaryListNode = instanceSummaryNode["RegionalInstanceSummaryList"]["RegionalInstanceSummaryLis"];
	for (auto instanceSummaryNodeRegionalInstanceSummaryListRegionalInstanceSummaryLis : allRegionalInstanceSummaryListNode)
	{
		InstanceSummary::RegionalInstanceSummaryLis regionalInstanceSummaryLisObject;
		if(!instanceSummaryNodeRegionalInstanceSummaryListRegionalInstanceSummaryLis["Region"].isNull())
			regionalInstanceSummaryLisObject.region = instanceSummaryNodeRegionalInstanceSummaryListRegionalInstanceSummaryLis["Region"].asString();
		if(!instanceSummaryNodeRegionalInstanceSummaryListRegionalInstanceSummaryLis["TotalInstancesCount"].isNull())
			regionalInstanceSummaryLisObject.totalInstancesCount = std::stol(instanceSummaryNodeRegionalInstanceSummaryListRegionalInstanceSummaryLis["TotalInstancesCount"].asString());
		if(!instanceSummaryNodeRegionalInstanceSummaryListRegionalInstanceSummaryLis["ImmediatelyExpiredInstancesCount"].isNull())
			regionalInstanceSummaryLisObject.immediatelyExpiredInstancesCount = std::stol(instanceSummaryNodeRegionalInstanceSummaryListRegionalInstanceSummaryLis["ImmediatelyExpiredInstancesCount"].asString());
		if(!instanceSummaryNodeRegionalInstanceSummaryListRegionalInstanceSummaryLis["RunningInstancesCount"].isNull())
			regionalInstanceSummaryLisObject.runningInstancesCount = std::stol(instanceSummaryNodeRegionalInstanceSummaryListRegionalInstanceSummaryLis["RunningInstancesCount"].asString());
		if(!instanceSummaryNodeRegionalInstanceSummaryListRegionalInstanceSummaryLis["ExpiredInstancesCount"].isNull())
			regionalInstanceSummaryLisObject.expiredInstancesCount = std::stol(instanceSummaryNodeRegionalInstanceSummaryListRegionalInstanceSummaryLis["ExpiredInstancesCount"].asString());
		if(!instanceSummaryNodeRegionalInstanceSummaryListRegionalInstanceSummaryLis["RecentCreatedInstancesCount"].isNull())
			regionalInstanceSummaryLisObject.recentCreatedInstancesCount = std::stol(instanceSummaryNodeRegionalInstanceSummaryListRegionalInstanceSummaryLis["RecentCreatedInstancesCount"].asString());
		instanceSummary_.regionalInstanceSummaryList.push_back(regionalInstanceSummaryLisObject);
	}

}

DescribeInstanceSummaryResult::InstanceSummary DescribeInstanceSummaryResult::getInstanceSummary()const
{
	return instanceSummary_;
}

