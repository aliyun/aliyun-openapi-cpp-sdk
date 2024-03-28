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

#include <alibabacloud/devops/model/ListProjectLabelsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListProjectLabelsResult::ListProjectLabelsResult() :
	ServiceResult()
{}

ListProjectLabelsResult::ListProjectLabelsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProjectLabelsResult::~ListProjectLabelsResult()
{}

void ListProjectLabelsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["project_labels"];
	for (auto valueresultproject_labels : allresultNode)
	{
		Project_labels resultObject;
		if(!valueresultproject_labels["id"].isNull())
			resultObject.id = valueresultproject_labels["id"].asString();
		if(!valueresultproject_labels["name"].isNull())
			resultObject.name = valueresultproject_labels["name"].asString();
		if(!valueresultproject_labels["color"].isNull())
			resultObject.color = valueresultproject_labels["color"].asString();
		if(!valueresultproject_labels["description"].isNull())
			resultObject.description = valueresultproject_labels["description"].asString();
		if(!valueresultproject_labels["openMergeRequestsCount"].isNull())
			resultObject.openMergeRequestsCount = std::stol(valueresultproject_labels["openMergeRequestsCount"].asString());
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["total"].isNull())
		total_ = std::stol(value["total"].asString());

}

std::vector<ListProjectLabelsResult::Project_labels> ListProjectLabelsResult::getresult()const
{
	return result_;
}

std::string ListProjectLabelsResult::getRequestId()const
{
	return requestId_;
}

long ListProjectLabelsResult::getTotal()const
{
	return total_;
}

std::string ListProjectLabelsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListProjectLabelsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListProjectLabelsResult::getSuccess()const
{
	return success_;
}

