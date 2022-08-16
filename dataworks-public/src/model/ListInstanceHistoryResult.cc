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

#include <alibabacloud/dataworks-public/model/ListInstanceHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListInstanceHistoryResult::ListInstanceHistoryResult() :
	ServiceResult()
{}

ListInstanceHistoryResult::ListInstanceHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstanceHistoryResult::~ListInstanceHistoryResult()
{}

void ListInstanceHistoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["InstancesItem"];
	for (auto valueInstancesInstancesItem : allInstancesNode)
	{
		InstancesItem instancesObject;
		if(!valueInstancesInstancesItem["Status"].isNull())
			instancesObject.status = valueInstancesInstancesItem["Status"].asString();
		if(!valueInstancesInstancesItem["CycTime"].isNull())
			instancesObject.cycTime = std::stol(valueInstancesInstancesItem["CycTime"].asString());
		if(!valueInstancesInstancesItem["BeginRunningTime"].isNull())
			instancesObject.beginRunningTime = std::stol(valueInstancesInstancesItem["BeginRunningTime"].asString());
		if(!valueInstancesInstancesItem["FinishTime"].isNull())
			instancesObject.finishTime = std::stol(valueInstancesInstancesItem["FinishTime"].asString());
		if(!valueInstancesInstancesItem["ErrorMessage"].isNull())
			instancesObject.errorMessage = valueInstancesInstancesItem["ErrorMessage"].asString();
		if(!valueInstancesInstancesItem["CreateTime"].isNull())
			instancesObject.createTime = std::stol(valueInstancesInstancesItem["CreateTime"].asString());
		if(!valueInstancesInstancesItem["DagId"].isNull())
			instancesObject.dagId = std::stol(valueInstancesInstancesItem["DagId"].asString());
		if(!valueInstancesInstancesItem["TaskType"].isNull())
			instancesObject.taskType = valueInstancesInstancesItem["TaskType"].asString();
		if(!valueInstancesInstancesItem["DagType"].isNull())
			instancesObject.dagType = valueInstancesInstancesItem["DagType"].asString();
		if(!valueInstancesInstancesItem["ModifyTime"].isNull())
			instancesObject.modifyTime = std::stol(valueInstancesInstancesItem["ModifyTime"].asString());
		if(!valueInstancesInstancesItem["InstanceId"].isNull())
			instancesObject.instanceId = std::stol(valueInstancesInstancesItem["InstanceId"].asString());
		if(!valueInstancesInstancesItem["BeginWaitResTime"].isNull())
			instancesObject.beginWaitResTime = std::stol(valueInstancesInstancesItem["BeginWaitResTime"].asString());
		if(!valueInstancesInstancesItem["Bizdate"].isNull())
			instancesObject.bizdate = std::stol(valueInstancesInstancesItem["Bizdate"].asString());
		if(!valueInstancesInstancesItem["NodeName"].isNull())
			instancesObject.nodeName = valueInstancesInstancesItem["NodeName"].asString();
		if(!valueInstancesInstancesItem["BeginWaitTimeTime"].isNull())
			instancesObject.beginWaitTimeTime = std::stol(valueInstancesInstancesItem["BeginWaitTimeTime"].asString());
		if(!valueInstancesInstancesItem["NodeId"].isNull())
			instancesObject.nodeId = std::stol(valueInstancesInstancesItem["NodeId"].asString());
		if(!valueInstancesInstancesItem["InstanceHistoryId"].isNull())
			instancesObject.instanceHistoryId = std::stol(valueInstancesInstancesItem["InstanceHistoryId"].asString());
		instances_.push_back(instancesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ListInstanceHistoryResult::InstancesItem> ListInstanceHistoryResult::getInstances()const
{
	return instances_;
}

bool ListInstanceHistoryResult::getSuccess()const
{
	return success_;
}

