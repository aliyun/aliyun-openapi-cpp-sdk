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

#include <alibabacloud/eventbridge/model/ListApiDestinationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eventbridge;
using namespace AlibabaCloud::Eventbridge::Model;

ListApiDestinationsResult::ListApiDestinationsResult() :
	ServiceResult()
{}

ListApiDestinationsResult::ListApiDestinationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApiDestinationsResult::~ListApiDestinationsResult()
{}

void ListApiDestinationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["NextToken"].isNull())
		data_.nextToken = dataNode["NextToken"].asString();
	if(!dataNode["Total"].isNull())
		data_.total = std::stof(dataNode["Total"].asString());
	if(!dataNode["MaxResults"].isNull())
		data_.maxResults = std::stof(dataNode["MaxResults"].asString());
	auto allApiDestinationsNode = dataNode["ApiDestinations"]["apiDestinationsItem"];
	for (auto dataNodeApiDestinationsapiDestinationsItem : allApiDestinationsNode)
	{
		Data::ApiDestinationsItem apiDestinationsItemObject;
		if(!dataNodeApiDestinationsapiDestinationsItem["ApiDestinationName"].isNull())
			apiDestinationsItemObject.apiDestinationName = dataNodeApiDestinationsapiDestinationsItem["ApiDestinationName"].asString();
		if(!dataNodeApiDestinationsapiDestinationsItem["ConnectionName"].isNull())
			apiDestinationsItemObject.connectionName = dataNodeApiDestinationsapiDestinationsItem["ConnectionName"].asString();
		if(!dataNodeApiDestinationsapiDestinationsItem["Description"].isNull())
			apiDestinationsItemObject.description = dataNodeApiDestinationsapiDestinationsItem["Description"].asString();
		if(!dataNodeApiDestinationsapiDestinationsItem["GmtCreate"].isNull())
			apiDestinationsItemObject.gmtCreate = std::stol(dataNodeApiDestinationsapiDestinationsItem["GmtCreate"].asString());
		if(!dataNodeApiDestinationsapiDestinationsItem["InvocationRateLimitPerSecond"].isNull())
			apiDestinationsItemObject.invocationRateLimitPerSecond = std::stol(dataNodeApiDestinationsapiDestinationsItem["InvocationRateLimitPerSecond"].asString());
		auto httpApiParametersNode = value["HttpApiParameters"];
		if(!httpApiParametersNode["Endpoint"].isNull())
			apiDestinationsItemObject.httpApiParameters.endpoint = httpApiParametersNode["Endpoint"].asString();
		if(!httpApiParametersNode["Method"].isNull())
			apiDestinationsItemObject.httpApiParameters.method = httpApiParametersNode["Method"].asString();
		auto allApiParametersNode = httpApiParametersNode["ApiParameters"]["apiParametersItem"];
		for (auto httpApiParametersNodeApiParametersapiParametersItem : allApiParametersNode)
		{
			Data::ApiDestinationsItem::HttpApiParameters::ApiParametersItem apiParametersItemObject;
			if(!httpApiParametersNodeApiParametersapiParametersItem["Name"].isNull())
				apiParametersItemObject.name = httpApiParametersNodeApiParametersapiParametersItem["Name"].asString();
			if(!httpApiParametersNodeApiParametersapiParametersItem["Description"].isNull())
				apiParametersItemObject.description = httpApiParametersNodeApiParametersapiParametersItem["Description"].asString();
			if(!httpApiParametersNodeApiParametersapiParametersItem["Type"].isNull())
				apiParametersItemObject.type = httpApiParametersNodeApiParametersapiParametersItem["Type"].asString();
			if(!httpApiParametersNodeApiParametersapiParametersItem["DefaultValue"].isNull())
				apiParametersItemObject.defaultValue = httpApiParametersNodeApiParametersapiParametersItem["DefaultValue"].asString();
			if(!httpApiParametersNodeApiParametersapiParametersItem["In"].isNull())
				apiParametersItemObject.in = httpApiParametersNodeApiParametersapiParametersItem["In"].asString();
			apiDestinationsItemObject.httpApiParameters.apiParameters.push_back(apiParametersItemObject);
		}
		data_.apiDestinations.push_back(apiDestinationsItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::string ListApiDestinationsResult::getMessage()const
{
	return message_;
}

ListApiDestinationsResult::Data ListApiDestinationsResult::getData()const
{
	return data_;
}

std::string ListApiDestinationsResult::getCode()const
{
	return code_;
}

