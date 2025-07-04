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

#include <alibabacloud/rds/model/DescribeRCInvocationResultsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeRCInvocationResultsResult::DescribeRCInvocationResultsResult() :
	ServiceResult()
{}

DescribeRCInvocationResultsResult::DescribeRCInvocationResultsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRCInvocationResultsResult::~DescribeRCInvocationResultsResult()
{}

void DescribeRCInvocationResultsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInvocationResultsNode = value["InvocationResults"]["invocationResultsItem"];
	for (auto valueInvocationResultsinvocationResultsItem : allInvocationResultsNode)
	{
		InvocationResultsItem invocationResultsObject;
		if(!valueInvocationResultsinvocationResultsItem["Dropped"].isNull())
			invocationResultsObject.dropped = std::stoi(valueInvocationResultsinvocationResultsItem["Dropped"].asString());
		if(!valueInvocationResultsinvocationResultsItem["InvocationStatus"].isNull())
			invocationResultsObject.invocationStatus = valueInvocationResultsinvocationResultsItem["InvocationStatus"].asString();
		if(!valueInvocationResultsinvocationResultsItem["InstanceId"].isNull())
			invocationResultsObject.instanceId = valueInvocationResultsinvocationResultsItem["InstanceId"].asString();
		if(!valueInvocationResultsinvocationResultsItem["ErrorInfo"].isNull())
			invocationResultsObject.errorInfo = valueInvocationResultsinvocationResultsItem["ErrorInfo"].asString();
		if(!valueInvocationResultsinvocationResultsItem["ExitCode"].isNull())
			invocationResultsObject.exitCode = std::stoi(valueInvocationResultsinvocationResultsItem["ExitCode"].asString());
		if(!valueInvocationResultsinvocationResultsItem["StartTime"].isNull())
			invocationResultsObject.startTime = valueInvocationResultsinvocationResultsItem["StartTime"].asString();
		if(!valueInvocationResultsinvocationResultsItem["Repeats"].isNull())
			invocationResultsObject.repeats = valueInvocationResultsinvocationResultsItem["Repeats"].asString();
		if(!valueInvocationResultsinvocationResultsItem["InvokeRecordStatus"].isNull())
			invocationResultsObject.invokeRecordStatus = valueInvocationResultsinvocationResultsItem["InvokeRecordStatus"].asString();
		if(!valueInvocationResultsinvocationResultsItem["FinishedTime"].isNull())
			invocationResultsObject.finishedTime = valueInvocationResultsinvocationResultsItem["FinishedTime"].asString();
		if(!valueInvocationResultsinvocationResultsItem["ContainerId"].isNull())
			invocationResultsObject.containerId = valueInvocationResultsinvocationResultsItem["ContainerId"].asString();
		if(!valueInvocationResultsinvocationResultsItem["ContainerName"].isNull())
			invocationResultsObject.containerName = valueInvocationResultsinvocationResultsItem["ContainerName"].asString();
		if(!valueInvocationResultsinvocationResultsItem["Username"].isNull())
			invocationResultsObject.username = valueInvocationResultsinvocationResultsItem["Username"].asString();
		if(!valueInvocationResultsinvocationResultsItem["Output"].isNull())
			invocationResultsObject.output = valueInvocationResultsinvocationResultsItem["Output"].asString();
		if(!valueInvocationResultsinvocationResultsItem["CommandId"].isNull())
			invocationResultsObject.commandId = valueInvocationResultsinvocationResultsItem["CommandId"].asString();
		if(!valueInvocationResultsinvocationResultsItem["ErrorCode"].isNull())
			invocationResultsObject.errorCode = valueInvocationResultsinvocationResultsItem["ErrorCode"].asString();
		if(!valueInvocationResultsinvocationResultsItem["InvokeId"].isNull())
			invocationResultsObject.invokeId = valueInvocationResultsinvocationResultsItem["InvokeId"].asString();
		if(!valueInvocationResultsinvocationResultsItem["StopTime"].isNull())
			invocationResultsObject.stopTime = valueInvocationResultsinvocationResultsItem["StopTime"].asString();
		auto allTagsNode = valueInvocationResultsinvocationResultsItem["Tags"]["tagsItem"];
		for (auto valueInvocationResultsinvocationResultsItemTagstagsItem : allTagsNode)
		{
			InvocationResultsItem::TagsItem tagsObject;
			if(!valueInvocationResultsinvocationResultsItemTagstagsItem["TagKey"].isNull())
				tagsObject.tagKey = valueInvocationResultsinvocationResultsItemTagstagsItem["TagKey"].asString();
			if(!valueInvocationResultsinvocationResultsItemTagstagsItem["TagValue"].isNull())
				tagsObject.tagValue = valueInvocationResultsinvocationResultsItemTagstagsItem["TagValue"].asString();
			invocationResultsObject.tags.push_back(tagsObject);
		}
		invocationResults_.push_back(invocationResultsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();

}

std::vector<DescribeRCInvocationResultsResult::InvocationResultsItem> DescribeRCInvocationResultsResult::getInvocationResults()const
{
	return invocationResults_;
}

int DescribeRCInvocationResultsResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeRCInvocationResultsResult::getNextToken()const
{
	return nextToken_;
}

std::string DescribeRCInvocationResultsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeRCInvocationResultsResult::getPageNumber()const
{
	return pageNumber_;
}

