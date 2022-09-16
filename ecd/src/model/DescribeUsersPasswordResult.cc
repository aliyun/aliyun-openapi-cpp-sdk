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

#include <alibabacloud/ecd/model/DescribeUsersPasswordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeUsersPasswordResult::DescribeUsersPasswordResult() :
	ServiceResult()
{}

DescribeUsersPasswordResult::DescribeUsersPasswordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUsersPasswordResult::~DescribeUsersPasswordResult()
{}

void DescribeUsersPasswordResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDesktopUsersNode = value["DesktopUsers"]["desktopUser"];
	for (auto valueDesktopUsersdesktopUser : allDesktopUsersNode)
	{
		DesktopUser desktopUsersObject;
		if(!valueDesktopUsersdesktopUser["DisplayName"].isNull())
			desktopUsersObject.displayName = valueDesktopUsersdesktopUser["DisplayName"].asString();
		if(!valueDesktopUsersdesktopUser["Password"].isNull())
			desktopUsersObject.password = valueDesktopUsersdesktopUser["Password"].asString();
		if(!valueDesktopUsersdesktopUser["EndUserId"].isNull())
			desktopUsersObject.endUserId = valueDesktopUsersdesktopUser["EndUserId"].asString();
		desktopUsers_.push_back(desktopUsersObject);
	}

}

std::vector<DescribeUsersPasswordResult::DesktopUser> DescribeUsersPasswordResult::getDesktopUsers()const
{
	return desktopUsers_;
}

