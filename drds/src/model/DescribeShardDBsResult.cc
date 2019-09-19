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

#include <alibabacloud/drds/model/DescribeShardDBsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeShardDBsResult::DescribeShardDBsResult() :
	ServiceResult()
{}

DescribeShardDBsResult::DescribeShardDBsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeShardDBsResult::~DescribeShardDBsResult()
{}

void DescribeShardDBsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DbIntancePair"];
	for (auto valueDataDbIntancePair : allDataNode)
	{
		DbIntancePair dataObject;
		if(!valueDataDbIntancePair["SubDbName"].isNull())
			dataObject.subDbName = valueDataDbIntancePair["SubDbName"].asString();
		if(!valueDataDbIntancePair["InstanceName"].isNull())
			dataObject.instanceName = valueDataDbIntancePair["InstanceName"].asString();
		if(!valueDataDbIntancePair["GroupName"].isNull())
			dataObject.groupName = valueDataDbIntancePair["GroupName"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeShardDBsResult::DbIntancePair> DescribeShardDBsResult::getData()const
{
	return data_;
}

bool DescribeShardDBsResult::getSuccess()const
{
	return success_;
}

