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

#include <alibabacloud/devops/model/ListWorkitemTimeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListWorkitemTimeResult::ListWorkitemTimeResult() :
	ServiceResult()
{}

ListWorkitemTimeResult::ListWorkitemTimeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListWorkitemTimeResult::~ListWorkitemTimeResult()
{}

void ListWorkitemTimeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allworkitemTimeNode = value["workitemTime"]["workitemTimeItem"];
	for (auto valueworkitemTimeworkitemTimeItem : allworkitemTimeNode)
	{
		WorkitemTimeItem workitemTimeObject;
		if(!valueworkitemTimeworkitemTimeItem["workitemIdentifier"].isNull())
			workitemTimeObject.workitemIdentifier = valueworkitemTimeworkitemTimeItem["workitemIdentifier"].asString();
		if(!valueworkitemTimeworkitemTimeItem["identifier"].isNull())
			workitemTimeObject.identifier = valueworkitemTimeworkitemTimeItem["identifier"].asString();
		if(!valueworkitemTimeworkitemTimeItem["gmtStart"].isNull())
			workitemTimeObject.gmtStart = std::stol(valueworkitemTimeworkitemTimeItem["gmtStart"].asString());
		if(!valueworkitemTimeworkitemTimeItem["gmtEnd"].isNull())
			workitemTimeObject.gmtEnd = std::stol(valueworkitemTimeworkitemTimeItem["gmtEnd"].asString());
		if(!valueworkitemTimeworkitemTimeItem["actualTime"].isNull())
			workitemTimeObject.actualTime = std::stof(valueworkitemTimeworkitemTimeItem["actualTime"].asString());
		if(!valueworkitemTimeworkitemTimeItem["type"].isNull())
			workitemTimeObject.type = valueworkitemTimeworkitemTimeItem["type"].asString();
		if(!valueworkitemTimeworkitemTimeItem["description"].isNull())
			workitemTimeObject.description = valueworkitemTimeworkitemTimeItem["description"].asString();
		if(!valueworkitemTimeworkitemTimeItem["recordUser"].isNull())
			workitemTimeObject.recordUser = valueworkitemTimeworkitemTimeItem["recordUser"].asString();
		if(!valueworkitemTimeworkitemTimeItem["gmtCreate"].isNull())
			workitemTimeObject.gmtCreate = std::stol(valueworkitemTimeworkitemTimeItem["gmtCreate"].asString());
		if(!valueworkitemTimeworkitemTimeItem["gmtModified"].isNull())
			workitemTimeObject.gmtModified = std::stol(valueworkitemTimeworkitemTimeItem["gmtModified"].asString());
		workitemTime_.push_back(workitemTimeObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMsg"].isNull())
		errorMsg_ = value["errorMsg"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["code"].isNull())
		code_ = std::stol(value["code"].asString());

}

std::string ListWorkitemTimeResult::getRequestId()const
{
	return requestId_;
}

std::string ListWorkitemTimeResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListWorkitemTimeResult::WorkitemTimeItem> ListWorkitemTimeResult::getworkitemTime()const
{
	return workitemTime_;
}

std::string ListWorkitemTimeResult::getErrorCode()const
{
	return errorCode_;
}

long ListWorkitemTimeResult::getCode()const
{
	return code_;
}

bool ListWorkitemTimeResult::getSuccess()const
{
	return success_;
}

