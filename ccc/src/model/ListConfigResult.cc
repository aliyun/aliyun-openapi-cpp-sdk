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

#include <alibabacloud/ccc/model/ListConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListConfigResult::ListConfigResult() :
	ServiceResult()
{}

ListConfigResult::ListConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListConfigResult::~ListConfigResult()
{}

void ListConfigResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allConfigItems = value["ConfigItems"]["ConfigItem"];
	for (auto value : allConfigItems)
	{
		ConfigItem configItemsObject;
		if(!value["Name"].isNull())
			configItemsObject.name = value["Name"].asString();
		if(!value["Value"].isNull())
			configItemsObject.value = value["Value"].asString();
		configItems_.push_back(configItemsObject);
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

std::vector<ListConfigResult::ConfigItem> ListConfigResult::getConfigItems()const
{
	return configItems_;
}

std::string ListConfigResult::getMessage()const
{
	return message_;
}

int ListConfigResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListConfigResult::getCode()const
{
	return code_;
}

bool ListConfigResult::getSuccess()const
{
	return success_;
}

