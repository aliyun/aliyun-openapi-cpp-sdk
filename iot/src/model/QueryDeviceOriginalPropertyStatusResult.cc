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

#include <alibabacloud/iot/model/QueryDeviceOriginalPropertyStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryDeviceOriginalPropertyStatusResult::QueryDeviceOriginalPropertyStatusResult() :
	ServiceResult()
{}

QueryDeviceOriginalPropertyStatusResult::QueryDeviceOriginalPropertyStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDeviceOriginalPropertyStatusResult::~QueryDeviceOriginalPropertyStatusResult()
{}

void QueryDeviceOriginalPropertyStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["NextValid"].isNull())
		data_.nextValid = dataNode["NextValid"].asString() == "true";
	if(!dataNode["NextPageToken"].isNull())
		data_.nextPageToken = dataNode["NextPageToken"].asString();
	auto allListNode = dataNode["List"]["PropertyStatusDataInfo"];
	for (auto dataNodeListPropertyStatusDataInfo : allListNode)
	{
		Data::PropertyStatusDataInfo propertyStatusDataInfoObject;
		if(!dataNodeListPropertyStatusDataInfo["Identifier"].isNull())
			propertyStatusDataInfoObject.identifier = dataNodeListPropertyStatusDataInfo["Identifier"].asString();
		if(!dataNodeListPropertyStatusDataInfo["Value"].isNull())
			propertyStatusDataInfoObject.value = dataNodeListPropertyStatusDataInfo["Value"].asString();
		if(!dataNodeListPropertyStatusDataInfo["Time"].isNull())
			propertyStatusDataInfoObject.time = std::stol(dataNodeListPropertyStatusDataInfo["Time"].asString());
		data_.list.push_back(propertyStatusDataInfoObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QueryDeviceOriginalPropertyStatusResult::Data QueryDeviceOriginalPropertyStatusResult::getData()const
{
	return data_;
}

std::string QueryDeviceOriginalPropertyStatusResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryDeviceOriginalPropertyStatusResult::getCode()const
{
	return code_;
}

bool QueryDeviceOriginalPropertyStatusResult::getSuccess()const
{
	return success_;
}

