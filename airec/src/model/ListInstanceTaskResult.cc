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

#include <alibabacloud/airec/model/ListInstanceTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

ListInstanceTaskResult::ListInstanceTaskResult() :
	ServiceResult()
{}

ListInstanceTaskResult::ListInstanceTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstanceTaskResult::~ListInstanceTaskResult()
{}

void ListInstanceTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["name"].isNull())
			resultObject.name = valueresultresultItem["name"].asString();
		if(!valueresultresultItem["totalProgress"].isNull())
			resultObject.totalProgress = std::stoi(valueresultresultItem["totalProgress"].asString());
		auto allsubProgressInfosNode = valueresultresultItem["subProgressInfos"]["subProgressInfosItem"];
		for (auto valueresultresultItemsubProgressInfossubProgressInfosItem : allsubProgressInfosNode)
		{
			ResultItem::SubProgressInfosItem subProgressInfosObject;
			if(!valueresultresultItemsubProgressInfossubProgressInfosItem["detail"].isNull())
				subProgressInfosObject.detail = valueresultresultItemsubProgressInfossubProgressInfosItem["detail"].asString();
			if(!valueresultresultItemsubProgressInfossubProgressInfosItem["finishedNum"].isNull())
				subProgressInfosObject.finishedNum = std::stoi(valueresultresultItemsubProgressInfossubProgressInfosItem["finishedNum"].asString());
			if(!valueresultresultItemsubProgressInfossubProgressInfosItem["progress"].isNull())
				subProgressInfosObject.progress = std::stoi(valueresultresultItemsubProgressInfossubProgressInfosItem["progress"].asString());
			if(!valueresultresultItemsubProgressInfossubProgressInfosItem["totalNum"].isNull())
				subProgressInfosObject.totalNum = std::stoi(valueresultresultItemsubProgressInfossubProgressInfosItem["totalNum"].asString());
			if(!valueresultresultItemsubProgressInfossubProgressInfosItem["type"].isNull())
				subProgressInfosObject.type = valueresultresultItemsubProgressInfossubProgressInfosItem["type"].asString();
			resultObject.subProgressInfos.push_back(subProgressInfosObject);
		}
		result_.push_back(resultObject);
	}
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<ListInstanceTaskResult::ResultItem> ListInstanceTaskResult::getresult()const
{
	return result_;
}

std::string ListInstanceTaskResult::getMessage()const
{
	return message_;
}

std::string ListInstanceTaskResult::getRequestId()const
{
	return requestId_;
}

std::string ListInstanceTaskResult::getCode()const
{
	return code_;
}

