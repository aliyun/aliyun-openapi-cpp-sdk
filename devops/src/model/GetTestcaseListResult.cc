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

#include <alibabacloud/devops/model/GetTestcaseListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetTestcaseListResult::GetTestcaseListResult() :
	ServiceResult()
{}

GetTestcaseListResult::GetTestcaseListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTestcaseListResult::~GetTestcaseListResult()
{}

void GetTestcaseListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto alltestcaseNode = value["testcase"]["workitem"];
	for (auto valuetestcaseworkitem : alltestcaseNode)
	{
		Workitem testcaseObject;
		if(!valuetestcaseworkitem["identifier"].isNull())
			testcaseObject.identifier = valuetestcaseworkitem["identifier"].asString();
		if(!valuetestcaseworkitem["subject"].isNull())
			testcaseObject.subject = valuetestcaseworkitem["subject"].asString();
		if(!valuetestcaseworkitem["categoryIdentifier"].isNull())
			testcaseObject.categoryIdentifier = valuetestcaseworkitem["categoryIdentifier"].asString();
		if(!valuetestcaseworkitem["gmtCreate"].isNull())
			testcaseObject.gmtCreate = std::stol(valuetestcaseworkitem["gmtCreate"].asString());
		auto allcustomFieldsNode = valuetestcaseworkitem["customFields"]["customFieldsItem"];
		for (auto valuetestcaseworkitemcustomFieldscustomFieldsItem : allcustomFieldsNode)
		{
			Workitem::CustomFieldsItem customFieldsObject;
			if(!valuetestcaseworkitemcustomFieldscustomFieldsItem["fieldIdentifier"].isNull())
				customFieldsObject.fieldIdentifier = valuetestcaseworkitemcustomFieldscustomFieldsItem["fieldIdentifier"].asString();
			if(!valuetestcaseworkitemcustomFieldscustomFieldsItem["value"].isNull())
				customFieldsObject.value = valuetestcaseworkitemcustomFieldscustomFieldsItem["value"].asString();
			if(!valuetestcaseworkitemcustomFieldscustomFieldsItem["fieldFormat"].isNull())
				customFieldsObject.fieldFormat = valuetestcaseworkitemcustomFieldscustomFieldsItem["fieldFormat"].asString();
			if(!valuetestcaseworkitemcustomFieldscustomFieldsItem["fieldClassName"].isNull())
				customFieldsObject.fieldClassName = valuetestcaseworkitemcustomFieldscustomFieldsItem["fieldClassName"].asString();
			testcaseObject.customFields.push_back(customFieldsObject);
		}
		auto alltagsNode = valuetestcaseworkitem["tags"]["tag"];
		for (auto valuetestcaseworkitemtagstag : alltagsNode)
		{
			Workitem::Tag tagsObject;
			if(!valuetestcaseworkitemtagstag["tagIdentifier"].isNull())
				tagsObject.tagIdentifier = valuetestcaseworkitemtagstag["tagIdentifier"].asString();
			if(!valuetestcaseworkitemtagstag["name"].isNull())
				tagsObject.name = valuetestcaseworkitemtagstag["name"].asString();
			testcaseObject.tags.push_back(tagsObject);
		}
		auto assignedToNode = value["assignedTo"];
		if(!assignedToNode["assignedToIdenttifier"].isNull())
			testcaseObject.assignedTo.assignedToIdenttifier = assignedToNode["assignedToIdenttifier"].asString();
		if(!assignedToNode["name"].isNull())
			testcaseObject.assignedTo.name = assignedToNode["name"].asString();
		auto spaceNode = value["space"];
		if(!spaceNode["spaceIdentifier"].isNull())
			testcaseObject.space.spaceIdentifier = spaceNode["spaceIdentifier"].asString();
		if(!spaceNode["type"].isNull())
			testcaseObject.space.type = spaceNode["type"].asString();
		testcase_.push_back(testcaseObject);
	}
	if(!value["totalCount"].isNull())
		totalCount_ = std::stol(value["totalCount"].asString());
	if(!value["nextToken"].isNull())
		nextToken_ = value["nextToken"].asString();
	if(!value["maxResults"].isNull())
		maxResults_ = std::stol(value["maxResults"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMsg"].isNull())
		errorMsg_ = value["errorMsg"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

long GetTestcaseListResult::getTotalCount()const
{
	return totalCount_;
}

std::string GetTestcaseListResult::getNextToken()const
{
	return nextToken_;
}

std::string GetTestcaseListResult::getRequestId()const
{
	return requestId_;
}

long GetTestcaseListResult::getMaxResults()const
{
	return maxResults_;
}

std::string GetTestcaseListResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string GetTestcaseListResult::getErrorCode()const
{
	return errorCode_;
}

std::vector<GetTestcaseListResult::Workitem> GetTestcaseListResult::gettestcase()const
{
	return testcase_;
}

bool GetTestcaseListResult::getSuccess()const
{
	return success_;
}

