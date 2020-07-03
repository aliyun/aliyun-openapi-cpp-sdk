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

#include <alibabacloud/airec/model/ListDiversifyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

ListDiversifyResult::ListDiversifyResult() :
	ServiceResult()
{}

ListDiversifyResult::ListDiversifyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDiversifyResult::~ListDiversifyResult()
{}

void ListDiversifyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["Name"].isNull())
			resultObject.name = valueResultResultItem["Name"].asString();
		if(!valueResultResultItem["GmtCreate"].isNull())
			resultObject.gmtCreate = valueResultResultItem["GmtCreate"].asString();
		if(!valueResultResultItem["GmtModified"].isNull())
			resultObject.gmtModified = valueResultResultItem["GmtModified"].asString();
		auto _parameterNode = value["Parameter"];
		if(!_parameterNode["CategoryIndex"].isNull())
			resultObject._parameter.categoryIndex = std::stoi(_parameterNode["CategoryIndex"].asString());
		if(!_parameterNode["Window"].isNull())
			resultObject._parameter.window = std::stoi(_parameterNode["Window"].asString());
		result_.push_back(resultObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListDiversifyResult::getMessage()const
{
	return message_;
}

std::string ListDiversifyResult::getCode()const
{
	return code_;
}

std::vector<ListDiversifyResult::ResultItem> ListDiversifyResult::getResult()const
{
	return result_;
}

