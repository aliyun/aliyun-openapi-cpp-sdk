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

#include <alibabacloud/nas/model/DescribeDataFlowsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

DescribeDataFlowsResult::DescribeDataFlowsResult() :
	ServiceResult()
{}

DescribeDataFlowsResult::DescribeDataFlowsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataFlowsResult::~DescribeDataFlowsResult()
{}

void DescribeDataFlowsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataFlowInfoNode = value["DataFlowInfo"]["DataFlow"];
	for (auto valueDataFlowInfoDataFlow : allDataFlowInfoNode)
	{
		DataFlow dataFlowInfoObject;
		if(!valueDataFlowInfoDataFlow["FileSystemId"].isNull())
			dataFlowInfoObject.fileSystemId = valueDataFlowInfoDataFlow["FileSystemId"].asString();
		if(!valueDataFlowInfoDataFlow["DataFlowId"].isNull())
			dataFlowInfoObject.dataFlowId = valueDataFlowInfoDataFlow["DataFlowId"].asString();
		if(!valueDataFlowInfoDataFlow["FsetId"].isNull())
			dataFlowInfoObject.fsetId = valueDataFlowInfoDataFlow["FsetId"].asString();
		if(!valueDataFlowInfoDataFlow["Status"].isNull())
			dataFlowInfoObject.status = valueDataFlowInfoDataFlow["Status"].asString();
		if(!valueDataFlowInfoDataFlow["ErrorMessage"].isNull())
			dataFlowInfoObject.errorMessage = valueDataFlowInfoDataFlow["ErrorMessage"].asString();
		if(!valueDataFlowInfoDataFlow["SourceStorage"].isNull())
			dataFlowInfoObject.sourceStorage = valueDataFlowInfoDataFlow["SourceStorage"].asString();
		if(!valueDataFlowInfoDataFlow["SourceSecurityType"].isNull())
			dataFlowInfoObject.sourceSecurityType = valueDataFlowInfoDataFlow["SourceSecurityType"].asString();
		if(!valueDataFlowInfoDataFlow["Throughput"].isNull())
			dataFlowInfoObject.throughput = std::stol(valueDataFlowInfoDataFlow["Throughput"].asString());
		if(!valueDataFlowInfoDataFlow["Description"].isNull())
			dataFlowInfoObject.description = valueDataFlowInfoDataFlow["Description"].asString();
		if(!valueDataFlowInfoDataFlow["CreateTime"].isNull())
			dataFlowInfoObject.createTime = valueDataFlowInfoDataFlow["CreateTime"].asString();
		if(!valueDataFlowInfoDataFlow["UpdateTime"].isNull())
			dataFlowInfoObject.updateTime = valueDataFlowInfoDataFlow["UpdateTime"].asString();
		if(!valueDataFlowInfoDataFlow["FileSystemPath"].isNull())
			dataFlowInfoObject.fileSystemPath = valueDataFlowInfoDataFlow["FileSystemPath"].asString();
		if(!valueDataFlowInfoDataFlow["FsetDescription"].isNull())
			dataFlowInfoObject.fsetDescription = valueDataFlowInfoDataFlow["FsetDescription"].asString();
		if(!valueDataFlowInfoDataFlow["AutoRefreshInterval"].isNull())
			dataFlowInfoObject.autoRefreshInterval = std::stol(valueDataFlowInfoDataFlow["AutoRefreshInterval"].asString());
		if(!valueDataFlowInfoDataFlow["AutoRefreshPolicy"].isNull())
			dataFlowInfoObject.autoRefreshPolicy = valueDataFlowInfoDataFlow["AutoRefreshPolicy"].asString();
		if(!valueDataFlowInfoDataFlow["SourceStoragePath"].isNull())
			dataFlowInfoObject.sourceStoragePath = valueDataFlowInfoDataFlow["SourceStoragePath"].asString();
		auto allAutoRefreshNode = valueDataFlowInfoDataFlow["AutoRefresh"]["AutoRefreshItem"];
		for (auto valueDataFlowInfoDataFlowAutoRefreshAutoRefreshItem : allAutoRefreshNode)
		{
			DataFlow::AutoRefreshItem autoRefreshObject;
			if(!valueDataFlowInfoDataFlowAutoRefreshAutoRefreshItem["RefreshPath"].isNull())
				autoRefreshObject.refreshPath = valueDataFlowInfoDataFlowAutoRefreshAutoRefreshItem["RefreshPath"].asString();
			dataFlowInfoObject.autoRefresh.push_back(autoRefreshObject);
		}
		dataFlowInfo_.push_back(dataFlowInfoObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeDataFlowsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeDataFlowsResult::DataFlow> DescribeDataFlowsResult::getDataFlowInfo()const
{
	return dataFlowInfo_;
}

