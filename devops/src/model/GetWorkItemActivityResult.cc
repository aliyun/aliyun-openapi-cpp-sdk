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

#include <alibabacloud/devops/model/GetWorkItemActivityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetWorkItemActivityResult::GetWorkItemActivityResult() :
	ServiceResult()
{}

GetWorkItemActivityResult::GetWorkItemActivityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetWorkItemActivityResult::~GetWorkItemActivityResult()
{}

void GetWorkItemActivityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allactivitiesNode = value["activities"]["activity"];
	for (auto valueactivitiesactivity : allactivitiesNode)
	{
		Activity activitiesObject;
		if(!valueactivitiesactivity["eventType"].isNull())
			activitiesObject.eventType = valueactivitiesactivity["eventType"].asString();
		if(!valueactivitiesactivity["actionType"].isNull())
			activitiesObject.actionType = valueactivitiesactivity["actionType"].asString();
		if(!valueactivitiesactivity["eventTime"].isNull())
			activitiesObject.eventTime = std::stol(valueactivitiesactivity["eventTime"].asString());
		if(!valueactivitiesactivity["resourceIdentifier"].isNull())
			activitiesObject.resourceIdentifier = valueactivitiesactivity["resourceIdentifier"].asString();
		if(!valueactivitiesactivity["operator"].isNull())
			activitiesObject._operator = valueactivitiesactivity["operator"].asString();
		if(!valueactivitiesactivity["eventId"].isNull())
			activitiesObject.eventId = std::stol(valueactivitiesactivity["eventId"].asString());
		if(!valueactivitiesactivity["parentEventId"].isNull())
			activitiesObject.parentEventId = std::stol(valueactivitiesactivity["parentEventId"].asString());
		auto alloldValueNode = valueactivitiesactivity["oldValue"]["oldValueItem"];
		for (auto valueactivitiesactivityoldValueoldValueItem : alloldValueNode)
		{
			Activity::OldValueItem oldValueObject;
			if(!valueactivitiesactivityoldValueoldValueItem["resourceType"].isNull())
				oldValueObject.resourceType = valueactivitiesactivityoldValueoldValueItem["resourceType"].asString();
			if(!valueactivitiesactivityoldValueoldValueItem["plainValue"].isNull())
				oldValueObject.plainValue = valueactivitiesactivityoldValueoldValueItem["plainValue"].asString();
			if(!valueactivitiesactivityoldValueoldValueItem["displayValue"].isNull())
				oldValueObject.displayValue = valueactivitiesactivityoldValueoldValueItem["displayValue"].asString();
			activitiesObject.oldValue.push_back(oldValueObject);
		}
		auto allnewValueNode = valueactivitiesactivity["newValue"]["newValueItem"];
		for (auto valueactivitiesactivitynewValuenewValueItem : allnewValueNode)
		{
			Activity::NewValueItem newValueObject;
			if(!valueactivitiesactivitynewValuenewValueItem["resourceType"].isNull())
				newValueObject.resourceType = valueactivitiesactivitynewValuenewValueItem["resourceType"].asString();
			if(!valueactivitiesactivitynewValuenewValueItem["plainValue"].isNull())
				newValueObject.plainValue = valueactivitiesactivitynewValuenewValueItem["plainValue"].asString();
			if(!valueactivitiesactivitynewValuenewValueItem["displayValue"].isNull())
				newValueObject.displayValue = valueactivitiesactivitynewValuenewValueItem["displayValue"].asString();
			activitiesObject.newValue.push_back(newValueObject);
		}
		auto propertyNode = value["property"];
		if(!propertyNode["propertyName"].isNull())
			activitiesObject.property.propertyName = propertyNode["propertyName"].asString();
		if(!propertyNode["propertyType"].isNull())
			activitiesObject.property.propertyType = propertyNode["propertyType"].asString();
		if(!propertyNode["propertyIdentifier"].isNull())
			activitiesObject.property.propertyIdentifier = propertyNode["propertyIdentifier"].asString();
		if(!propertyNode["displayName"].isNull())
			activitiesObject.property.displayName = propertyNode["displayName"].asString();
		activities_.push_back(activitiesObject);
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

std::string GetWorkItemActivityResult::getRequestId()const
{
	return requestId_;
}

std::vector<GetWorkItemActivityResult::Activity> GetWorkItemActivityResult::getactivities()const
{
	return activities_;
}

std::string GetWorkItemActivityResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string GetWorkItemActivityResult::getErrorCode()const
{
	return errorCode_;
}

bool GetWorkItemActivityResult::getSuccess()const
{
	return success_;
}

