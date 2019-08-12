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

#include <alibabacloud/iot/model/QueryDeviceGroupInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryDeviceGroupInfoResult::QueryDeviceGroupInfoResult() :
	ServiceResult()
{}

QueryDeviceGroupInfoResult::QueryDeviceGroupInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDeviceGroupInfoResult::~QueryDeviceGroupInfoResult()
{}

void QueryDeviceGroupInfoResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["GroupId"].isNull())
		data_.groupId = dataNode["GroupId"].asString();
	if(!dataNode["UtcCreate"].isNull())
		data_.utcCreate = dataNode["UtcCreate"].asString();
	if(!dataNode["GroupName"].isNull())
		data_.groupName = dataNode["GroupName"].asString();
	if(!dataNode["GroupDesc"].isNull())
		data_.groupDesc = dataNode["GroupDesc"].asString();
	if(!dataNode["DeviceCount"].isNull())
		data_.deviceCount = std::stoi(dataNode["DeviceCount"].asString());
	if(!dataNode["DeviceActive"].isNull())
		data_.deviceActive = std::stoi(dataNode["DeviceActive"].asString());
	if(!dataNode["DeviceOnline"].isNull())
		data_.deviceOnline = std::stoi(dataNode["DeviceOnline"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QueryDeviceGroupInfoResult::Data QueryDeviceGroupInfoResult::getData()const
{
	return data_;
}

std::string QueryDeviceGroupInfoResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryDeviceGroupInfoResult::getCode()const
{
	return code_;
}

bool QueryDeviceGroupInfoResult::getSuccess()const
{
	return success_;
}

