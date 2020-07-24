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

#include <alibabacloud/codeup/model/ListRepositoryTreeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

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
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["Path"].isNull())
			resultObject.path = valueResultResultItem["Path"].asString();
		if(!valueResultResultItem["Id"].isNull())
			resultObject.id = valueResultResultItem["Id"].asString();
		if(!valueResultResultItem["Name"].isNull())
			resultObject.name = valueResultResultItem["Name"].asString();
		if(!valueResultResultItem["Mode"].isNull())
			resultObject.mode = valueResultResultItem["Mode"].asString();
		if(!valueResultResultItem["Type"].isNull())
			resultObject.type = valueResultResultItem["Type"].asString();
		result_.push_back(resultObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

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

std::vector<ListRepositoryTreeResult::ResultItem> ListRepositoryTreeResult::getResult()const
{
	return result_;
}

