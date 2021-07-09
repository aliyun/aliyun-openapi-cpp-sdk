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

#include <alibabacloud/devops-rdc/model/GetTaskDetailActivityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops_rdc;
using namespace AlibabaCloud::Devops_rdc::Model;

GetTaskDetailActivityResult::GetTaskDetailActivityResult() :
	ServiceResult()
{}

GetTaskDetailActivityResult::GetTaskDetailActivityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTaskDetailActivityResult::~GetTaskDetailActivityResult()
{}

void GetTaskDetailActivityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allObjectNode = value["Object"]["Activity"];
	for (auto valueObjectActivity : allObjectNode)
	{
		Activity objectObject;
		if(!valueObjectActivity["Updated"].isNull())
			objectObject.updated = valueObjectActivity["Updated"].asString();
		if(!valueObjectActivity["Action"].isNull())
			objectObject.action = valueObjectActivity["Action"].asString();
		if(!valueObjectActivity["Title"].isNull())
			objectObject.title = valueObjectActivity["Title"].asString();
		if(!valueObjectActivity["Created"].isNull())
			objectObject.created = valueObjectActivity["Created"].asString();
		if(!valueObjectActivity["Content"].isNull())
			objectObject.content = valueObjectActivity["Content"].asString();
		object_.push_back(objectObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["Successful"].isNull())
		successful_ = value["Successful"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

int GetTaskDetailActivityResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetTaskDetailActivityResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<GetTaskDetailActivityResult::Activity> GetTaskDetailActivityResult::getObject()const
{
	return object_;
}

std::string GetTaskDetailActivityResult::getErrorCode()const
{
	return errorCode_;
}

bool GetTaskDetailActivityResult::getSuccessful()const
{
	return successful_;
}

