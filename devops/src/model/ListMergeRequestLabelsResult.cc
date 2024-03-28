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

#include <alibabacloud/devops/model/ListMergeRequestLabelsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListMergeRequestLabelsResult::ListMergeRequestLabelsResult() :
	ServiceResult()
{}

ListMergeRequestLabelsResult::ListMergeRequestLabelsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMergeRequestLabelsResult::~ListMergeRequestLabelsResult()
{}

void ListMergeRequestLabelsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["cr_labels"];
	for (auto valueresultcr_labels : allresultNode)
	{
		Cr_labels resultObject;
		if(!valueresultcr_labels["id"].isNull())
			resultObject.id = valueresultcr_labels["id"].asString();
		if(!valueresultcr_labels["name"].isNull())
			resultObject.name = valueresultcr_labels["name"].asString();
		if(!valueresultcr_labels["description"].isNull())
			resultObject.description = valueresultcr_labels["description"].asString();
		if(!valueresultcr_labels["color"].isNull())
			resultObject.color = valueresultcr_labels["color"].asString();
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

}

std::vector<ListMergeRequestLabelsResult::Cr_labels> ListMergeRequestLabelsResult::getresult()const
{
	return result_;
}

std::string ListMergeRequestLabelsResult::getRequestId()const
{
	return requestId_;
}

std::string ListMergeRequestLabelsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListMergeRequestLabelsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListMergeRequestLabelsResult::getSuccess()const
{
	return success_;
}

