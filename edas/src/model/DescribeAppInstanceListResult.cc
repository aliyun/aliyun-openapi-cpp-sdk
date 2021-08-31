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

#include <alibabacloud/edas/model/DescribeAppInstanceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

DescribeAppInstanceListResult::DescribeAppInstanceListResult() :
	ServiceResult()
{}

DescribeAppInstanceListResult::DescribeAppInstanceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAppInstanceListResult::~DescribeAppInstanceListResult()
{}

void DescribeAppInstanceListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceListNode = value["InstanceList"]["Instance"];
	for (auto valueInstanceListInstance : allInstanceListNode)
	{
		Instance instanceListObject;
		if(!valueInstanceListInstance["AppId"].isNull())
			instanceListObject.appId = valueInstanceListInstance["AppId"].asString();
		if(!valueInstanceListInstance["GroupId"].isNull())
			instanceListObject.groupId = valueInstanceListInstance["GroupId"].asString();
		if(!valueInstanceListInstance["PodRaw"].isNull())
			instanceListObject.podRaw = valueInstanceListInstance["PodRaw"].asString();
		if(!valueInstanceListInstance["GroupName"].isNull())
			instanceListObject.groupName = valueInstanceListInstance["GroupName"].asString();
		if(!valueInstanceListInstance["Canary"].isNull())
			instanceListObject.canary = valueInstanceListInstance["Canary"].asString() == "true";
		if(!valueInstanceListInstance["Version"].isNull())
			instanceListObject.version = valueInstanceListInstance["Version"].asString();
		if(!valueInstanceListInstance["NodeName"].isNull())
			instanceListObject.nodeName = valueInstanceListInstance["NodeName"].asString();
		if(!valueInstanceListInstance["NodeLabels"].isNull())
			instanceListObject.nodeLabels = valueInstanceListInstance["NodeLabels"].asString();
		instanceList_.push_back(instanceListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeAppInstanceListResult::getMessage()const
{
	return message_;
}

std::vector<DescribeAppInstanceListResult::Instance> DescribeAppInstanceListResult::getInstanceList()const
{
	return instanceList_;
}

int DescribeAppInstanceListResult::getCode()const
{
	return code_;
}

