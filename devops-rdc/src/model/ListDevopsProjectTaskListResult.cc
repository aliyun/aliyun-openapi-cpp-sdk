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

#include <alibabacloud/devops-rdc/model/ListDevopsProjectTaskListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops_rdc;
using namespace AlibabaCloud::Devops_rdc::Model;

ListDevopsProjectTaskListResult::ListDevopsProjectTaskListResult() :
	ServiceResult()
{}

ListDevopsProjectTaskListResult::ListDevopsProjectTaskListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDevopsProjectTaskListResult::~ListDevopsProjectTaskListResult()
{}

void ListDevopsProjectTaskListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto objectNode = value["Object"];
	auto allResultNode = objectNode["Result"]["ResultItem"];
	for (auto objectNodeResultResultItem : allResultNode)
	{
		Object::ResultItem resultItemObject;
		if(!objectNodeResultResultItem["Id"].isNull())
			resultItemObject.id = objectNodeResultResultItem["Id"].asString();
		object_.result.push_back(resultItemObject);
	}
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["Successful"].isNull())
		successful_ = value["Successful"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string ListDevopsProjectTaskListResult::getErrorMsg()const
{
	return errorMsg_;
}

ListDevopsProjectTaskListResult::Object ListDevopsProjectTaskListResult::getObject()const
{
	return object_;
}

std::string ListDevopsProjectTaskListResult::getErrorCode()const
{
	return errorCode_;
}

bool ListDevopsProjectTaskListResult::getSuccessful()const
{
	return successful_;
}

