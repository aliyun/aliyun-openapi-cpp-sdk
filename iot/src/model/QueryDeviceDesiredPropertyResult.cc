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

#include <alibabacloud/iot/model/QueryDeviceDesiredPropertyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryDeviceDesiredPropertyResult::QueryDeviceDesiredPropertyResult() :
	ServiceResult()
{}

QueryDeviceDesiredPropertyResult::QueryDeviceDesiredPropertyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDeviceDesiredPropertyResult::~QueryDeviceDesiredPropertyResult()
{}

void QueryDeviceDesiredPropertyResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allList = value["List"]["DesiredPropertyInfo"];
	for (auto value : allList)
	{
		Data::DesiredPropertyInfo desiredPropertyInfoObject;
		if(!value["Unit"].isNull())
			desiredPropertyInfoObject.unit = value["Unit"].asString();
		if(!value["Identifier"].isNull())
			desiredPropertyInfoObject.identifier = value["Identifier"].asString();
		if(!value["DataType"].isNull())
			desiredPropertyInfoObject.dataType = value["DataType"].asString();
		if(!value["Time"].isNull())
			desiredPropertyInfoObject.time = value["Time"].asString();
		if(!value["Value"].isNull())
			desiredPropertyInfoObject.value = value["Value"].asString();
		if(!value["Name"].isNull())
			desiredPropertyInfoObject.name = value["Name"].asString();
		if(!value["Version"].isNull())
			desiredPropertyInfoObject.version = std::stol(value["Version"].asString());
		data_.list.push_back(desiredPropertyInfoObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QueryDeviceDesiredPropertyResult::Data QueryDeviceDesiredPropertyResult::getData()const
{
	return data_;
}

std::string QueryDeviceDesiredPropertyResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryDeviceDesiredPropertyResult::getCode()const
{
	return code_;
}

bool QueryDeviceDesiredPropertyResult::getSuccess()const
{
	return success_;
}

