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

#include <alibabacloud/devops/model/GetWorkitemTimeTypeListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetWorkitemTimeTypeListResult::GetWorkitemTimeTypeListResult() :
	ServiceResult()
{}

GetWorkitemTimeTypeListResult::GetWorkitemTimeTypeListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetWorkitemTimeTypeListResult::~GetWorkitemTimeTypeListResult()
{}

void GetWorkitemTimeTypeListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto alltimeTypeNode = value["timeType"]["result"];
	for (auto valuetimeTyperesult : alltimeTypeNode)
	{
		Result timeTypeObject;
		if(!valuetimeTyperesult["identifier"].isNull())
			timeTypeObject.identifier = valuetimeTyperesult["identifier"].asString();
		if(!valuetimeTyperesult["name"].isNull())
			timeTypeObject.name = valuetimeTyperesult["name"].asString();
		if(!valuetimeTyperesult["displayName"].isNull())
			timeTypeObject.displayName = valuetimeTyperesult["displayName"].asString();
		if(!valuetimeTyperesult["description"].isNull())
			timeTypeObject.description = valuetimeTyperesult["description"].asString();
		if(!valuetimeTyperesult["position"].isNull())
			timeTypeObject.position = std::stol(valuetimeTyperesult["position"].asString());
		timeType_.push_back(timeTypeObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMsg"].isNull())
		errorMsg_ = value["errorMsg"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString();

}

std::string GetWorkitemTimeTypeListResult::getRequestId()const
{
	return requestId_;
}

std::string GetWorkitemTimeTypeListResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<GetWorkitemTimeTypeListResult::Result> GetWorkitemTimeTypeListResult::gettimeType()const
{
	return timeType_;
}

std::string GetWorkitemTimeTypeListResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetWorkitemTimeTypeListResult::getSuccess()const
{
	return success_;
}

