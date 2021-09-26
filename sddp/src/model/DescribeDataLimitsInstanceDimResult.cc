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

#include <alibabacloud/sddp/model/DescribeDataLimitsInstanceDimResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeDataLimitsInstanceDimResult::DescribeDataLimitsInstanceDimResult() :
	ServiceResult()
{}

DescribeDataLimitsInstanceDimResult::DescribeDataLimitsInstanceDimResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataLimitsInstanceDimResult::~DescribeDataLimitsInstanceDimResult()
{}

void DescribeDataLimitsInstanceDimResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["DataLimit"];
	for (auto valueItemsDataLimit : allItemsNode)
	{
		DataLimit itemsObject;
		if(!valueItemsDataLimit["RegionId"].isNull())
			itemsObject.regionId = valueItemsDataLimit["RegionId"].asString();
		if(!valueItemsDataLimit["LocalName"].isNull())
			itemsObject.localName = valueItemsDataLimit["LocalName"].asString();
		if(!valueItemsDataLimit["ParentId"].isNull())
			itemsObject.parentId = valueItemsDataLimit["ParentId"].asString();
		if(!valueItemsDataLimit["Id"].isNull())
			itemsObject.id = std::stol(valueItemsDataLimit["Id"].asString());
		if(!valueItemsDataLimit["UserName"].isNull())
			itemsObject.userName = valueItemsDataLimit["UserName"].asString();
		if(!valueItemsDataLimit["GmtCreate"].isNull())
			itemsObject.gmtCreate = std::stol(valueItemsDataLimit["GmtCreate"].asString());
		if(!valueItemsDataLimit["Connector"].isNull())
			itemsObject.connector = valueItemsDataLimit["Connector"].asString();
		if(!valueItemsDataLimit["CheckStatus"].isNull())
			itemsObject.checkStatus = std::stoi(valueItemsDataLimit["CheckStatus"].asString());
		if(!valueItemsDataLimit["CheckStatusName"].isNull())
			itemsObject.checkStatusName = valueItemsDataLimit["CheckStatusName"].asString();
		if(!valueItemsDataLimit["ResourceType"].isNull())
			itemsObject.resourceType = std::stol(valueItemsDataLimit["ResourceType"].asString());
		if(!valueItemsDataLimit["ResourceTypeCode"].isNull())
			itemsObject.resourceTypeCode = valueItemsDataLimit["ResourceTypeCode"].asString();
		if(!valueItemsDataLimit["AuditStatus"].isNull())
			itemsObject.auditStatus = std::stoi(valueItemsDataLimit["AuditStatus"].asString());
		if(!valueItemsDataLimit["LogStoreDay"].isNull())
			itemsObject.logStoreDay = std::stoi(valueItemsDataLimit["LogStoreDay"].asString());
		if(!valueItemsDataLimit["Enable"].isNull())
			itemsObject.enable = std::stoi(valueItemsDataLimit["Enable"].asString());
		if(!valueItemsDataLimit["AutoScan"].isNull())
			itemsObject.autoScan = std::stoi(valueItemsDataLimit["AutoScan"].asString());
		if(!valueItemsDataLimit["EngineType"].isNull())
			itemsObject.engineType = valueItemsDataLimit["EngineType"].asString();
		if(!valueItemsDataLimit["ProcessStatus"].isNull())
			itemsObject.processStatus = std::stoi(valueItemsDataLimit["ProcessStatus"].asString());
		if(!valueItemsDataLimit["ProcessTotalCount"].isNull())
			itemsObject.processTotalCount = std::stoi(valueItemsDataLimit["ProcessTotalCount"].asString());
		if(!valueItemsDataLimit["TotalCount"].isNull())
			itemsObject.totalCount = std::stoi(valueItemsDataLimit["TotalCount"].asString());
		if(!valueItemsDataLimit["LastFinishedTime"].isNull())
			itemsObject.lastFinishedTime = std::stol(valueItemsDataLimit["LastFinishedTime"].asString());
		if(!valueItemsDataLimit["ErrorCode"].isNull())
			itemsObject.errorCode = valueItemsDataLimit["ErrorCode"].asString();
		if(!valueItemsDataLimit["ErrorMessage"].isNull())
			itemsObject.errorMessage = valueItemsDataLimit["ErrorMessage"].asString();
		if(!valueItemsDataLimit["Port"].isNull())
			itemsObject.port = std::stoi(valueItemsDataLimit["Port"].asString());
		if(!valueItemsDataLimit["DbVersion"].isNull())
			itemsObject.dbVersion = valueItemsDataLimit["DbVersion"].asString();
		if(!valueItemsDataLimit["SupportDatamask"].isNull())
			itemsObject.supportDatamask = valueItemsDataLimit["SupportDatamask"].asString() == "true";
		if(!valueItemsDataLimit["SupportScan"].isNull())
			itemsObject.supportScan = valueItemsDataLimit["SupportScan"].asString() == "true";
		if(!valueItemsDataLimit["SupportAudit"].isNull())
			itemsObject.supportAudit = valueItemsDataLimit["SupportAudit"].asString() == "true";
		if(!valueItemsDataLimit["DatamaskStatus"].isNull())
			itemsObject.datamaskStatus = std::stoi(valueItemsDataLimit["DatamaskStatus"].asString());
		if(!valueItemsDataLimit["SamplingSize"].isNull())
			itemsObject.samplingSize = std::stoi(valueItemsDataLimit["SamplingSize"].asString());
		if(!valueItemsDataLimit["NextStartTime"].isNull())
			itemsObject.nextStartTime = std::stol(valueItemsDataLimit["NextStartTime"].asString());
		if(!valueItemsDataLimit["SupportOcr"].isNull())
			itemsObject.supportOcr = valueItemsDataLimit["SupportOcr"].asString() == "true";
		if(!valueItemsDataLimit["OcrStatus"].isNull())
			itemsObject.ocrStatus = std::stoi(valueItemsDataLimit["OcrStatus"].asString());
		if(!valueItemsDataLimit["AgentId"].isNull())
			itemsObject.agentId = valueItemsDataLimit["AgentId"].asString();
		if(!valueItemsDataLimit["AgentState"].isNull())
			itemsObject.agentState = std::stoi(valueItemsDataLimit["AgentState"].asString());
		if(!valueItemsDataLimit["SupportAgentInstall"].isNull())
			itemsObject.supportAgentInstall = valueItemsDataLimit["SupportAgentInstall"].asString() == "true";
		if(!valueItemsDataLimit["InstanceDescription"].isNull())
			itemsObject.instanceDescription = valueItemsDataLimit["InstanceDescription"].asString();
		auto allDataLimitListNode = valueItemsDataLimit["DataLimitList"]["DataLimitListInner"];
		for (auto valueItemsDataLimitDataLimitListDataLimitListInner : allDataLimitListNode)
		{
			DataLimit::DataLimitListInner dataLimitListObject;
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["RegionId"].isNull())
				dataLimitListObject.regionId = valueItemsDataLimitDataLimitListDataLimitListInner["RegionId"].asString();
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["LocalName"].isNull())
				dataLimitListObject.localName = valueItemsDataLimitDataLimitListDataLimitListInner["LocalName"].asString();
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["ParentId"].isNull())
				dataLimitListObject.parentId = valueItemsDataLimitDataLimitListDataLimitListInner["ParentId"].asString();
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["Id"].isNull())
				dataLimitListObject.id = std::stol(valueItemsDataLimitDataLimitListDataLimitListInner["Id"].asString());
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["UserName"].isNull())
				dataLimitListObject.userName = valueItemsDataLimitDataLimitListDataLimitListInner["UserName"].asString();
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["GmtCreate"].isNull())
				dataLimitListObject.gmtCreate = std::stol(valueItemsDataLimitDataLimitListDataLimitListInner["GmtCreate"].asString());
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["Connector"].isNull())
				dataLimitListObject.connector = valueItemsDataLimitDataLimitListDataLimitListInner["Connector"].asString();
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["CheckStatus"].isNull())
				dataLimitListObject.checkStatus = std::stoi(valueItemsDataLimitDataLimitListDataLimitListInner["CheckStatus"].asString());
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["CheckStatusName"].isNull())
				dataLimitListObject.checkStatusName = valueItemsDataLimitDataLimitListDataLimitListInner["CheckStatusName"].asString();
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["ResourceType"].isNull())
				dataLimitListObject.resourceType = std::stol(valueItemsDataLimitDataLimitListDataLimitListInner["ResourceType"].asString());
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["ResourceTypeCode"].isNull())
				dataLimitListObject.resourceTypeCode = valueItemsDataLimitDataLimitListDataLimitListInner["ResourceTypeCode"].asString();
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["AuditStatus"].isNull())
				dataLimitListObject.auditStatus = std::stoi(valueItemsDataLimitDataLimitListDataLimitListInner["AuditStatus"].asString());
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["LogStoreDay"].isNull())
				dataLimitListObject.logStoreDay = std::stoi(valueItemsDataLimitDataLimitListDataLimitListInner["LogStoreDay"].asString());
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["Enable"].isNull())
				dataLimitListObject.enable = std::stoi(valueItemsDataLimitDataLimitListDataLimitListInner["Enable"].asString());
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["AutoScan"].isNull())
				dataLimitListObject.autoScan = std::stoi(valueItemsDataLimitDataLimitListDataLimitListInner["AutoScan"].asString());
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["EngineType"].isNull())
				dataLimitListObject.engineType = valueItemsDataLimitDataLimitListDataLimitListInner["EngineType"].asString();
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["ProcessStatus"].isNull())
				dataLimitListObject.processStatus = std::stoi(valueItemsDataLimitDataLimitListDataLimitListInner["ProcessStatus"].asString());
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["ProcessTotalCount"].isNull())
				dataLimitListObject.processTotalCount = std::stoi(valueItemsDataLimitDataLimitListDataLimitListInner["ProcessTotalCount"].asString());
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["TotalCount"].isNull())
				dataLimitListObject.totalCount = std::stoi(valueItemsDataLimitDataLimitListDataLimitListInner["TotalCount"].asString());
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["LastFinishedTime"].isNull())
				dataLimitListObject.lastFinishedTime = std::stol(valueItemsDataLimitDataLimitListDataLimitListInner["LastFinishedTime"].asString());
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["ErrorCode"].isNull())
				dataLimitListObject.errorCode = valueItemsDataLimitDataLimitListDataLimitListInner["ErrorCode"].asString();
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["ErrorMessage"].isNull())
				dataLimitListObject.errorMessage = valueItemsDataLimitDataLimitListDataLimitListInner["ErrorMessage"].asString();
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["Port"].isNull())
				dataLimitListObject.port = std::stoi(valueItemsDataLimitDataLimitListDataLimitListInner["Port"].asString());
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["DbVersion"].isNull())
				dataLimitListObject.dbVersion = valueItemsDataLimitDataLimitListDataLimitListInner["DbVersion"].asString();
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["SupportDatamask"].isNull())
				dataLimitListObject.supportDatamask = valueItemsDataLimitDataLimitListDataLimitListInner["SupportDatamask"].asString() == "true";
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["SupportScan"].isNull())
				dataLimitListObject.supportScan = valueItemsDataLimitDataLimitListDataLimitListInner["SupportScan"].asString() == "true";
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["SupportAudit"].isNull())
				dataLimitListObject.supportAudit = valueItemsDataLimitDataLimitListDataLimitListInner["SupportAudit"].asString() == "true";
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["DatamaskStatus"].isNull())
				dataLimitListObject.datamaskStatus = std::stoi(valueItemsDataLimitDataLimitListDataLimitListInner["DatamaskStatus"].asString());
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["SamplingSize"].isNull())
				dataLimitListObject.samplingSize = std::stoi(valueItemsDataLimitDataLimitListDataLimitListInner["SamplingSize"].asString());
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["NextStartTime"].isNull())
				dataLimitListObject.nextStartTime = std::stol(valueItemsDataLimitDataLimitListDataLimitListInner["NextStartTime"].asString());
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["SupportOcr"].isNull())
				dataLimitListObject.supportOcr = valueItemsDataLimitDataLimitListDataLimitListInner["SupportOcr"].asString() == "true";
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["OcrStatus"].isNull())
				dataLimitListObject.ocrStatus = std::stoi(valueItemsDataLimitDataLimitListDataLimitListInner["OcrStatus"].asString());
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["AgentId"].isNull())
				dataLimitListObject.agentId = valueItemsDataLimitDataLimitListDataLimitListInner["AgentId"].asString();
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["AgentState"].isNull())
				dataLimitListObject.agentState = std::stoi(valueItemsDataLimitDataLimitListDataLimitListInner["AgentState"].asString());
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["SupportAgentInstall"].isNull())
				dataLimitListObject.supportAgentInstall = valueItemsDataLimitDataLimitListDataLimitListInner["SupportAgentInstall"].asString() == "true";
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["AutoCreateAccount"].isNull())
				dataLimitListObject.autoCreateAccount = valueItemsDataLimitDataLimitListDataLimitListInner["AutoCreateAccount"].asString() == "true";
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["EventStatus"].isNull())
				dataLimitListObject.eventStatus = std::stoi(valueItemsDataLimitDataLimitListDataLimitListInner["EventStatus"].asString());
			if(!valueItemsDataLimitDataLimitListDataLimitListInner["SupportEvent"].isNull())
				dataLimitListObject.supportEvent = valueItemsDataLimitDataLimitListDataLimitListInner["SupportEvent"].asString() == "true";
			itemsObject.dataLimitList.push_back(dataLimitListObject);
		}
		items_.push_back(itemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDataLimitsInstanceDimResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDataLimitsInstanceDimResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDataLimitsInstanceDimResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeDataLimitsInstanceDimResult::DataLimit> DescribeDataLimitsInstanceDimResult::getItems()const
{
	return items_;
}

