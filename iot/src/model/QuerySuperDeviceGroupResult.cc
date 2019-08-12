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

#include <alibabacloud/iot/model/QuerySuperDeviceGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QuerySuperDeviceGroupResult::QuerySuperDeviceGroupResult() :
	ServiceResult()
{}

QuerySuperDeviceGroupResult::QuerySuperDeviceGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySuperDeviceGroupResult::~QuerySuperDeviceGroupResult()
{}

void QuerySuperDeviceGroupResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["GroupInfo"];
	for (auto value : allData)
	{
		GroupInfo dataObject;
		if(!value["GroupId"].isNull())
			dataObject.groupId = value["GroupId"].asString();
		if(!value["GroupName"].isNull())
			dataObject.groupName = value["GroupName"].asString();
		if(!value["GroupDesc"].isNull())
			dataObject.groupDesc = value["GroupDesc"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::vector<QuerySuperDeviceGroupResult::GroupInfo> QuerySuperDeviceGroupResult::getData()const
{
	return data_;
}

std::string QuerySuperDeviceGroupResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QuerySuperDeviceGroupResult::getCode()const
{
	return code_;
}

bool QuerySuperDeviceGroupResult::getSuccess()const
{
	return success_;
}

