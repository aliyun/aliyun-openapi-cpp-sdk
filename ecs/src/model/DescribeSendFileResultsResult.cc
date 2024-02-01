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

#include <alibabacloud/ecs/model/DescribeSendFileResultsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeSendFileResultsResult::DescribeSendFileResultsResult() :
	ServiceResult()
{}

DescribeSendFileResultsResult::DescribeSendFileResultsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSendFileResultsResult::~DescribeSendFileResultsResult()
{}

void DescribeSendFileResultsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInvocationsNode = value["Invocations"]["Invocation"];
	for (auto valueInvocationsInvocation : allInvocationsNode)
	{
		Invocation invocationsObject;
		if(!valueInvocationsInvocation["CreationTime"].isNull())
			invocationsObject.creationTime = valueInvocationsInvocation["CreationTime"].asString();
		if(!valueInvocationsInvocation["InvocationStatus"].isNull())
			invocationsObject.invocationStatus = valueInvocationsInvocation["InvocationStatus"].asString();
		if(!valueInvocationsInvocation["ContentType"].isNull())
			invocationsObject.contentType = valueInvocationsInvocation["ContentType"].asString();
		if(!valueInvocationsInvocation["TargetDir"].isNull())
			invocationsObject.targetDir = valueInvocationsInvocation["TargetDir"].asString();
		if(!valueInvocationsInvocation["FileOwner"].isNull())
			invocationsObject.fileOwner = valueInvocationsInvocation["FileOwner"].asString();
		if(!valueInvocationsInvocation["Description"].isNull())
			invocationsObject.description = valueInvocationsInvocation["Description"].asString();
		if(!valueInvocationsInvocation["VmCount"].isNull())
			invocationsObject.vmCount = std::stoi(valueInvocationsInvocation["VmCount"].asString());
		if(!valueInvocationsInvocation["FileMode"].isNull())
			invocationsObject.fileMode = valueInvocationsInvocation["FileMode"].asString();
		if(!valueInvocationsInvocation["FileGroup"].isNull())
			invocationsObject.fileGroup = valueInvocationsInvocation["FileGroup"].asString();
		if(!valueInvocationsInvocation["InvokeId"].isNull())
			invocationsObject.invokeId = valueInvocationsInvocation["InvokeId"].asString();
		if(!valueInvocationsInvocation["Name"].isNull())
			invocationsObject.name = valueInvocationsInvocation["Name"].asString();
		if(!valueInvocationsInvocation["Content"].isNull())
			invocationsObject.content = valueInvocationsInvocation["Content"].asString();
		if(!valueInvocationsInvocation["Overwrite"].isNull())
			invocationsObject.overwrite = valueInvocationsInvocation["Overwrite"].asString();
		auto allInvokeInstancesNode = valueInvocationsInvocation["InvokeInstances"]["InvokeInstance"];
		for (auto valueInvocationsInvocationInvokeInstancesInvokeInstance : allInvokeInstancesNode)
		{
			Invocation::InvokeInstance invokeInstancesObject;
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["CreationTime"].isNull())
				invokeInstancesObject.creationTime = valueInvocationsInvocationInvokeInstancesInvokeInstance["CreationTime"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["StartTime"].isNull())
				invokeInstancesObject.startTime = valueInvocationsInvocationInvokeInstancesInvokeInstance["StartTime"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["InvocationStatus"].isNull())
				invokeInstancesObject.invocationStatus = valueInvocationsInvocationInvokeInstancesInvokeInstance["InvocationStatus"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["FinishTime"].isNull())
				invokeInstancesObject.finishTime = valueInvocationsInvocationInvokeInstancesInvokeInstance["FinishTime"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["UpdateTime"].isNull())
				invokeInstancesObject.updateTime = valueInvocationsInvocationInvokeInstancesInvokeInstance["UpdateTime"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["ErrorInfo"].isNull())
				invokeInstancesObject.errorInfo = valueInvocationsInvocationInvokeInstancesInvokeInstance["ErrorInfo"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["ErrorCode"].isNull())
				invokeInstancesObject.errorCode = valueInvocationsInvocationInvokeInstancesInvokeInstance["ErrorCode"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["InstanceId"].isNull())
				invokeInstancesObject.instanceId = valueInvocationsInvocationInvokeInstancesInvokeInstance["InstanceId"].asString();
			invocationsObject.invokeInstances.push_back(invokeInstancesObject);
		}
		auto allTagsNode = valueInvocationsInvocation["Tags"]["Tag"];
		for (auto valueInvocationsInvocationTagsTag : allTagsNode)
		{
			Invocation::Tag tagsObject;
			if(!valueInvocationsInvocationTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueInvocationsInvocationTagsTag["TagKey"].asString();
			if(!valueInvocationsInvocationTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueInvocationsInvocationTagsTag["TagValue"].asString();
			invocationsObject.tags.push_back(tagsObject);
		}
		invocations_.push_back(invocationsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

long DescribeSendFileResultsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeSendFileResultsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeSendFileResultsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeSendFileResultsResult::Invocation> DescribeSendFileResultsResult::getInvocations()const
{
	return invocations_;
}

long DescribeSendFileResultsResult::getPageNumber()const
{
	return pageNumber_;
}

