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

#include <alibabacloud/ccc/model/ListTrunkProvidersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListTrunkProvidersResult::ListTrunkProvidersResult() :
	ServiceResult()
{}

ListTrunkProvidersResult::ListTrunkProvidersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTrunkProvidersResult::~ListTrunkProvidersResult()
{}

void ListTrunkProvidersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTrunkProvidersNode = value["TrunkProviders"]["TrunkProvider"];
	for (auto valueTrunkProvidersTrunkProvider : allTrunkProvidersNode)
	{
		TrunkProvider trunkProvidersObject;
		if(!valueTrunkProvidersTrunkProvider["ProviderName"].isNull())
			trunkProvidersObject.providerName = valueTrunkProvidersTrunkProvider["ProviderName"].asString();
		if(!valueTrunkProvidersTrunkProvider["Status"].isNull())
			trunkProvidersObject.status = valueTrunkProvidersTrunkProvider["Status"].asString();
		trunkProviders_.push_back(trunkProvidersObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string ListTrunkProvidersResult::getMessage()const
{
	return message_;
}

int ListTrunkProvidersResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListTrunkProvidersResult::TrunkProvider> ListTrunkProvidersResult::getTrunkProviders()const
{
	return trunkProviders_;
}

std::string ListTrunkProvidersResult::getCode()const
{
	return code_;
}

bool ListTrunkProvidersResult::getSuccess()const
{
	return success_;
}

