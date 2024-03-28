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

#include <alibabacloud/devops/model/ListRepositoryTreeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListRepositoryTreeResult::ListRepositoryTreeResult() :
	ServiceResult()
{}

ListRepositoryTreeResult::ListRepositoryTreeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRepositoryTreeResult::~ListRepositoryTreeResult()
{}

void ListRepositoryTreeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["path"].isNull())
			resultObject.path = valueresultresultItem["path"].asString();
		if(!valueresultresultItem["isLFS"].isNull())
			resultObject.isLFS = valueresultresultItem["isLFS"].asString() == "true";
		if(!valueresultresultItem["id"].isNull())
			resultObject.id = valueresultresultItem["id"].asString();
		if(!valueresultresultItem["name"].isNull())
			resultObject.name = valueresultresultItem["name"].asString();
		if(!valueresultresultItem["type"].isNull())
			resultObject.type = valueresultresultItem["type"].asString();
		if(!valueresultresultItem["mode"].isNull())
			resultObject.mode = valueresultresultItem["mode"].asString();
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::vector<ListRepositoryTreeResult::ResultItem> ListRepositoryTreeResult::getresult()const
{
	return result_;
}

std::string ListRepositoryTreeResult::getRequestId()const
{
	return requestId_;
}

std::string ListRepositoryTreeResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListRepositoryTreeResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListRepositoryTreeResult::getSuccess()const
{
	return success_;
}

