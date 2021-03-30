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

#include <alibabacloud/airec/model/ListScenesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

ListScenesResult::ListScenesResult() :
	ServiceResult()
{}

ListScenesResult::ListScenesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListScenesResult::~ListScenesResult()
{}

void ListScenesResult::parse(const std::string &payload)
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
			resultObject.gmtCreate = valueresultResultItem["gmtCreate"].asString();
		if(!valueresultResultItem["gmtModified"].isNull())
			resultObject.gmtModified = valueresultResultItem["gmtModified"].asString();
		if(!valueresultResultItem["sceneId"].isNull())
			resultObject.sceneId = valueresultResultItem["sceneId"].asString();
		if(!valueresultResultItem["status"].isNull())
			resultObject.status = valueresultResultItem["status"].asString();
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();

}

std::vector<ListScenesResult::ResultItem> ListScenesResult::getresult()const
{
	return result_;
}

std::string ListScenesResult::getRequestId()const
{
	return requestId_;
}

std::string ListScenesResult::getMessage()const
{
	return message_;
}

std::string ListScenesResult::getCode()const
{
	return code_;
}

