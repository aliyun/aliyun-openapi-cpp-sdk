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

#include <alibabacloud/eventbridge/model/GetApiDestinationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eventbridge;
using namespace AlibabaCloud::Eventbridge::Model;

GetApiDestinationResult::GetApiDestinationResult() :
	ServiceResult()
{}

GetApiDestinationResult::GetApiDestinationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetApiDestinationResult::~GetApiDestinationResult()
{}

void GetApiDestinationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ApiDestinationName"].isNull())
		data_.apiDestinationName = dataNode["ApiDestinationName"].asString();
	if(!dataNode["ConnectionName"].isNull())
		data_.connectionName = dataNode["ConnectionName"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["InvocationRateLimitPerSecond"].isNull())
		data_.invocationRateLimitPerSecond = std::stol(dataNode["InvocationRateLimitPerSecond"].asString());
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = std::stol(dataNode["GmtCreate"].asString());
	auto httpApiParametersNode = dataNode["HttpApiParameters"];
	if(!httpApiParametersNode["Endpoint"].isNull())
		data_.httpApiParameters.endpoint = httpApiParametersNode["Endpoint"].asString();
	if(!httpApiParametersNode["Method"].isNull())
		data_.httpApiParameters.method = httpApiParametersNode["Method"].asString();
	auto allApiParametersNode = httpApiParametersNode["ApiParameters"]["apiParametersItem"];
	for (auto httpApiParametersNodeApiParametersapiParametersItem : allApiParametersNode)
	{
		Data::HttpApiParameters::ApiParametersItem apiParametersItemObject;
		if(!httpApiParametersNodeApiParametersapiParametersItem["Name"].isNull())
			apiParametersItemObject.name = httpApiParametersNodeApiParametersapiParametersItem["Name"].asString();
		if(!httpApiParametersNodeApiParametersapiParametersItem["Description"].isNull())
			apiParametersItemObject.description = httpApiParametersNodeApiParametersapiParametersItem["Description"].asString();
		if(!httpApiParametersNodeApiParametersapiParametersItem["Type"].isNull())
			apiParametersItemObject.type = httpApiParametersNodeApiParametersapiParametersItem["Type"].asString();
		if(!httpApiParametersNodeApiParametersapiParametersItem["In"].isNull())
			apiParametersItemObject.in = httpApiParametersNodeApiParametersapiParametersItem["In"].asString();
		data_.httpApiParameters.apiParameters.push_back(apiParametersItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::string GetApiDestinationResult::getMessage()const
{
	return message_;
}

GetApiDestinationResult::Data GetApiDestinationResult::getData()const
{
	return data_;
}

std::string GetApiDestinationResult::getCode()const
{
	return code_;
}

