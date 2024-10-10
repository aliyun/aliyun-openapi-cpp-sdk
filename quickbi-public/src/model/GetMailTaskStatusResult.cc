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

#include <alibabacloud/quickbi-public/model/GetMailTaskStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

GetMailTaskStatusResult::GetMailTaskStatusResult() :
	ServiceResult()
{}

GetMailTaskStatusResult::GetMailTaskStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMailTaskStatusResult::~GetMailTaskStatusResult()
{}

void GetMailTaskStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["DATA"];
	for (auto valueResultDATA : allResultNode)
	{
		DATA resultObject;
		if(!valueResultDATA["execTime"].isNull())
			resultObject.execTime = valueResultDATA["execTime"].asString();
		if(!valueResultDATA["mailId"].isNull())
			resultObject.mailId = valueResultDATA["mailId"].asString();
		if(!valueResultDATA["status"].isNull())
			resultObject.status = valueResultDATA["status"].asString();
		if(!valueResultDATA["taskId"].isNull())
			resultObject.taskId = std::stol(valueResultDATA["taskId"].asString());
		result_.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool GetMailTaskStatusResult::getSuccess()const
{
	return success_;
}

std::vector<GetMailTaskStatusResult::DATA> GetMailTaskStatusResult::getResult()const
{
	return result_;
}

