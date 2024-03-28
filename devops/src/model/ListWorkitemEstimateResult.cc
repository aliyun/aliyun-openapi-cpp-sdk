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

#include <alibabacloud/devops/model/ListWorkitemEstimateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListWorkitemEstimateResult::ListWorkitemEstimateResult() :
	ServiceResult()
{}

ListWorkitemEstimateResult::ListWorkitemEstimateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListWorkitemEstimateResult::~ListWorkitemEstimateResult()
{}

void ListWorkitemEstimateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allworkitemTimeEstimateNode = value["workitemTimeEstimate"]["WorkitemTimeEstimateItem"];
	for (auto valueworkitemTimeEstimateWorkitemTimeEstimateItem : allworkitemTimeEstimateNode)
	{
		WorkitemTimeEstimateItem workitemTimeEstimateObject;
		if(!valueworkitemTimeEstimateWorkitemTimeEstimateItem["workitemIdentifier"].isNull())
			workitemTimeEstimateObject.workitemIdentifier = valueworkitemTimeEstimateWorkitemTimeEstimateItem["workitemIdentifier"].asString();
		if(!valueworkitemTimeEstimateWorkitemTimeEstimateItem["identifier"].isNull())
			workitemTimeEstimateObject.identifier = valueworkitemTimeEstimateWorkitemTimeEstimateItem["identifier"].asString();
		if(!valueworkitemTimeEstimateWorkitemTimeEstimateItem["gmtStart"].isNull())
			workitemTimeEstimateObject.gmtStart = std::stol(valueworkitemTimeEstimateWorkitemTimeEstimateItem["gmtStart"].asString());
		if(!valueworkitemTimeEstimateWorkitemTimeEstimateItem["gmtEnd"].isNull())
			workitemTimeEstimateObject.gmtEnd = std::stol(valueworkitemTimeEstimateWorkitemTimeEstimateItem["gmtEnd"].asString());
		if(!valueworkitemTimeEstimateWorkitemTimeEstimateItem["spentTime"].isNull())
			workitemTimeEstimateObject.spentTime = std::stof(valueworkitemTimeEstimateWorkitemTimeEstimateItem["spentTime"].asString());
		if(!valueworkitemTimeEstimateWorkitemTimeEstimateItem["type"].isNull())
			workitemTimeEstimateObject.type = valueworkitemTimeEstimateWorkitemTimeEstimateItem["type"].asString();
		if(!valueworkitemTimeEstimateWorkitemTimeEstimateItem["description"].isNull())
			workitemTimeEstimateObject.description = valueworkitemTimeEstimateWorkitemTimeEstimateItem["description"].asString();
		if(!valueworkitemTimeEstimateWorkitemTimeEstimateItem["gmtCreate"].isNull())
			workitemTimeEstimateObject.gmtCreate = std::stol(valueworkitemTimeEstimateWorkitemTimeEstimateItem["gmtCreate"].asString());
		if(!valueworkitemTimeEstimateWorkitemTimeEstimateItem["gmtModified"].isNull())
			workitemTimeEstimateObject.gmtModified = std::stol(valueworkitemTimeEstimateWorkitemTimeEstimateItem["gmtModified"].asString());
		auto recordUserNode = value["recordUser"];
		if(!recordUserNode["identifier"].isNull())
			workitemTimeEstimateObject.recordUser.identifier = recordUserNode["identifier"].asString();
		if(!recordUserNode["name"].isNull())
			workitemTimeEstimateObject.recordUser.name = recordUserNode["name"].asString();
		workitemTimeEstimate_.push_back(workitemTimeEstimateObject);
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

std::string ListWorkitemEstimateResult::getRequestId()const
{
	return requestId_;
}

std::string ListWorkitemEstimateResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListWorkitemEstimateResult::WorkitemTimeEstimateItem> ListWorkitemEstimateResult::getworkitemTimeEstimate()const
{
	return workitemTimeEstimate_;
}

std::string ListWorkitemEstimateResult::getErrorCode()const
{
	return errorCode_;
}

long ListWorkitemEstimateResult::getCode()const
{
	return code_;
}

bool ListWorkitemEstimateResult::getSuccess()const
{
	return success_;
}

