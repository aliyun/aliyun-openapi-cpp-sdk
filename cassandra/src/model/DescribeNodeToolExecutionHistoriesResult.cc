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

#include <alibabacloud/cassandra/model/DescribeNodeToolExecutionHistoriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cassandra;
using namespace AlibabaCloud::Cassandra::Model;

DescribeNodeToolExecutionHistoriesResult::DescribeNodeToolExecutionHistoriesResult() :
	ServiceResult()
{}

DescribeNodeToolExecutionHistoriesResult::DescribeNodeToolExecutionHistoriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNodeToolExecutionHistoriesResult::~DescribeNodeToolExecutionHistoriesResult()
{}

void DescribeNodeToolExecutionHistoriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHistoriesNode = value["Histories"]["History"];
	for (auto valueHistoriesHistory : allHistoriesNode)
	{
		History historiesObject;
		if(!valueHistoriesHistory["JobId"].isNull())
			historiesObject.jobId = valueHistoriesHistory["JobId"].asString();
		if(!valueHistoriesHistory["Command"].isNull())
			historiesObject.command = valueHistoriesHistory["Command"].asString();
		if(!valueHistoriesHistory["Nodes"].isNull())
			historiesObject.nodes = valueHistoriesHistory["Nodes"].asString();
		if(!valueHistoriesHistory["ModifyTime"].isNull())
			historiesObject.modifyTime = std::stol(valueHistoriesHistory["ModifyTime"].asString());
		if(!valueHistoriesHistory["CreateTime"].isNull())
			historiesObject.createTime = std::stol(valueHistoriesHistory["CreateTime"].asString());
		if(!valueHistoriesHistory["RegionId"].isNull())
			historiesObject.regionId = valueHistoriesHistory["RegionId"].asString();
		if(!valueHistoriesHistory["IsEnded"].isNull())
			historiesObject.isEnded = valueHistoriesHistory["IsEnded"].asString() == "true";
		if(!valueHistoriesHistory["Arguments"].isNull())
			historiesObject.arguments = valueHistoriesHistory["Arguments"].asString();
		if(!valueHistoriesHistory["ErrorMessage"].isNull())
			historiesObject.errorMessage = valueHistoriesHistory["ErrorMessage"].asString();
		if(!valueHistoriesHistory["DataCenterId"].isNull())
			historiesObject.dataCenterId = valueHistoriesHistory["DataCenterId"].asString();
		histories_.push_back(historiesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeNodeToolExecutionHistoriesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeNodeToolExecutionHistoriesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeNodeToolExecutionHistoriesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeNodeToolExecutionHistoriesResult::History> DescribeNodeToolExecutionHistoriesResult::getHistories()const
{
	return histories_;
}

