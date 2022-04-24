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

#include <alibabacloud/bssopenapi/model/QueryPermissionListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryPermissionListResult::QueryPermissionListResult() :
	ServiceResult()
{}

QueryPermissionListResult::QueryPermissionListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryPermissionListResult::~QueryPermissionListResult()
{}

void QueryPermissionListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["EndTime"].isNull())
		data_.endTime = dataNode["EndTime"].asString();
	if(!dataNode["RelationType"].isNull())
		data_.relationType = dataNode["RelationType"].asString();
	if(!dataNode["StartTime"].isNull())
		data_.startTime = dataNode["StartTime"].asString();
	if(!dataNode["State"].isNull())
		data_.state = dataNode["State"].asString();
	if(!dataNode["MasterId"].isNull())
		data_.masterId = std::stol(dataNode["MasterId"].asString());
	if(!dataNode["MemberId"].isNull())
		data_.memberId = std::stol(dataNode["MemberId"].asString());
	if(!dataNode["SetupTime"].isNull())
		data_.setupTime = dataNode["SetupTime"].asString();
	auto allPermissionListNode = dataNode["PermissionList"]["PermissionListItem"];
	for (auto dataNodePermissionListPermissionListItem : allPermissionListNode)
	{
		Data::PermissionListItem permissionListItemObject;
		if(!dataNodePermissionListPermissionListItem["EndTime"].isNull())
			permissionListItemObject.endTime = dataNodePermissionListPermissionListItem["EndTime"].asString();
		if(!dataNodePermissionListPermissionListItem["StartTime"].isNull())
			permissionListItemObject.startTime = dataNodePermissionListPermissionListItem["StartTime"].asString();
		if(!dataNodePermissionListPermissionListItem["PermissionCode"].isNull())
			permissionListItemObject.permissionCode = dataNodePermissionListPermissionListItem["PermissionCode"].asString();
		if(!dataNodePermissionListPermissionListItem["PermissionName"].isNull())
			permissionListItemObject.permissionName = dataNodePermissionListPermissionListItem["PermissionName"].asString();
		data_.permissionList.push_back(permissionListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryPermissionListResult::getMessage()const
{
	return message_;
}

QueryPermissionListResult::Data QueryPermissionListResult::getData()const
{
	return data_;
}

std::string QueryPermissionListResult::getCode()const
{
	return code_;
}

bool QueryPermissionListResult::getSuccess()const
{
	return success_;
}

