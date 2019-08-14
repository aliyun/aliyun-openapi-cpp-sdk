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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allWebshellList = value["WebshellList"]["WebshellListItem"];
	for (auto value : allWebshellList)
	{
		WebshellListItem webshellListObject;
		if(!value["Os"].isNull())
			webshellListObject.os = value["Os"].asString();
		if(!value["InstanceName"].isNull())
			webshellListObject.instanceName = value["InstanceName"].asString();
		if(!value["GroupId"].isNull())
			webshellListObject.groupId = std::stol(value["GroupId"].asString());
		if(!value["Ip"].isNull())
			webshellListObject.ip = value["Ip"].asString();
		if(!value["Uuid"].isNull())
			webshellListObject.uuid = value["Uuid"].asString();
		if(!value["FoundTime"].isNull())
			webshellListObject.foundTime = value["FoundTime"].asString();
		if(!value["InstanceId"].isNull())
			webshellListObject.instanceId = value["InstanceId"].asString();
		if(!value["TrojanType"].isNull())
			webshellListObject.trojanType = value["TrojanType"].asString();
		if(!value["FirstFoundTime"].isNull())
			webshellListObject.firstFoundTime = value["FirstFoundTime"].asString();
		if(!value["TrojanSize"].isNull())
			webshellListObject.trojanSize = std::stol(value["TrojanSize"].asString());
		if(!value["Domain"].isNull())
			webshellListObject.domain = value["Domain"].asString();
		if(!value["TrojanPath"].isNull())
			webshellListObject.trojanPath = value["TrojanPath"].asString();
		if(!value["Region"].isNull())
			webshellListObject.region = value["Region"].asString();
		if(!value["Status"].isNull())
			webshellListObject.status = std::stoi(value["Status"].asString());
		webshellList_.push_back(webshellListObject);
	}

}

std::vector<DescribeWebshellResult::WebshellListItem> DescribeWebshellResult::getWebshellList()const
{
	return webshellList_;
}

