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

#include <alibabacloud/sddp/model/DescribeDataLimitsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeDataLimitsResult::DescribeDataLimitsResult() :
	ServiceResult()
{}

DescribeDataLimitsResult::DescribeDataLimitsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataLimitsResult::~DescribeDataLimitsResult()
{}

void DescribeDataLimitsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["DataLimit"];
	for (auto valueItemsDataLimit : allItemsNode)
	{
		DataLimit itemsObject;
		if(!valueItemsDataLimit["SupportEvent"].isNull())
			itemsObject.supportEvent = valueItemsDataLimit["SupportEvent"].asString() == "true";
		if(!valueItemsDataLimit["ErrorMessage"].isNull())
			itemsObject.errorMessage = valueItemsDataLimit["ErrorMessage"].asString();
		if(!valueItemsDataLimit["CheckStatus"].isNull())
			itemsObject.checkStatus = std::stoi(valueItemsDataLimit["CheckStatus"].asString());
		if(!valueItemsDataLimit["LocalName"].isNull())
			itemsObject.localName = valueItemsDataLimit["LocalName"].asString();
		if(!valueItemsDataLimit["TenantName"].isNull())
			itemsObject.tenantName = valueItemsDataLimit["TenantName"].asString();
		if(!valueItemsDataLimit["AgentId"].isNull())
			itemsObject.agentId = valueItemsDataLimit["AgentId"].asString();
		if(!valueItemsDataLimit["NextStartTime"].isNull())
			itemsObject.nextStartTime = std::stol(valueItemsDataLimit["NextStartTime"].asString());
		if(!valueItemsDataLimit["Connector"].isNull())
			itemsObject.connector = valueItemsDataLimit["Connector"].asString();
		if(!valueItemsDataLimit["Port"].isNull())
			itemsObject.port = std::stoi(valueItemsDataLimit["Port"].asString());
		if(!valueItemsDataLimit["CheckStatusName"].isNull())
			itemsObject.checkStatusName = valueItemsDataLimit["CheckStatusName"].asString();
		if(!valueItemsDataLimit["AgentState"].isNull())
			itemsObject.agentState = std::stoi(valueItemsDataLimit["AgentState"].asString());
		if(!valueItemsDataLimit["SamplingSize"].isNull())
			itemsObject.samplingSize = std::stoi(valueItemsDataLimit["SamplingSize"].asString());
		if(!valueItemsDataLimit["ParentId"].isNull())
			itemsObject.parentId = valueItemsDataLimit["ParentId"].asString();
		if(!valueItemsDataLimit["DatamaskStatus"].isNull())
			itemsObject.datamaskStatus = std::stoi(valueItemsDataLimit["DatamaskStatus"].asString());
		if(!valueItemsDataLimit["ProcessTotalCount"].isNull())
			itemsObject.processTotalCount = std::stoi(valueItemsDataLimit["ProcessTotalCount"].asString());
		if(!valueItemsDataLimit["ResourceType"].isNull())
			itemsObject.resourceType = std::stol(valueItemsDataLimit["ResourceType"].asString());
		if(!valueItemsDataLimit["ErrorCode"].isNull())
			itemsObject.errorCode = valueItemsDataLimit["ErrorCode"].asString();
		if(!valueItemsDataLimit["OcrStatus"].isNull())
			itemsObject.ocrStatus = std::stoi(valueItemsDataLimit["OcrStatus"].asString());
		if(!valueItemsDataLimit["LogStoreDay"].isNull())
			itemsObject.logStoreDay = std::stoi(valueItemsDataLimit["LogStoreDay"].asString());
		if(!valueItemsDataLimit["EventStatus"].isNull())
			itemsObject.eventStatus = std::stoi(valueItemsDataLimit["EventStatus"].asString());
		if(!valueItemsDataLimit["SupportScan"].isNull())
			itemsObject.supportScan = valueItemsDataLimit["SupportScan"].asString() == "true";
		if(!valueItemsDataLimit["LastFinishedTime"].isNull())
			itemsObject.lastFinishedTime = std::stol(valueItemsDataLimit["LastFinishedTime"].asString());
		if(!valueItemsDataLimit["UserName"].isNull())
			itemsObject.userName = valueItemsDataLimit["UserName"].asString();
		if(!valueItemsDataLimit["AuditStatus"].isNull())
			itemsObject.auditStatus = std::stoi(valueItemsDataLimit["AuditStatus"].asString());
		if(!valueItemsDataLimit["SupportOcr"].isNull())
			itemsObject.supportOcr = valueItemsDataLimit["SupportOcr"].asString() == "true";
		if(!valueItemsDataLimit["SupportAgentInstall"].isNull())
			itemsObject.supportAgentInstall = valueItemsDataLimit["SupportAgentInstall"].asString() == "true";
		if(!valueItemsDataLimit["EngineType"].isNull())
			itemsObject.engineType = valueItemsDataLimit["EngineType"].asString();
		if(!valueItemsDataLimit["InstanceId"].isNull())
			itemsObject.instanceId = valueItemsDataLimit["InstanceId"].asString();
		if(!valueItemsDataLimit["TotalCount"].isNull())
			itemsObject.totalCount = std::stoi(valueItemsDataLimit["TotalCount"].asString());
		if(!valueItemsDataLimit["InstanceDescription"].isNull())
			itemsObject.instanceDescription = valueItemsDataLimit["InstanceDescription"].asString();
		if(!valueItemsDataLimit["DbVersion"].isNull())
			itemsObject.dbVersion = valueItemsDataLimit["DbVersion"].asString();
		if(!valueItemsDataLimit["RegionId"].isNull())
			itemsObject.regionId = valueItemsDataLimit["RegionId"].asString();
		if(!valueItemsDataLimit["GmtCreate"].isNull())
			itemsObject.gmtCreate = std::stol(valueItemsDataLimit["GmtCreate"].asString());
		if(!valueItemsDataLimit["SupportAudit"].isNull())
			itemsObject.supportAudit = valueItemsDataLimit["SupportAudit"].asString() == "true";
		if(!valueItemsDataLimit["AutoScan"].isNull())
			itemsObject.autoScan = std::stoi(valueItemsDataLimit["AutoScan"].asString());
		if(!valueItemsDataLimit["ResourceTypeCode"].isNull())
			itemsObject.resourceTypeCode = valueItemsDataLimit["ResourceTypeCode"].asString();
		if(!valueItemsDataLimit["SupportDatamask"].isNull())
			itemsObject.supportDatamask = valueItemsDataLimit["SupportDatamask"].asString() == "true";
		if(!valueItemsDataLimit["ProcessStatus"].isNull())
			itemsObject.processStatus = std::stoi(valueItemsDataLimit["ProcessStatus"].asString());
		if(!valueItemsDataLimit["Id"].isNull())
			itemsObject.id = std::stol(valueItemsDataLimit["Id"].asString());
		if(!valueItemsDataLimit["Enable"].isNull())
			itemsObject.enable = std::stoi(valueItemsDataLimit["Enable"].asString());
		if(!valueItemsDataLimit["VpcId"].isNull())
			itemsObject.vpcId = valueItemsDataLimit["VpcId"].asString();
		auto allSecurityGroupIdList = value["SecurityGroupIdList"]["seucurityGroup"];
		for (auto value : allSecurityGroupIdList)
			itemsObject.securityGroupIdList.push_back(value.asString());
		auto allVSwitchIdList = value["VSwitchIdList"]["vSwitch"];
		for (auto value : allVSwitchIdList)
			itemsObject.vSwitchIdList.push_back(value.asString());
		items_.push_back(itemsObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDataLimitsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDataLimitsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDataLimitsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeDataLimitsResult::DataLimit> DescribeDataLimitsResult::getItems()const
{
	return items_;
}

