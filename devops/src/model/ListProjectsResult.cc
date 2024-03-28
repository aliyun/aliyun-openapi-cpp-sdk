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

#include <alibabacloud/devops/model/ListProjectsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListProjectsResult::ListProjectsResult() :
	ServiceResult()
{}

ListProjectsResult::ListProjectsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProjectsResult::~ListProjectsResult()
{}

void ListProjectsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allprojectsNode = value["projects"]["project"];
	for (auto valueprojectsproject : allprojectsNode)
	{
		Project projectsObject;
		if(!valueprojectsproject["creator"].isNull())
			projectsObject.creator = valueprojectsproject["creator"].asString();
		if(!valueprojectsproject["customCode"].isNull())
			projectsObject.customCode = valueprojectsproject["customCode"].asString();
		if(!valueprojectsproject["deleteTime"].isNull())
			projectsObject.deleteTime = std::stol(valueprojectsproject["deleteTime"].asString());
		if(!valueprojectsproject["description"].isNull())
			projectsObject.description = valueprojectsproject["description"].asString();
		if(!valueprojectsproject["gmtCreate"].isNull())
			projectsObject.gmtCreate = std::stol(valueprojectsproject["gmtCreate"].asString());
		if(!valueprojectsproject["icon"].isNull())
			projectsObject.icon = valueprojectsproject["icon"].asString();
		if(!valueprojectsproject["identifier"].isNull())
			projectsObject.identifier = valueprojectsproject["identifier"].asString();
		if(!valueprojectsproject["name"].isNull())
			projectsObject.name = valueprojectsproject["name"].asString();
		if(!valueprojectsproject["scope"].isNull())
			projectsObject.scope = valueprojectsproject["scope"].asString();
		if(!valueprojectsproject["typeIdentifier"].isNull())
			projectsObject.typeIdentifier = valueprojectsproject["typeIdentifier"].asString();
		if(!valueprojectsproject["statusStageIdentifier"].isNull())
			projectsObject.statusStageIdentifier = valueprojectsproject["statusStageIdentifier"].asString();
		if(!valueprojectsproject["logicalStatus"].isNull())
			projectsObject.logicalStatus = valueprojectsproject["logicalStatus"].asString();
		if(!valueprojectsproject["categoryIdentifier"].isNull())
			projectsObject.categoryIdentifier = valueprojectsproject["categoryIdentifier"].asString();
		projects_.push_back(projectsObject);
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

long ListProjectsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListProjectsResult::Project> ListProjectsResult::getprojects()const
{
	return projects_;
}

std::string ListProjectsResult::getNextToken()const
{
	return nextToken_;
}

std::string ListProjectsResult::getRequestId()const
{
	return requestId_;
}

long ListProjectsResult::getMaxResults()const
{
	return maxResults_;
}

std::string ListProjectsResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string ListProjectsResult::getErrorCode()const
{
	return errorCode_;
}

bool ListProjectsResult::getSuccess()const
{
	return success_;
}

