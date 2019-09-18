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
	auto allData = value["Data"]["RdsInstance"];
	for (auto value : allData)
	{
		RdsInstance dataObject;
		if(!value["InstanceId"].isNull())
			dataObject.instanceId = std::stoi(value["InstanceId"].asString());
		if(!value["InstanceName"].isNull())
			dataObject.instanceName = value["InstanceName"].asString();
		if(!value["ConnectUrl"].isNull())
			dataObject.connectUrl = value["ConnectUrl"].asString();
		if(!value["Port"].isNull())
			dataObject.port = std::stoi(value["Port"].asString());
		if(!value["InstanceStatus"].isNull())
			dataObject.instanceStatus = value["InstanceStatus"].asString();
		if(!value["DbType"].isNull())
			dataObject.dbType = value["DbType"].asString();
		if(!value["ReadWeight"].isNull())
			dataObject.readWeight = std::stoi(value["ReadWeight"].asString());
		auto allReadOnlyChildren = value["ReadOnlyChildren"]["Child"];
		for (auto value : allReadOnlyChildren)
		{
			RdsInstance::Child readOnlyChildrenObject;
			if(!value["InstanceId"].isNull())
				readOnlyChildrenObject.instanceId = value["InstanceId"].asString();
			if(!value["InstanceName"].isNull())
				readOnlyChildrenObject.instanceName = value["InstanceName"].asString();
			if(!value["ConnectUrl"].isNull())
				readOnlyChildrenObject.connectUrl = value["ConnectUrl"].asString();
			if(!value["port"].isNull())
				readOnlyChildrenObject.port = std::stoi(value["port"].asString());
			if(!value["InstanceStatus"].isNull())
				readOnlyChildrenObject.instanceStatus = value["InstanceStatus"].asString();
			if(!value["DbType"].isNull())
				readOnlyChildrenObject.dbType = value["DbType"].asString();
			if(!value["ReadWeight"].isNull())
				readOnlyChildrenObject.readWeight = std::stoi(value["ReadWeight"].asString());
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

