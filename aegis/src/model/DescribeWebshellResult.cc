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

#include <alibabacloud/aegis/model/DescribeWebshellResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeWebshellResult::DescribeWebshellResult() :
	ServiceResult()
{}

DescribeWebshellResult::DescribeWebshellResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebshellResult::~DescribeWebshellResult()
{}

void DescribeWebshellResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWebshellListNode = value["WebshellList"]["WebshellListItem"];
	for (auto valueWebshellListWebshellListItem : allWebshellListNode)
	{
		WebshellListItem webshellListObject;
		if(!valueWebshellListWebshellListItem["Os"].isNull())
			webshellListObject.os = valueWebshellListWebshellListItem["Os"].asString();
		if(!valueWebshellListWebshellListItem["InstanceName"].isNull())
			webshellListObject.instanceName = valueWebshellListWebshellListItem["InstanceName"].asString();
		if(!valueWebshellListWebshellListItem["GroupId"].isNull())
			webshellListObject.groupId = std::stol(valueWebshellListWebshellListItem["GroupId"].asString());
		if(!valueWebshellListWebshellListItem["Ip"].isNull())
			webshellListObject.ip = valueWebshellListWebshellListItem["Ip"].asString();
		if(!valueWebshellListWebshellListItem["Uuid"].isNull())
			webshellListObject.uuid = valueWebshellListWebshellListItem["Uuid"].asString();
		if(!valueWebshellListWebshellListItem["FoundTime"].isNull())
			webshellListObject.foundTime = valueWebshellListWebshellListItem["FoundTime"].asString();
		if(!valueWebshellListWebshellListItem["InstanceId"].isNull())
			webshellListObject.instanceId = valueWebshellListWebshellListItem["InstanceId"].asString();
		if(!valueWebshellListWebshellListItem["TrojanType"].isNull())
			webshellListObject.trojanType = valueWebshellListWebshellListItem["TrojanType"].asString();
		if(!valueWebshellListWebshellListItem["FirstFoundTime"].isNull())
			webshellListObject.firstFoundTime = valueWebshellListWebshellListItem["FirstFoundTime"].asString();
		if(!valueWebshellListWebshellListItem["TrojanSize"].isNull())
			webshellListObject.trojanSize = std::stol(valueWebshellListWebshellListItem["TrojanSize"].asString());
		if(!valueWebshellListWebshellListItem["Domain"].isNull())
			webshellListObject.domain = valueWebshellListWebshellListItem["Domain"].asString();
		if(!valueWebshellListWebshellListItem["TrojanPath"].isNull())
			webshellListObject.trojanPath = valueWebshellListWebshellListItem["TrojanPath"].asString();
		if(!valueWebshellListWebshellListItem["Region"].isNull())
			webshellListObject.region = valueWebshellListWebshellListItem["Region"].asString();
		if(!valueWebshellListWebshellListItem["Status"].isNull())
			webshellListObject.status = std::stoi(valueWebshellListWebshellListItem["Status"].asString());
		webshellList_.push_back(webshellListObject);
	}

}

std::vector<DescribeWebshellResult::WebshellListItem> DescribeWebshellResult::getWebshellList()const
{
	return webshellList_;
}

