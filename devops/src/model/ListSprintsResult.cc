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

#include <alibabacloud/devops/model/ListSprintsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListSprintsResult::ListSprintsResult() :
	ServiceResult()
{}

ListSprintsResult::ListSprintsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSprintsResult::~ListSprintsResult()
{}

void ListSprintsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allsprintsNode = value["sprints"]["sprint"];
	for (auto valuesprintssprint : allsprintsNode)
	{
		Sprint sprintsObject;
		if(!valuesprintssprint["creator"].isNull())
			sprintsObject.creator = valuesprintssprint["creator"].asString();
		if(!valuesprintssprint["description"].isNull())
			sprintsObject.description = valuesprintssprint["description"].asString();
		if(!valuesprintssprint["gmtCreate"].isNull())
			sprintsObject.gmtCreate = std::stol(valuesprintssprint["gmtCreate"].asString());
		if(!valuesprintssprint["gmtModified"].isNull())
			sprintsObject.gmtModified = std::stol(valuesprintssprint["gmtModified"].asString());
		if(!valuesprintssprint["endDate"].isNull())
			sprintsObject.endDate = std::stol(valuesprintssprint["endDate"].asString());
		if(!valuesprintssprint["startDate"].isNull())
			sprintsObject.startDate = std::stol(valuesprintssprint["startDate"].asString());
		if(!valuesprintssprint["identifier"].isNull())
			sprintsObject.identifier = valuesprintssprint["identifier"].asString();
		if(!valuesprintssprint["modifier"].isNull())
			sprintsObject.modifier = valuesprintssprint["modifier"].asString();
		if(!valuesprintssprint["name"].isNull())
			sprintsObject.name = valuesprintssprint["name"].asString();
		if(!valuesprintssprint["spaceIdentifier"].isNull())
			sprintsObject.spaceIdentifier = valuesprintssprint["spaceIdentifier"].asString();
		if(!valuesprintssprint["scope"].isNull())
			sprintsObject.scope = valuesprintssprint["scope"].asString();
		if(!valuesprintssprint["status"].isNull())
			sprintsObject.status = valuesprintssprint["status"].asString();
		sprints_.push_back(sprintsObject);
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

long ListSprintsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListSprintsResult::getNextToken()const
{
	return nextToken_;
}

std::string ListSprintsResult::getRequestId()const
{
	return requestId_;
}

long ListSprintsResult::getMaxResults()const
{
	return maxResults_;
}

std::string ListSprintsResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListSprintsResult::Sprint> ListSprintsResult::getsprints()const
{
	return sprints_;
}

std::string ListSprintsResult::getErrorCode()const
{
	return errorCode_;
}

bool ListSprintsResult::getSuccess()const
{
	return success_;
}

