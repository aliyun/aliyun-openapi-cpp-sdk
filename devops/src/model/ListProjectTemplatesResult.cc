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

#include <alibabacloud/devops/model/ListProjectTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListProjectTemplatesResult::ListProjectTemplatesResult() :
	ServiceResult()
{}

ListProjectTemplatesResult::ListProjectTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProjectTemplatesResult::~ListProjectTemplatesResult()
{}

void ListProjectTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto alltemplatesNode = value["templates"]["template"];
	for (auto valuetemplatestemplate : alltemplatesNode)
	{
		_Template templatesObject;
		if(!valuetemplatestemplate["creator"].isNull())
			templatesObject.creator = valuetemplatestemplate["creator"].asString();
		if(!valuetemplatestemplate["description"].isNull())
			templatesObject.description = valuetemplatestemplate["description"].asString();
		if(!valuetemplatestemplate["gmtCreate"].isNull())
			templatesObject.gmtCreate = std::stol(valuetemplatestemplate["gmtCreate"].asString());
		if(!valuetemplatestemplate["gmtModified"].isNull())
			templatesObject.gmtModified = std::stol(valuetemplatestemplate["gmtModified"].asString());
		if(!valuetemplatestemplate["type"].isNull())
			templatesObject.type = std::stol(valuetemplatestemplate["type"].asString());
		if(!valuetemplatestemplate["icon"].isNull())
			templatesObject.icon = valuetemplatestemplate["icon"].asString();
		if(!valuetemplatestemplate["identifier"].isNull())
			templatesObject.identifier = valuetemplatestemplate["identifier"].asString();
		if(!valuetemplatestemplate["modifier"].isNull())
			templatesObject.modifier = valuetemplatestemplate["modifier"].asString();
		if(!valuetemplatestemplate["name"].isNull())
			templatesObject.name = valuetemplatestemplate["name"].asString();
		if(!valuetemplatestemplate["nameEn"].isNull())
			templatesObject.nameEn = valuetemplatestemplate["nameEn"].asString();
		if(!valuetemplatestemplate["resourceCategory"].isNull())
			templatesObject.resourceCategory = valuetemplatestemplate["resourceCategory"].asString();
		if(!valuetemplatestemplate["copyFrom"].isNull())
			templatesObject.copyFrom = valuetemplatestemplate["copyFrom"].asString();
		if(!valuetemplatestemplate["resourceType"].isNull())
			templatesObject.resourceType = valuetemplatestemplate["resourceType"].asString();
		if(!valuetemplatestemplate["spaceIdentifier"].isNull())
			templatesObject.spaceIdentifier = valuetemplatestemplate["spaceIdentifier"].asString();
		if(!valuetemplatestemplate["spaceType"].isNull())
			templatesObject.spaceType = valuetemplatestemplate["spaceType"].asString();
		templates_.push_back(templatesObject);
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

std::string ListProjectTemplatesResult::getRequestId()const
{
	return requestId_;
}

std::vector<ListProjectTemplatesResult::_Template> ListProjectTemplatesResult::gettemplates()const
{
	return templates_;
}

std::string ListProjectTemplatesResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string ListProjectTemplatesResult::getErrorCode()const
{
	return errorCode_;
}

bool ListProjectTemplatesResult::getSuccess()const
{
	return success_;
}

