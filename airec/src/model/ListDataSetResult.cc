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

#include <alibabacloud/airec/model/ListDataSetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

ListDataSetResult::ListDataSetResult() :
	ServiceResult()
{}

ListDataSetResult::ListDataSetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataSetResult::~ListDataSetResult()
{}

void ListDataSetResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["ResultItem"];
	for (auto valueresultResultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultResultItem["gmtCreate"].isNull())
			resultObject.gmtCreate = std::stol(valueresultResultItem["gmtCreate"].asString());
		if(!valueresultResultItem["gmtModified"].isNull())
			resultObject.gmtModified = std::stol(valueresultResultItem["gmtModified"].asString());
		if(!valueresultResultItem["instanceId"].isNull())
			resultObject.instanceId = valueresultResultItem["instanceId"].asString();
		if(!valueresultResultItem["state"].isNull())
			resultObject.state = valueresultResultItem["state"].asString();
		if(!valueresultResultItem["versionId"].isNull())
			resultObject.versionId = valueresultResultItem["versionId"].asString();
		result_.push_back(resultObject);
	}
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<ListDataSetResult::ResultItem> ListDataSetResult::getresult()const
{
	return result_;
}

std::string ListDataSetResult::getMessage()const
{
	return message_;
}

std::string ListDataSetResult::getRequestId()const
{
	return requestId_;
}

std::string ListDataSetResult::getCode()const
{
	return code_;
}

