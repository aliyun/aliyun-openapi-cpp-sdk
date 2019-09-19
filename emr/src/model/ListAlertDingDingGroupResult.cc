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

#include <alibabacloud/emr/model/ListAlertDingDingGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListAlertDingDingGroupResult::ListAlertDingDingGroupResult() :
	ServiceResult()
{}

ListAlertDingDingGroupResult::ListAlertDingDingGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAlertDingDingGroupResult::~ListAlertDingDingGroupResult()
{}

void ListAlertDingDingGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAlertDingDingGroupListNode = value["AlertDingDingGroupList"]["alertDingDingGroup"];
	for (auto valueAlertDingDingGroupListalertDingDingGroup : allAlertDingDingGroupListNode)
	{
		AlertDingDingGroup alertDingDingGroupListObject;
		if(!valueAlertDingDingGroupListalertDingDingGroup["Id"].isNull())
			alertDingDingGroupListObject.id = std::stol(valueAlertDingDingGroupListalertDingDingGroup["Id"].asString());
		if(!valueAlertDingDingGroupListalertDingDingGroup["GmtCreate"].isNull())
			alertDingDingGroupListObject.gmtCreate = valueAlertDingDingGroupListalertDingDingGroup["GmtCreate"].asString();
		if(!valueAlertDingDingGroupListalertDingDingGroup["GmtModified"].isNull())
			alertDingDingGroupListObject.gmtModified = valueAlertDingDingGroupListalertDingDingGroup["GmtModified"].asString();
		if(!valueAlertDingDingGroupListalertDingDingGroup["BizId"].isNull())
			alertDingDingGroupListObject.bizId = valueAlertDingDingGroupListalertDingDingGroup["BizId"].asString();
		if(!valueAlertDingDingGroupListalertDingDingGroup["Name"].isNull())
			alertDingDingGroupListObject.name = valueAlertDingDingGroupListalertDingDingGroup["Name"].asString();
		if(!valueAlertDingDingGroupListalertDingDingGroup["Description"].isNull())
			alertDingDingGroupListObject.description = valueAlertDingDingGroupListalertDingDingGroup["Description"].asString();
		if(!valueAlertDingDingGroupListalertDingDingGroup["WebHookUrl"].isNull())
			alertDingDingGroupListObject.webHookUrl = valueAlertDingDingGroupListalertDingDingGroup["WebHookUrl"].asString();
		alertDingDingGroupList_.push_back(alertDingDingGroupListObject);
	}

}

std::vector<ListAlertDingDingGroupResult::AlertDingDingGroup> ListAlertDingDingGroupResult::getAlertDingDingGroupList()const
{
	return alertDingDingGroupList_;
}

