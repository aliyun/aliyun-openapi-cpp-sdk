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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allEipList = value["EipList"]["Ecs"];
	for (auto value : allEipList)
	{
		Ecs eipListObject;
		if(!value["InstanceName"].isNull())
			eipListObject.instanceName = value["InstanceName"].asString();
		if(!value["InstanceId"].isNull())
			eipListObject.instanceId = value["InstanceId"].asString();
		if(!value["IP"].isNull())
			eipListObject.iP = value["IP"].asString();
		if(!value["Region"].isNull())
			eipListObject.region = value["Region"].asString();
		if(!value["ItemSign"].isNull())
			eipListObject.itemSign = value["ItemSign"].asString();
		eipList_.push_back(eipListObject);
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

std::vector<DescribeAccessWhiteListEipListResult::Ecs> DescribeAccessWhiteListEipListResult::getEipList()const
{
	return eipList_;
}

std::string DescribeAccessWhiteListEipListResult::getModule()const
{
	return module_;
}

