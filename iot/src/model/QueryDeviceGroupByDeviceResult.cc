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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allGroupInfos = value["GroupInfos"]["GroupInfo"];
	for (auto value : allGroupInfos)
	{
		GroupInfo groupInfosObject;
		if(!value["GroupId"].isNull())
			groupInfosObject.groupId = value["GroupId"].asString();
		if(!value["GroupName"].isNull())
			groupInfosObject.groupName = value["GroupName"].asString();
		if(!value["UtcCreate"].isNull())
			groupInfosObject.utcCreate = value["UtcCreate"].asString();
		if(!value["GroupDesc"].isNull())
			groupInfosObject.groupDesc = value["GroupDesc"].asString();
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

