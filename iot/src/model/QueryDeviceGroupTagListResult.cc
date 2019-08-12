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

#include <alibabacloud/iot/model/QueryDeviceGroupTagListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryDeviceGroupTagListResult::QueryDeviceGroupTagListResult() :
	ServiceResult()
{}

QueryDeviceGroupTagListResult::QueryDeviceGroupTagListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDeviceGroupTagListResult::~QueryDeviceGroupTagListResult()
{}

void QueryDeviceGroupTagListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["GroupTagInfo"];
	for (auto value : allData)
	{
		GroupTagInfo dataObject;
		if(!value["TagKey"].isNull())
			dataObject.tagKey = value["TagKey"].asString();
		if(!value["TagValue"].isNull())
			dataObject.tagValue = value["TagValue"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::vector<QueryDeviceGroupTagListResult::GroupTagInfo> QueryDeviceGroupTagListResult::getData()const
{
	return data_;
}

std::string QueryDeviceGroupTagListResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryDeviceGroupTagListResult::getCode()const
{
	return code_;
}

bool QueryDeviceGroupTagListResult::getSuccess()const
{
	return success_;
}

