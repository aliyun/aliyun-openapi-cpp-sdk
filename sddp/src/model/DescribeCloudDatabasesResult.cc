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

#include <alibabacloud/sddp/model/DescribeCloudDatabasesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeCloudDatabasesResult::DescribeCloudDatabasesResult() :
	ServiceResult()
{}

DescribeCloudDatabasesResult::DescribeCloudDatabasesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCloudDatabasesResult::~DescribeCloudDatabasesResult()
{}

void DescribeCloudDatabasesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allCloudDatabaseList = value["CloudDatabaseList"]["CloudDatabase"];
	for (auto value : allCloudDatabaseList)
	{
		CloudDatabase cloudDatabaseListObject;
		if(!value["Engine"].isNull())
			cloudDatabaseListObject.engine = value["Engine"].asString();
		if(!value["Name"].isNull())
			cloudDatabaseListObject.name = value["Name"].asString();
		if(!value["InstanceId"].isNull())
			cloudDatabaseListObject.instanceId = value["InstanceId"].asString();
		cloudDatabaseList_.push_back(cloudDatabaseListObject);
	}

}

std::vector<DescribeCloudDatabasesResult::CloudDatabase> DescribeCloudDatabasesResult::getCloudDatabaseList()const
{
	return cloudDatabaseList_;
}

