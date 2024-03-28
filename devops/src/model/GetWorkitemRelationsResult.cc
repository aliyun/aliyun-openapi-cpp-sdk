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

#include <alibabacloud/devops/model/GetWorkitemRelationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetWorkitemRelationsResult::GetWorkitemRelationsResult() :
	ServiceResult()
{}

GetWorkitemRelationsResult::GetWorkitemRelationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetWorkitemRelationsResult::~GetWorkitemRelationsResult()
{}

void GetWorkitemRelationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allrelationListNode = value["relationList"]["relationListItem"];
	for (auto valuerelationListrelationListItem : allrelationListNode)
	{
		RelationListItem relationListObject;
		if(!valuerelationListrelationListItem["identifier"].isNull())
			relationListObject.identifier = valuerelationListrelationListItem["identifier"].asString();
		if(!valuerelationListrelationListItem["subject"].isNull())
			relationListObject.subject = valuerelationListrelationListItem["subject"].asString();
		if(!valuerelationListrelationListItem["assignedTo"].isNull())
			relationListObject.assignedTo = valuerelationListrelationListItem["assignedTo"].asString();
		if(!valuerelationListrelationListItem["spaceIdentifier"].isNull())
			relationListObject.spaceIdentifier = valuerelationListrelationListItem["spaceIdentifier"].asString();
		if(!valuerelationListrelationListItem["categoryIdentifier"].isNull())
			relationListObject.categoryIdentifier = valuerelationListrelationListItem["categoryIdentifier"].asString();
		if(!valuerelationListrelationListItem["workitemTypeIdentifier"].isNull())
			relationListObject.workitemTypeIdentifier = valuerelationListrelationListItem["workitemTypeIdentifier"].asString();
		if(!valuerelationListrelationListItem["gmtCreate"].isNull())
			relationListObject.gmtCreate = valuerelationListrelationListItem["gmtCreate"].asString();
		if(!valuerelationListrelationListItem["gmtModified"].isNull())
			relationListObject.gmtModified = valuerelationListrelationListItem["gmtModified"].asString();
		relationList_.push_back(relationListObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMsg"].isNull())
		errorMsg_ = value["errorMsg"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string GetWorkitemRelationsResult::getRequestId()const
{
	return requestId_;
}

std::vector<GetWorkitemRelationsResult::RelationListItem> GetWorkitemRelationsResult::getrelationList()const
{
	return relationList_;
}

std::string GetWorkitemRelationsResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string GetWorkitemRelationsResult::getErrorCode()const
{
	return errorCode_;
}

bool GetWorkitemRelationsResult::getSuccess()const
{
	return success_;
}

