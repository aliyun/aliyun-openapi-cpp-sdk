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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allAlertDingDingGroupList = value["AlertDingDingGroupList"]["alertDingDingGroup"];
	for (auto value : allAlertDingDingGroupList)
	{
		AlertDingDingGroup alertDingDingGroupListObject;
		if(!value["Id"].isNull())
			alertDingDingGroupListObject.id = std::stol(value["Id"].asString());
		if(!value["GmtCreate"].isNull())
			alertDingDingGroupListObject.gmtCreate = value["GmtCreate"].asString();
		if(!value["GmtModified"].isNull())
			alertDingDingGroupListObject.gmtModified = value["GmtModified"].asString();
		if(!value["BizId"].isNull())
			alertDingDingGroupListObject.bizId = value["BizId"].asString();
		if(!value["Name"].isNull())
			alertDingDingGroupListObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			alertDingDingGroupListObject.description = value["Description"].asString();
		if(!value["WebHookUrl"].isNull())
			alertDingDingGroupListObject.webHookUrl = value["WebHookUrl"].asString();
		alertDingDingGroupList_.push_back(alertDingDingGroupListObject);
	}

}

std::vector<ListAlertDingDingGroupResult::AlertDingDingGroup> ListAlertDingDingGroupResult::getAlertDingDingGroupList()const
{
	return alertDingDingGroupList_;
}

