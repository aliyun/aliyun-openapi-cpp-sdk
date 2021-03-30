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

#include <alibabacloud/airec/model/DescribeLatestTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

DescribeLatestTaskResult::DescribeLatestTaskResult() :
	ServiceResult()
{}

DescribeLatestTaskResult::DescribeLatestTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLatestTaskResult::~DescribeLatestTaskResult()
{}

void DescribeLatestTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["indexVersion"];
	for (auto valueresultindexVersion : allresultNode)
	{
		IndexVersion resultObject;
		if(!valueresultindexVersion["versionId"].isNull())
			resultObject.versionId = valueresultindexVersion["versionId"].asString();
		if(!valueresultindexVersion["status"].isNull())
			resultObject.status = valueresultindexVersion["status"].asString();
		if(!valueresultindexVersion["builtTime"].isNull())
			resultObject.builtTime = valueresultindexVersion["builtTime"].asString();
		if(!valueresultindexVersion["switchedTime"].isNull())
			resultObject.switchedTime = valueresultindexVersion["switchedTime"].asString();
		if(!valueresultindexVersion["rollbackEnabled"].isNull())
			resultObject.rollbackEnabled = valueresultindexVersion["rollbackEnabled"].asString() == "true";
		if(!valueresultindexVersion["costSeconds"].isNull())
			resultObject.costSeconds = std::stoi(valueresultindexVersion["costSeconds"].asString());
		if(!valueresultindexVersion["size"].isNull())
			resultObject.size = std::stol(valueresultindexVersion["size"].asString());
		if(!valueresultindexVersion["progress"].isNull())
			resultObject.progress = std::stoi(valueresultindexVersion["progress"].asString());
		if(!valueresultindexVersion["flowType"].isNull())
			resultObject.flowType = valueresultindexVersion["flowType"].asString();
		if(!valueresultindexVersion["code"].isNull())
			resultObject.code = valueresultindexVersion["code"].asString();
		if(!valueresultindexVersion["message"].isNull())
			resultObject.message = valueresultindexVersion["message"].asString();
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<DescribeLatestTaskResult::IndexVersion> DescribeLatestTaskResult::getresult()const
{
	return result_;
}

std::string DescribeLatestTaskResult::getRequestId()const
{
	return requestId_;
}

