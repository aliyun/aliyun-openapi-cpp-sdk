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

#include <alibabacloud/config/model/ListAggregateRemediationExecutionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

ListAggregateRemediationExecutionsResult::ListAggregateRemediationExecutionsResult() :
	ServiceResult()
{}

ListAggregateRemediationExecutionsResult::ListAggregateRemediationExecutionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAggregateRemediationExecutionsResult::~ListAggregateRemediationExecutionsResult()
{}

void ListAggregateRemediationExecutionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto remediationExecutionDataNode = value["RemediationExecutionData"];
	if(!remediationExecutionDataNode["NextToken"].isNull())
		remediationExecutionData_.nextToken = remediationExecutionDataNode["NextToken"].asString();
	if(!remediationExecutionDataNode["MaxResults"].isNull())
		remediationExecutionData_.maxResults = std::stol(remediationExecutionDataNode["MaxResults"].asString());
	auto allRemediationExecutionsNode = remediationExecutionDataNode["RemediationExecutions"]["RemediationExecutionsItem"];
	for (auto remediationExecutionDataNodeRemediationExecutionsRemediationExecutionsItem : allRemediationExecutionsNode)
	{
		RemediationExecutionData::RemediationExecutionsItem remediationExecutionsItemObject;
		if(!remediationExecutionDataNodeRemediationExecutionsRemediationExecutionsItem["ExecutionInvocationId"].isNull())
			remediationExecutionsItemObject.executionInvocationId = remediationExecutionDataNodeRemediationExecutionsRemediationExecutionsItem["ExecutionInvocationId"].asString();
		if(!remediationExecutionDataNodeRemediationExecutionsRemediationExecutionsItem["ExecutionStatus"].isNull())
			remediationExecutionsItemObject.executionStatus = remediationExecutionDataNodeRemediationExecutionsRemediationExecutionsItem["ExecutionStatus"].asString();
		if(!remediationExecutionDataNodeRemediationExecutionsRemediationExecutionsItem["ExecutionResourceType"].isNull())
			remediationExecutionsItemObject.executionResourceType = remediationExecutionDataNodeRemediationExecutionsRemediationExecutionsItem["ExecutionResourceType"].asString();
		if(!remediationExecutionDataNodeRemediationExecutionsRemediationExecutionsItem["ExecutionCreateDate"].isNull())
			remediationExecutionsItemObject.executionCreateDate = remediationExecutionDataNodeRemediationExecutionsRemediationExecutionsItem["ExecutionCreateDate"].asString();
		if(!remediationExecutionDataNodeRemediationExecutionsRemediationExecutionsItem["ExecutionStatusMessage"].isNull())
			remediationExecutionsItemObject.executionStatusMessage = remediationExecutionDataNodeRemediationExecutionsRemediationExecutionsItem["ExecutionStatusMessage"].asString();
		if(!remediationExecutionDataNodeRemediationExecutionsRemediationExecutionsItem["ExecutionResourceIds"].isNull())
			remediationExecutionsItemObject.executionResourceIds = remediationExecutionDataNodeRemediationExecutionsRemediationExecutionsItem["ExecutionResourceIds"].asString();
		remediationExecutionData_.remediationExecutions.push_back(remediationExecutionsItemObject);
	}

}

ListAggregateRemediationExecutionsResult::RemediationExecutionData ListAggregateRemediationExecutionsResult::getRemediationExecutionData()const
{
	return remediationExecutionData_;
}

