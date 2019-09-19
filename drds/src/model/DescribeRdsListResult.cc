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

#include <alibabacloud/drds/model/DescribeRdsListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeRdsListResult::DescribeRdsListResult() :
	ServiceResult()
{}

DescribeRdsListResult::DescribeRdsListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRdsListResult::~DescribeRdsListResult()
{}

void DescribeRdsListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["RdsInstance"];
	for (auto valueDataRdsInstance : allDataNode)
	{
		RdsInstance dataObject;
		if(!valueDataRdsInstance["InstanceId"].isNull())
			dataObject.instanceId = std::stoi(valueDataRdsInstance["InstanceId"].asString());
		if(!valueDataRdsInstance["InstanceName"].isNull())
			dataObject.instanceName = valueDataRdsInstance["InstanceName"].asString();
		if(!valueDataRdsInstance["ConnectUrl"].isNull())
			dataObject.connectUrl = valueDataRdsInstance["ConnectUrl"].asString();
		if(!valueDataRdsInstance["Port"].isNull())
			dataObject.port = std::stoi(valueDataRdsInstance["Port"].asString());
		if(!valueDataRdsInstance["InstanceStatus"].isNull())
			dataObject.instanceStatus = valueDataRdsInstance["InstanceStatus"].asString();
		if(!valueDataRdsInstance["DbType"].isNull())
			dataObject.dbType = valueDataRdsInstance["DbType"].asString();
		if(!valueDataRdsInstance["ReadWeight"].isNull())
			dataObject.readWeight = std::stoi(valueDataRdsInstance["ReadWeight"].asString());
		auto allReadOnlyChildrenNode = allDataNode["ReadOnlyChildren"]["Child"];
		for (auto allDataNodeReadOnlyChildrenChild : allReadOnlyChildrenNode)
		{
			RdsInstance::Child readOnlyChildrenObject;
			if(!allDataNodeReadOnlyChildrenChild["InstanceId"].isNull())
				readOnlyChildrenObject.instanceId = allDataNodeReadOnlyChildrenChild["InstanceId"].asString();
			if(!allDataNodeReadOnlyChildrenChild["InstanceName"].isNull())
				readOnlyChildrenObject.instanceName = allDataNodeReadOnlyChildrenChild["InstanceName"].asString();
			if(!allDataNodeReadOnlyChildrenChild["ConnectUrl"].isNull())
				readOnlyChildrenObject.connectUrl = allDataNodeReadOnlyChildrenChild["ConnectUrl"].asString();
			if(!allDataNodeReadOnlyChildrenChild["port"].isNull())
				readOnlyChildrenObject.port = std::stoi(allDataNodeReadOnlyChildrenChild["port"].asString());
			if(!allDataNodeReadOnlyChildrenChild["InstanceStatus"].isNull())
				readOnlyChildrenObject.instanceStatus = allDataNodeReadOnlyChildrenChild["InstanceStatus"].asString();
			if(!allDataNodeReadOnlyChildrenChild["DbType"].isNull())
				readOnlyChildrenObject.dbType = allDataNodeReadOnlyChildrenChild["DbType"].asString();
			if(!allDataNodeReadOnlyChildrenChild["ReadWeight"].isNull())
				readOnlyChildrenObject.readWeight = std::stoi(allDataNodeReadOnlyChildrenChild["ReadWeight"].asString());
			dataObject.readOnlyChildren.push_back(readOnlyChildrenObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeRdsListResult::RdsInstance> DescribeRdsListResult::getData()const
{
	return data_;
}

bool DescribeRdsListResult::getSuccess()const
{
	return success_;
}

