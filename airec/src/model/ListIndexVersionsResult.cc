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

#include <alibabacloud/airec/model/ListIndexVersionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

ListIndexVersionsResult::ListIndexVersionsResult() :
	ServiceResult()
{}

ListIndexVersionsResult::ListIndexVersionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListIndexVersionsResult::~ListIndexVersionsResult()
{}

void ListIndexVersionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["indeVersion"];
	for (auto valueresultindeVersion : allresultNode)
	{
		IndeVersion resultObject;
		if(!valueresultindeVersion["versionId"].isNull())
			resultObject.versionId = valueresultindeVersion["versionId"].asString();
		if(!valueresultindeVersion["status"].isNull())
			resultObject.status = valueresultindeVersion["status"].asString();
		if(!valueresultindeVersion["builtTime"].isNull())
			resultObject.builtTime = valueresultindeVersion["builtTime"].asString();
		if(!valueresultindeVersion["switchedTime"].isNull())
			resultObject.switchedTime = valueresultindeVersion["switchedTime"].asString();
		if(!valueresultindeVersion["rollbackEnabled"].isNull())
			resultObject.rollbackEnabled = valueresultindeVersion["rollbackEnabled"].asString() == "true";
		if(!valueresultindeVersion["costSeconds"].isNull())
			resultObject.costSeconds = std::stoi(valueresultindeVersion["costSeconds"].asString());
		if(!valueresultindeVersion["size"].isNull())
			resultObject.size = std::stol(valueresultindeVersion["size"].asString());
		if(!valueresultindeVersion["progress"].isNull())
			resultObject.progress = std::stoi(valueresultindeVersion["progress"].asString());
		if(!valueresultindeVersion["flowType"].isNull())
			resultObject.flowType = valueresultindeVersion["flowType"].asString();
		if(!valueresultindeVersion["code"].isNull())
			resultObject.code = valueresultindeVersion["code"].asString();
		if(!valueresultindeVersion["message"].isNull())
			resultObject.message = valueresultindeVersion["message"].asString();
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<ListIndexVersionsResult::IndeVersion> ListIndexVersionsResult::getresult()const
{
	return result_;
}

std::string ListIndexVersionsResult::getRequestId()const
{
	return requestId_;
}

