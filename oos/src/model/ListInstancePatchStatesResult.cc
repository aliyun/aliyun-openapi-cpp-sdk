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

#include <alibabacloud/oos/model/ListInstancePatchStatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

ListInstancePatchStatesResult::ListInstancePatchStatesResult() :
	ServiceResult()
{}

ListInstancePatchStatesResult::ListInstancePatchStatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstancePatchStatesResult::~ListInstancePatchStatesResult()
{}

void ListInstancePatchStatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancePatchStatesNode = value["InstancePatchStates"]["InstancePatchState"];
	for (auto valueInstancePatchStatesInstancePatchState : allInstancePatchStatesNode)
	{
		InstancePatchState instancePatchStatesObject;
		if(!valueInstancePatchStatesInstancePatchState["MissingCount"].isNull())
			instancePatchStatesObject.missingCount = valueInstancePatchStatesInstancePatchState["MissingCount"].asString();
		if(!valueInstancePatchStatesInstancePatchState["OperationEndTime"].isNull())
			instancePatchStatesObject.operationEndTime = valueInstancePatchStatesInstancePatchState["OperationEndTime"].asString();
		if(!valueInstancePatchStatesInstancePatchState["OwnerInformation"].isNull())
			instancePatchStatesObject.ownerInformation = valueInstancePatchStatesInstancePatchState["OwnerInformation"].asString();
		if(!valueInstancePatchStatesInstancePatchState["InstalledOtherCount"].isNull())
			instancePatchStatesObject.installedOtherCount = valueInstancePatchStatesInstancePatchState["InstalledOtherCount"].asString();
		if(!valueInstancePatchStatesInstancePatchState["InstanceId"].isNull())
			instancePatchStatesObject.instanceId = valueInstancePatchStatesInstancePatchState["InstanceId"].asString();
		if(!valueInstancePatchStatesInstancePatchState["OperationType"].isNull())
			instancePatchStatesObject.operationType = valueInstancePatchStatesInstancePatchState["OperationType"].asString();
		if(!valueInstancePatchStatesInstancePatchState["OperationStartTime"].isNull())
			instancePatchStatesObject.operationStartTime = valueInstancePatchStatesInstancePatchState["OperationStartTime"].asString();
		if(!valueInstancePatchStatesInstancePatchState["FailedCount"].isNull())
			instancePatchStatesObject.failedCount = valueInstancePatchStatesInstancePatchState["FailedCount"].asString();
		if(!valueInstancePatchStatesInstancePatchState["BaselineId"].isNull())
			instancePatchStatesObject.baselineId = valueInstancePatchStatesInstancePatchState["BaselineId"].asString();
		if(!valueInstancePatchStatesInstancePatchState["InstalledPendingRebootCount"].isNull())
			instancePatchStatesObject.installedPendingRebootCount = valueInstancePatchStatesInstancePatchState["InstalledPendingRebootCount"].asString();
		if(!valueInstancePatchStatesInstancePatchState["InstalledRejectedCount"].isNull())
			instancePatchStatesObject.installedRejectedCount = valueInstancePatchStatesInstancePatchState["InstalledRejectedCount"].asString();
		if(!valueInstancePatchStatesInstancePatchState["PatchGroup"].isNull())
			instancePatchStatesObject.patchGroup = valueInstancePatchStatesInstancePatchState["PatchGroup"].asString();
		if(!valueInstancePatchStatesInstancePatchState["InstalledCount"].isNull())
			instancePatchStatesObject.installedCount = valueInstancePatchStatesInstancePatchState["InstalledCount"].asString();
		instancePatchStates_.push_back(instancePatchStatesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::string ListInstancePatchStatesResult::getNextToken()const
{
	return nextToken_;
}

int ListInstancePatchStatesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListInstancePatchStatesResult::InstancePatchState> ListInstancePatchStatesResult::getInstancePatchStates()const
{
	return instancePatchStates_;
}

