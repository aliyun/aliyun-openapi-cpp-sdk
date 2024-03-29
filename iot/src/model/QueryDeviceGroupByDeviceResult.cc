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

#include <alibabacloud/iot/model/QueryDeviceGroupByDeviceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryDeviceGroupByDeviceResult::QueryDeviceGroupByDeviceResult() :
	ServiceResult()
{}

QueryDeviceGroupByDeviceResult::QueryDeviceGroupByDeviceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDeviceGroupByDeviceResult::~QueryDeviceGroupByDeviceResult()
{}

void QueryDeviceGroupByDeviceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGroupInfosNode = value["GroupInfos"]["GroupInfo"];
	for (auto valueGroupInfosGroupInfo : allGroupInfosNode)
	{
		GroupInfo groupInfosObject;
		if(!valueGroupInfosGroupInfo["GroupId"].isNull())
			groupInfosObject.groupId = valueGroupInfosGroupInfo["GroupId"].asString();
		if(!valueGroupInfosGroupInfo["GroupName"].isNull())
			groupInfosObject.groupName = valueGroupInfosGroupInfo["GroupName"].asString();
		if(!valueGroupInfosGroupInfo["UtcCreate"].isNull())
			groupInfosObject.utcCreate = valueGroupInfosGroupInfo["UtcCreate"].asString();
		if(!valueGroupInfosGroupInfo["GroupDesc"].isNull())
			groupInfosObject.groupDesc = valueGroupInfosGroupInfo["GroupDesc"].asString();
		if(!valueGroupInfosGroupInfo["GroupType"].isNull())
			groupInfosObject.groupType = valueGroupInfosGroupInfo["GroupType"].asString();
		groupInfos_.push_back(groupInfosObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::vector<QueryDeviceGroupByDeviceResult::GroupInfo> QueryDeviceGroupByDeviceResult::getGroupInfos()const
{
	return groupInfos_;
}

std::string QueryDeviceGroupByDeviceResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryDeviceGroupByDeviceResult::getCode()const
{
	return code_;
}

bool QueryDeviceGroupByDeviceResult::getSuccess()const
{
	return success_;
}

