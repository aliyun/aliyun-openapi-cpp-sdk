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

#include <alibabacloud/sddp/model/DescribeCloudInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeCloudInstancesResult::DescribeCloudInstancesResult() :
	ServiceResult()
{}

DescribeCloudInstancesResult::DescribeCloudInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCloudInstancesResult::~DescribeCloudInstancesResult()
{}

void DescribeCloudInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCloudInstanceListNode = value["CloudInstanceList"]["CloudInstance"];
	for (auto valueCloudInstanceListCloudInstance : allCloudInstanceListNode)
	{
		CloudInstance cloudInstanceListObject;
		if(!valueCloudInstanceListCloudInstance["Engine"].isNull())
			cloudInstanceListObject.engine = valueCloudInstanceListCloudInstance["Engine"].asString();
		if(!valueCloudInstanceListCloudInstance["Name"].isNull())
			cloudInstanceListObject.name = valueCloudInstanceListCloudInstance["Name"].asString();
		if(!valueCloudInstanceListCloudInstance["InstanceId"].isNull())
			cloudInstanceListObject.instanceId = valueCloudInstanceListCloudInstance["InstanceId"].asString();
		cloudInstanceList_.push_back(cloudInstanceListObject);
	}

}

std::vector<DescribeCloudInstancesResult::CloudInstance> DescribeCloudInstancesResult::getCloudInstanceList()const
{
	return cloudInstanceList_;
}

