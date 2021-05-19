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

#include <alibabacloud/scsp/model/GetOutbounNumListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scsp;
using namespace AlibabaCloud::Scsp::Model;

GetOutbounNumListResult::GetOutbounNumListResult() :
	ServiceResult()
{}

GetOutbounNumListResult::GetOutbounNumListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOutbounNumListResult::~GetOutbounNumListResult()
{}

void GetOutbounNumListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allNumGroupNode = dataNode["NumGroup"]["NumGroupItem"];
	for (auto dataNodeNumGroupNumGroupItem : allNumGroupNode)
	{
		Data::NumGroupItem numGroupItemObject;
		if(!dataNodeNumGroupNumGroupItem["Type"].isNull())
			numGroupItemObject.type = std::stoi(dataNodeNumGroupNumGroupItem["Type"].asString());
		if(!dataNodeNumGroupNumGroupItem["Value"].isNull())
			numGroupItemObject.value = dataNodeNumGroupNumGroupItem["Value"].asString();
		if(!dataNodeNumGroupNumGroupItem["Description"].isNull())
			numGroupItemObject.description = dataNodeNumGroupNumGroupItem["Description"].asString();
		data_.numGroup.push_back(numGroupItemObject);
	}
	auto allNumNode = dataNode["Num"]["NumItem"];
	for (auto dataNodeNumNumItem : allNumNode)
	{
		Data::NumItem numItemObject;
		if(!dataNodeNumNumItem["Type"].isNull())
			numItemObject.type = std::stoi(dataNodeNumNumItem["Type"].asString());
		if(!dataNodeNumNumItem["Value"].isNull())
			numItemObject.value = dataNodeNumNumItem["Value"].asString();
		if(!dataNodeNumNumItem["Description"].isNull())
			numItemObject.description = dataNodeNumNumItem["Description"].asString();
		data_.num.push_back(numItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stol(value["HttpStatusCode"].asString());

}

std::string GetOutbounNumListResult::getMessage()const
{
	return message_;
}

long GetOutbounNumListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetOutbounNumListResult::Data GetOutbounNumListResult::getData()const
{
	return data_;
}

std::string GetOutbounNumListResult::getCode()const
{
	return code_;
}

bool GetOutbounNumListResult::getSuccess()const
{
	return success_;
}

