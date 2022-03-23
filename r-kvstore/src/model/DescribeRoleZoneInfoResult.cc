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

#include <alibabacloud/r-kvstore/model/DescribeRoleZoneInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeRoleZoneInfoResult::DescribeRoleZoneInfoResult() :
	ServiceResult()
{}

DescribeRoleZoneInfoResult::DescribeRoleZoneInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRoleZoneInfoResult::~DescribeRoleZoneInfoResult()
{}

void DescribeRoleZoneInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNodeNode = value["Node"]["NodeInfo"];
	for (auto valueNodeNodeInfo : allNodeNode)
	{
		NodeInfo nodeObject;
		if(!valueNodeNodeInfo["CPUUsage"].isNull())
			nodeObject.cPUUsage = valueNodeNodeInfo["CPUUsage"].asString();
		if(!valueNodeNodeInfo["DefaultBandWidth"].isNull())
			nodeObject.defaultBandWidth = std::stol(valueNodeNodeInfo["DefaultBandWidth"].asString());
		if(!valueNodeNodeInfo["CurrentMinorVersion"].isNull())
			nodeObject.currentMinorVersion = valueNodeNodeInfo["CurrentMinorVersion"].asString();
		if(!valueNodeNodeInfo["CurrentBandWidth"].isNull())
			nodeObject.currentBandWidth = std::stol(valueNodeNodeInfo["CurrentBandWidth"].asString());
		if(!valueNodeNodeInfo["InsType"].isNull())
			nodeObject.insType = std::stoi(valueNodeNodeInfo["InsType"].asString());
		if(!valueNodeNodeInfo["IntranetOut"].isNull())
			nodeObject.intranetOut = std::stof(valueNodeNodeInfo["IntranetOut"].asString());
		if(!valueNodeNodeInfo["IsLatestVersion"].isNull())
			nodeObject.isLatestVersion = std::stoi(valueNodeNodeInfo["IsLatestVersion"].asString());
		if(!valueNodeNodeInfo["Connection"].isNull())
			nodeObject.connection = std::stof(valueNodeNodeInfo["Connection"].asString());
		if(!valueNodeNodeInfo["InsName"].isNull())
			nodeObject.insName = valueNodeNodeInfo["InsName"].asString();
		if(!valueNodeNodeInfo["NodeType"].isNull())
			nodeObject.nodeType = valueNodeNodeInfo["NodeType"].asString();
		if(!valueNodeNodeInfo["IntranetIn"].isNull())
			nodeObject.intranetIn = std::stof(valueNodeNodeInfo["IntranetIn"].asString());
		if(!valueNodeNodeInfo["AvgRt"].isNull())
			nodeObject.avgRt = std::stof(valueNodeNodeInfo["AvgRt"].asString());
		if(!valueNodeNodeInfo["ZoneId"].isNull())
			nodeObject.zoneId = valueNodeNodeInfo["ZoneId"].asString();
		if(!valueNodeNodeInfo["IsOpenBandWidthService"].isNull())
			nodeObject.isOpenBandWidthService = valueNodeNodeInfo["IsOpenBandWidthService"].asString() == "true";
		if(!valueNodeNodeInfo["CustinsId"].isNull())
			nodeObject.custinsId = valueNodeNodeInfo["CustinsId"].asString();
		if(!valueNodeNodeInfo["Role"].isNull())
			nodeObject.role = valueNodeNodeInfo["Role"].asString();
		if(!valueNodeNodeInfo["NodeId"].isNull())
			nodeObject.nodeId = valueNodeNodeInfo["NodeId"].asString();
		node_.push_back(nodeObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeRoleZoneInfoResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeRoleZoneInfoResult::getPageSize()const
{
	return pageSize_;
}

int DescribeRoleZoneInfoResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeRoleZoneInfoResult::NodeInfo> DescribeRoleZoneInfoResult::getNode()const
{
	return node_;
}

