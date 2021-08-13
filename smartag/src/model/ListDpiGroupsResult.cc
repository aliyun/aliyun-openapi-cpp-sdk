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

#include <alibabacloud/smartag/model/ListDpiGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

ListDpiGroupsResult::ListDpiGroupsResult() :
	ServiceResult()
{}

ListDpiGroupsResult::ListDpiGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDpiGroupsResult::~ListDpiGroupsResult()
{}

void ListDpiGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDpiGroupNode = value["DpiGroup"]["DpiGroupItem"];
	for (auto valueDpiGroupDpiGroupItem : allDpiGroupNode)
	{
		DpiGroupItem dpiGroupObject;
		if(!valueDpiGroupDpiGroupItem["MinSignatureDbVersion"].isNull())
			dpiGroupObject.minSignatureDbVersion = valueDpiGroupDpiGroupItem["MinSignatureDbVersion"].asString();
		if(!valueDpiGroupDpiGroupItem["DpiGroupName"].isNull())
			dpiGroupObject.dpiGroupName = valueDpiGroupDpiGroupItem["DpiGroupName"].asString();
		if(!valueDpiGroupDpiGroupItem["DpiGroupId"].isNull())
			dpiGroupObject.dpiGroupId = valueDpiGroupDpiGroupItem["DpiGroupId"].asString();
		if(!valueDpiGroupDpiGroupItem["MinEngineVersion"].isNull())
			dpiGroupObject.minEngineVersion = valueDpiGroupDpiGroupItem["MinEngineVersion"].asString();
		dpiGroup_.push_back(dpiGroupObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

int ListDpiGroupsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListDpiGroupsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListDpiGroupsResult::DpiGroupItem> ListDpiGroupsResult::getDpiGroup()const
{
	return dpiGroup_;
}

