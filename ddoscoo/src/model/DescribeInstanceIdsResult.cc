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

#include <alibabacloud/ddoscoo/model/DescribeInstanceIdsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeInstanceIdsResult::DescribeInstanceIdsResult() :
	ServiceResult()
{}

DescribeInstanceIdsResult::DescribeInstanceIdsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceIdsResult::~DescribeInstanceIdsResult()
{}

void DescribeInstanceIdsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceIdsNode = value["InstanceIds"]["Instance"];
	for (auto valueInstanceIdsInstance : allInstanceIdsNode)
	{
		Instance instanceIdsObject;
		if(!valueInstanceIdsInstance["IpMode"].isNull())
			instanceIdsObject.ipMode = valueInstanceIdsInstance["IpMode"].asString();
		if(!valueInstanceIdsInstance["Edition"].isNull())
			instanceIdsObject.edition = std::stoi(valueInstanceIdsInstance["Edition"].asString());
		if(!valueInstanceIdsInstance["InstanceId"].isNull())
			instanceIdsObject.instanceId = valueInstanceIdsInstance["InstanceId"].asString();
		if(!valueInstanceIdsInstance["IpVersion"].isNull())
			instanceIdsObject.ipVersion = valueInstanceIdsInstance["IpVersion"].asString();
		if(!valueInstanceIdsInstance["Remark"].isNull())
			instanceIdsObject.remark = valueInstanceIdsInstance["Remark"].asString();
		instanceIds_.push_back(instanceIdsObject);
	}

}

std::vector<DescribeInstanceIdsResult::Instance> DescribeInstanceIdsResult::getInstanceIds()const
{
	return instanceIds_;
}

