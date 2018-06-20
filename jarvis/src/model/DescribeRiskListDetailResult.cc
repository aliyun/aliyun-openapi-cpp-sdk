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

#include <alibabacloud/jarvis/model/DescribeRiskListDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Jarvis;
using namespace AlibabaCloud::Jarvis::Model;

DescribeRiskListDetailResult::DescribeRiskListDetailResult() :
	ServiceResult()
{}

DescribeRiskListDetailResult::DescribeRiskListDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRiskListDetailResult::~DescribeRiskListDetailResult()
{}

void DescribeRiskListDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDataList = value["DataList"]["Data"];
	for (auto value : allDataList)
	{
		Data dataListObject;
		if(!value["RiskId"].isNull())
			dataListObject.riskId = std::stoi(value["RiskId"].asString());
		if(!value["UpdateTime"].isNull())
			dataListObject.updateTime = value["UpdateTime"].asString();
		if(!value["RiskDescribe"].isNull())
			dataListObject.riskDescribe = value["RiskDescribe"].asString();
		if(!value["RiskType"].isNull())
			dataListObject.riskType = value["RiskType"].asString();
		if(!value["RiskInstance"].isNull())
			dataListObject.riskInstance = value["RiskInstance"].asString();
		if(!value["Product"].isNull())
			dataListObject.product = value["Product"].asString();
		if(!value["RegionId"].isNull())
			dataListObject.regionId = value["RegionId"].asString();
		if(!value["TacticsName"].isNull())
			dataListObject.tacticsName = value["TacticsName"].asString();
		if(!value["Status"].isNull())
			dataListObject.status = value["Status"].asString();
		if(!value["IgnoreTime"].isNull())
			dataListObject.ignoreTime = value["IgnoreTime"].asString();
		auto allEcsSecGroupRisk = value["EcsSecGroupRisk"]["EcsSecGroupRiskItem"];
		for (auto value : allEcsSecGroupRisk)
		{
			Data::EcsSecGroupRiskItem ecsSecGroupRiskObject;
			if(!value["NetType"].isNull())
				ecsSecGroupRiskObject.netType = value["NetType"].asString();
			if(!value["Direction"].isNull())
				ecsSecGroupRiskObject.direction = value["Direction"].asString();
			if(!value["DstPortRange"].isNull())
				ecsSecGroupRiskObject.dstPortRange = value["DstPortRange"].asString();
			if(!value["SrcIpRange"].isNull())
				ecsSecGroupRiskObject.srcIpRange = value["SrcIpRange"].asString();
			dataListObject.ecsSecGroupRisk.push_back(ecsSecGroupRiskObject);
		}
		auto allRdsWhitelistRisk = value["RdsWhitelistRisk"]["RdsWhitelistRiskItem"];
		for (auto value : allRdsWhitelistRisk)
		{
			Data::RdsWhitelistRiskItem rdsWhitelistRiskObject;
			if(!value["RdsWhitelistGroup"].isNull())
				rdsWhitelistRiskObject.rdsWhitelistGroup = value["RdsWhitelistGroup"].asString();
			if(!value["RiskDetail"].isNull())
				rdsWhitelistRiskObject.riskDetail = value["RiskDetail"].asString();
			dataListObject.rdsWhitelistRisk.push_back(rdsWhitelistRiskObject);
		}
		auto allInstanceList = value["InstanceList"]["InstanceList"];
		for (auto value : allInstanceList)
			dataListObject.instanceList.push_back(value.asString());
		dataList_.push_back(dataListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["total"].isNull())
		pageInfo_.total = std::stoi(pageInfoNode["total"].asString());
	if(!pageInfoNode["pageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["pageSize"].asString());
	if(!pageInfoNode["currentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["currentPage"].asString());
	if(!value["Module"].isNull())
		module_ = value["Module"].asString();

}

std::vector<DescribeRiskListDetailResult::Data> DescribeRiskListDetailResult::getDataList()const
{
	return dataList_;
}

DescribeRiskListDetailResult::PageInfo DescribeRiskListDetailResult::getPageInfo()const
{
	return pageInfo_;
}

std::string DescribeRiskListDetailResult::getModule()const
{
	return module_;
}

