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

#include <alibabacloud/devops-rdc/model/GetProjectOptionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops_rdc;
using namespace AlibabaCloud::Devops_rdc::Model;

GetProjectOptionResult::GetProjectOptionResult() :
	ServiceResult()
{}

GetProjectOptionResult::GetProjectOptionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetProjectOptionResult::~GetProjectOptionResult()
{}

void GetProjectOptionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allObjectNode = value["Object"]["Option"];
	for (auto valueObjectOption : allObjectNode)
	{
		Option objectObject;
		if(!valueObjectOption["Value"].isNull())
			objectObject.value = valueObjectOption["Value"].asString();
		if(!valueObjectOption["Name"].isNull())
			objectObject.name = valueObjectOption["Name"].asString();
		if(!valueObjectOption["ScopeName"].isNull())
			objectObject.scopeName = valueObjectOption["ScopeName"].asString();
		if(!valueObjectOption["Kind"].isNull())
			objectObject.kind = valueObjectOption["Kind"].asString();
		object_.push_back(objectObject);
	}
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["Successful"].isNull())
		successful_ = value["Successful"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string GetProjectOptionResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<GetProjectOptionResult::Option> GetProjectOptionResult::getObject()const
{
	return object_;
}

std::string GetProjectOptionResult::getErrorCode()const
{
	return errorCode_;
}

bool GetProjectOptionResult::getSuccessful()const
{
	return successful_;
}

