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

#include <alibabacloud/iot/model/QueryDevicePropertyStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryDevicePropertyStatusResult::QueryDevicePropertyStatusResult() :
	ServiceResult()
{}

QueryDevicePropertyStatusResult::QueryDevicePropertyStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDevicePropertyStatusResult::~QueryDevicePropertyStatusResult()
{}

void QueryDevicePropertyStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allList = value["List"]["PropertyStatusInfo"];
	for (auto value : allList)
	{
		Data::PropertyStatusInfo propertyStatusInfoObject;
		if(!value["Unit"].isNull())
			propertyStatusInfoObject.unit = value["Unit"].asString();
		if(!value["Identifier"].isNull())
			propertyStatusInfoObject.identifier = value["Identifier"].asString();
		if(!value["DataType"].isNull())
			propertyStatusInfoObject.dataType = value["DataType"].asString();
		if(!value["Time"].isNull())
			propertyStatusInfoObject.time = value["Time"].asString();
		if(!value["Value"].isNull())
			propertyStatusInfoObject.value = value["Value"].asString();
		if(!value["Name"].isNull())
			propertyStatusInfoObject.name = value["Name"].asString();
		data_.list.push_back(propertyStatusInfoObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QueryDevicePropertyStatusResult::Data QueryDevicePropertyStatusResult::getData()const
{
	return data_;
}

std::string QueryDevicePropertyStatusResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryDevicePropertyStatusResult::getCode()const
{
	return code_;
}

bool QueryDevicePropertyStatusResult::getSuccess()const
{
	return success_;
}

