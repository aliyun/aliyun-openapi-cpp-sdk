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

#include <alibabacloud/schedulerx2/model/ListGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Schedulerx2;
using namespace AlibabaCloud::Schedulerx2::Model;

ListGroupsResult::ListGroupsResult() :
	ServiceResult()
{}

ListGroupsResult::ListGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGroupsResult::~ListGroupsResult()
{}

void ListGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allAppGroupsNode = dataNode["AppGroups"]["AppGroup"];
	for (auto dataNodeAppGroupsAppGroup : allAppGroupsNode)
	{
		Data::AppGroup appGroupObject;
		if(!dataNodeAppGroupsAppGroup["AppGroupId"].isNull())
			appGroupObject.appGroupId = std::stol(dataNodeAppGroupsAppGroup["AppGroupId"].asString());
		if(!dataNodeAppGroupsAppGroup["AppName"].isNull())
			appGroupObject.appName = dataNodeAppGroupsAppGroup["AppName"].asString();
		if(!dataNodeAppGroupsAppGroup["AppKey"].isNull())
			appGroupObject.appKey = dataNodeAppGroupsAppGroup["AppKey"].asString();
		if(!dataNodeAppGroupsAppGroup["Description"].isNull())
			appGroupObject.description = dataNodeAppGroupsAppGroup["Description"].asString();
		if(!dataNodeAppGroupsAppGroup["GroupId"].isNull())
			appGroupObject.groupId = dataNodeAppGroupsAppGroup["GroupId"].asString();
		if(!dataNodeAppGroupsAppGroup["Xattrs"].isNull())
			appGroupObject.xattrs = dataNodeAppGroupsAppGroup["Xattrs"].asString();
		if(!dataNodeAppGroupsAppGroup["AppVersion"].isNull())
			appGroupObject.appVersion = std::stoi(dataNodeAppGroupsAppGroup["AppVersion"].asString());
		if(!dataNodeAppGroupsAppGroup["Namespace"].isNull())
			appGroupObject._namespace = dataNodeAppGroupsAppGroup["Namespace"].asString();
		data_.appGroups.push_back(appGroupObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListGroupsResult::getMessage()const
{
	return message_;
}

ListGroupsResult::Data ListGroupsResult::getData()const
{
	return data_;
}

int ListGroupsResult::getCode()const
{
	return code_;
}

bool ListGroupsResult::getSuccess()const
{
	return success_;
}

