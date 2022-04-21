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

#include <alibabacloud/voicenavigator/model/ListInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::VoiceNavigator;
using namespace AlibabaCloud::VoiceNavigator::Model;

ListInstancesResult::ListInstancesResult() :
	ServiceResult()
{}

ListInstancesResult::ListInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstancesResult::~ListInstancesResult()
{}

void ListInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["Instance"];
	for (auto valueInstancesInstance : allInstancesNode)
	{
		Instance instancesObject;
		if(!valueInstancesInstance["Status"].isNull())
			instancesObject.status = valueInstancesInstance["Status"].asString();
		if(!valueInstancesInstance["NluServiceType"].isNull())
			instancesObject.nluServiceType = valueInstancesInstance["NluServiceType"].asString();
		if(!valueInstancesInstance["ModifyUserName"].isNull())
			instancesObject.modifyUserName = valueInstancesInstance["ModifyUserName"].asString();
		if(!valueInstancesInstance["Description"].isNull())
			instancesObject.description = valueInstancesInstance["Description"].asString();
		if(!valueInstancesInstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstance["InstanceId"].asString();
		if(!valueInstancesInstance["Name"].isNull())
			instancesObject.name = valueInstancesInstance["Name"].asString();
		if(!valueInstancesInstance["Concurrency"].isNull())
			instancesObject.concurrency = std::stol(valueInstancesInstance["Concurrency"].asString());
		if(!valueInstancesInstance["ModifyTime"].isNull())
			instancesObject.modifyTime = std::stol(valueInstancesInstance["ModifyTime"].asString());
		auto allApplicableOperations = value["ApplicableOperations"]["Operation"];
		for (auto value : allApplicableOperations)
			instancesObject.applicableOperations.push_back(value.asString());
		instances_.push_back(instancesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::vector<ListInstancesResult::Instance> ListInstancesResult::getInstances()const
{
	return instances_;
}

int ListInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int ListInstancesResult::getPageSize()const
{
	return pageSize_;
}

int ListInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

