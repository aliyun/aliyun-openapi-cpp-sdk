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

#include <alibabacloud/jarvis/model/DescribeAccessWhiteListSlbListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Jarvis;
using namespace AlibabaCloud::Jarvis::Model;

DescribeAccessWhiteListSlbListResult::DescribeAccessWhiteListSlbListResult() :
	ServiceResult()
{}

DescribeAccessWhiteListSlbListResult::DescribeAccessWhiteListSlbListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccessWhiteListSlbListResult::~DescribeAccessWhiteListSlbListResult()
{}

void DescribeAccessWhiteListSlbListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSlbList = value["SlbList"]["Ecs"];
	for (auto value : allSlbList)
	{
		Ecs slbListObject;
		if(!value["InstanceName"].isNull())
			slbListObject.instanceName = value["InstanceName"].asString();
		if(!value["InstanceId"].isNull())
			slbListObject.instanceId = value["InstanceId"].asString();
		if(!value["IP"].isNull())
			slbListObject.iP = value["IP"].asString();
		if(!value["Region"].isNull())
			slbListObject.region = value["Region"].asString();
		if(!value["ItemSign"].isNull())
			slbListObject.itemSign = value["ItemSign"].asString();
		slbList_.push_back(slbListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["module"].isNull())
		module_ = value["module"].asString();

}

int DescribeAccessWhiteListSlbListResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeAccessWhiteListSlbListResult::getModule()const
{
	return module_;
}

std::vector<DescribeAccessWhiteListSlbListResult::Ecs> DescribeAccessWhiteListSlbListResult::getSlbList()const
{
	return slbList_;
}

