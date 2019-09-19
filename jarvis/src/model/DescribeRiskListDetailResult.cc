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
	auto allDataListNode = value["DataList"]["Data"];
	for (auto valueDataListData : allDataListNode)
	{
		Data dataListObject;
		if(!valueDataListData["RiskId"].isNull())
			dataListObject.riskId = std::stoi(valueDataListData["RiskId"].asString());
		if(!valueDataListData["UpdateTime"].isNull())
			dataListObject.updateTime = valueDataListData["UpdateTime"].asString();
		if(!valueDataListData["RiskDescribe"].isNull())
			dataListObject.riskDescribe = valueDataListData["RiskDescribe"].asString();
		if(!valueDataListData["RiskType"].isNull())
			dataListObject.riskType = valueDataListData["RiskType"].asString();
		if(!valueDataListData["RiskInstance"].isNull())
			dataListObject.riskInstance = valueDataListData["RiskInstance"].asString();
		if(!valueDataListData["Product"].isNull())
			dataListObject.product = valueDataListData["Product"].asString();
		if(!valueDataListData["RegionId"].isNull())
			dataListObject.regionId = valueDataListData["RegionId"].asString();
		if(!valueDataListData["TacticsName"].isNull())
			dataListObject.tacticsName = valueDataListData["TacticsName"].asString();
		if(!valueDataListData["Status"].isNull())
			dataListObject.status = valueDataListData["Status"].asString();
		if(!valueDataListData["IgnoreTime"].isNull())
			dataListObject.ignoreTime = valueDataListData["IgnoreTime"].asString();
		auto allEcsSecGroupRiskNode = allDataListNode["EcsSecGroupRisk"]["EcsSecGroupRiskItem"];
		for (auto allDataListNodeEcsSecGroupRiskEcsSecGroupRiskItem : allEcsSecGroupRiskNode)
		{
			Data::EcsSecGroupRiskItem ecsSecGroupRiskObject;
			if(!allDataListNodeEcsSecGroupRiskEcsSecGroupRiskItem["NetType"].isNull())
				ecsSecGroupRiskObject.netType = allDataListNodeEcsSecGroupRiskEcsSecGroupRiskItem["NetType"].asString();
			if(!allDataListNodeEcsSecGroupRiskEcsSecGroupRiskItem["Direction"].isNull())
				ecsSecGroupRiskObject.direction = allDataListNodeEcsSecGroupRiskEcsSecGroupRiskItem["Direction"].asString();
			if(!allDataListNodeEcsSecGroupRiskEcsSecGroupRiskItem["DstPortRange"].isNull())
				ecsSecGroupRiskObject.dstPortRange = allDataListNodeEcsSecGroupRiskEcsSecGroupRiskItem["DstPortRange"].asString();
			if(!allDataListNodeEcsSecGroupRiskEcsSecGroupRiskItem["SrcIpRange"].isNull())
				ecsSecGroupRiskObject.srcIpRange = allDataListNodeEcsSecGroupRiskEcsSecGroupRiskItem["SrcIpRange"].asString();
			dataListObject.ecsSecGroupRisk.push_back(ecsSecGroupRiskObject);
		}
		auto allRdsWhitelistRiskNode = allDataListNode["RdsWhitelistRisk"]["RdsWhitelistRiskItem"];
		for (auto allDataListNodeRdsWhitelistRiskRdsWhitelistRiskItem : allRdsWhitelistRiskNode)
		{
			Data::RdsWhitelistRiskItem rdsWhitelistRiskObject;
			if(!allDataListNodeRdsWhitelistRiskRdsWhitelistRiskItem["RdsWhitelistGroup"].isNull())
				rdsWhitelistRiskObject.rdsWhitelistGroup = allDataListNodeRdsWhitelistRiskRdsWhitelistRiskItem["RdsWhitelistGroup"].asString();
			if(!allDataListNodeRdsWhitelistRiskRdsWhitelistRiskItem["RiskDetail"].isNull())
				rdsWhitelistRiskObject.riskDetail = allDataListNodeRdsWhitelistRiskRdsWhitelistRiskItem["RiskDetail"].asString();
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

