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

#include <alibabacloud/iot/model/QueryDeviceServiceDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryDeviceServiceDataResult::QueryDeviceServiceDataResult() :
	ServiceResult()
{}

QueryDeviceServiceDataResult::QueryDeviceServiceDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDeviceServiceDataResult::~QueryDeviceServiceDataResult()
{}

void QueryDeviceServiceDataResult::parse(const std::string &payload)
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
	if(!dataNode["NextTime"].isNull())
		data_.nextTime = std::stol(dataNode["NextTime"].asString());
	if(!dataNode["NextValid"].isNull())
		data_.nextValid = dataNode["NextValid"].asString() == "true";
	auto allList = value["List"]["ServiceInfo"];
	for (auto value : allList)
	{
		Data::ServiceInfo serviceInfoObject;
		if(!value["Time"].isNull())
			serviceInfoObject.time = value["Time"].asString();
		if(!value["Identifier"].isNull())
			serviceInfoObject.identifier = value["Identifier"].asString();
		if(!value["Name"].isNull())
			serviceInfoObject.name = value["Name"].asString();
		if(!value["InputData"].isNull())
			serviceInfoObject.inputData = value["InputData"].asString();
		if(!value["OutputData"].isNull())
			serviceInfoObject.outputData = value["OutputData"].asString();
		data_.list.push_back(serviceInfoObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QueryDeviceServiceDataResult::Data QueryDeviceServiceDataResult::getData()const
{
	return data_;
}

std::string QueryDeviceServiceDataResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryDeviceServiceDataResult::getCode()const
{
	return code_;
}

bool QueryDeviceServiceDataResult::getSuccess()const
{
	return success_;
}

