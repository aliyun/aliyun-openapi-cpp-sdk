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

#include <alibabacloud/ram/model/ListGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ram;
using namespace AlibabaCloud::Ram::Model;

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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allGroups = value["Groups"]["Group"];
	for (auto value : allGroups)
	{
		Group groupsObject;
		if(!value["GroupName"].isNull())
			groupsObject.groupName = value["GroupName"].asString();
		if(!value["Comments"].isNull())
			groupsObject.comments = value["Comments"].asString();
		if(!value["CreateDate"].isNull())
			groupsObject.createDate = value["CreateDate"].asString();
		if(!value["UpdateDate"].isNull())
			groupsObject.updateDate = value["UpdateDate"].asString();
		groups_.push_back(groupsObject);
	}
	if(!value["IsTruncated"].isNull())
		isTruncated_ = value["IsTruncated"].asString() == "true";
	if(!value["Marker"].isNull())
		marker_ = value["Marker"].asString();

}

std::vector<ListGroupsResult::Group> ListGroupsResult::getGroups()const
{
	return groups_;
}

bool ListGroupsResult::getIsTruncated()const
{
	return isTruncated_;
}

std::string ListGroupsResult::getMarker()const
{
	return marker_;
}

