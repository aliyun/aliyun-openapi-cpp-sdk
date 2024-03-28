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

#include <alibabacloud/devops/model/ListProjectWorkitemTypesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListProjectWorkitemTypesResult::ListProjectWorkitemTypesResult() :
	ServiceResult()
{}

ListProjectWorkitemTypesResult::ListProjectWorkitemTypesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProjectWorkitemTypesResult::~ListProjectWorkitemTypesResult()
{}

void ListProjectWorkitemTypesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allworkitemTypesNode = value["workitemTypes"]["workitemType"];
	for (auto valueworkitemTypesworkitemType : allworkitemTypesNode)
	{
		WorkitemType workitemTypesObject;
		if(!valueworkitemTypesworkitemType["identifier"].isNull())
			workitemTypesObject.identifier = valueworkitemTypesworkitemType["identifier"].asString();
		if(!valueworkitemTypesworkitemType["name"].isNull())
			workitemTypesObject.name = valueworkitemTypesworkitemType["name"].asString();
		if(!valueworkitemTypesworkitemType["nameEn"].isNull())
			workitemTypesObject.nameEn = valueworkitemTypesworkitemType["nameEn"].asString();
		if(!valueworkitemTypesworkitemType["categoryIdentifier"].isNull())
			workitemTypesObject.categoryIdentifier = valueworkitemTypesworkitemType["categoryIdentifier"].asString();
		if(!valueworkitemTypesworkitemType["systemDefault"].isNull())
			workitemTypesObject.systemDefault = valueworkitemTypesworkitemType["systemDefault"].asString() == "true";
		if(!valueworkitemTypesworkitemType["gmtCreate"].isNull())
			workitemTypesObject.gmtCreate = std::stol(valueworkitemTypesworkitemType["gmtCreate"].asString());
		if(!valueworkitemTypesworkitemType["creator"].isNull())
			workitemTypesObject.creator = valueworkitemTypesworkitemType["creator"].asString();
		if(!valueworkitemTypesworkitemType["description"].isNull())
			workitemTypesObject.description = valueworkitemTypesworkitemType["description"].asString();
		if(!valueworkitemTypesworkitemType["enable"].isNull())
			workitemTypesObject.enable = valueworkitemTypesworkitemType["enable"].asString() == "true";
		if(!valueworkitemTypesworkitemType["defaultType"].isNull())
			workitemTypesObject.defaultType = valueworkitemTypesworkitemType["defaultType"].asString() == "true";
		if(!valueworkitemTypesworkitemType["gmtAdd"].isNull())
			workitemTypesObject.gmtAdd = std::stol(valueworkitemTypesworkitemType["gmtAdd"].asString());
		if(!valueworkitemTypesworkitemType["addUser"].isNull())
			workitemTypesObject.addUser = valueworkitemTypesworkitemType["addUser"].asString();
		workitemTypes_.push_back(workitemTypesObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string ListProjectWorkitemTypesResult::getRequestId()const
{
	return requestId_;
}

std::vector<ListProjectWorkitemTypesResult::WorkitemType> ListProjectWorkitemTypesResult::getworkitemTypes()const
{
	return workitemTypes_;
}

std::string ListProjectWorkitemTypesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListProjectWorkitemTypesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListProjectWorkitemTypesResult::getSuccess()const
{
	return success_;
}

