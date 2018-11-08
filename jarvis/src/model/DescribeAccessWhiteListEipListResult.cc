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

#include <alibabacloud/jarvis/model/DescribeAccessWhiteListEipListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Jarvis;
using namespace AlibabaCloud::Jarvis::Model;

DescribeAccessWhiteListEipListResult::DescribeAccessWhiteListEipListResult() :
	ServiceResult()
{}

DescribeAccessWhiteListEipListResult::DescribeAccessWhiteListEipListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccessWhiteListEipListResult::~DescribeAccessWhiteListEipListResult()
{}

void DescribeAccessWhiteListEipListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allEcsList = value["EcsList"]["Ecs"];
	for (auto value : allEcsList)
	{
		Ecs ecsListObject;
		if(!value["InstanceName"].isNull())
			ecsListObject.instanceName = value["InstanceName"].asString();
		if(!value["InstanceId"].isNull())
			ecsListObject.instanceId = value["InstanceId"].asString();
		if(!value["IP"].isNull())
			ecsListObject.iP = value["IP"].asString();
		ecsList_.push_back(ecsListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["module"].isNull())
		module_ = value["module"].asString();

}

int DescribeAccessWhiteListEipListResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeAccessWhiteListEipListResult::Ecs> DescribeAccessWhiteListEipListResult::getEcsList()const
{
	return ecsList_;
}

std::string DescribeAccessWhiteListEipListResult::getModule()const
{
	return module_;
}

