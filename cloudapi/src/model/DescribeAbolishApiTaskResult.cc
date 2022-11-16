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

#include <alibabacloud/cloudapi/model/DescribeAbolishApiTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeAbolishApiTaskResult::DescribeAbolishApiTaskResult() :
	ServiceResult()
{}

DescribeAbolishApiTaskResult::DescribeAbolishApiTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAbolishApiTaskResult::~DescribeAbolishApiTaskResult()
{}

void DescribeAbolishApiTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApiAbolishResultsNode = value["ApiAbolishResults"]["ApiAbolishResult"];
	for (auto valueApiAbolishResultsApiAbolishResult : allApiAbolishResultsNode)
	{
		ApiAbolishResult apiAbolishResultsObject;
		if(!valueApiAbolishResultsApiAbolishResult["StageId"].isNull())
			apiAbolishResultsObject.stageId = valueApiAbolishResultsApiAbolishResult["StageId"].asString();
		if(!valueApiAbolishResultsApiAbolishResult["AbolishStatus"].isNull())
			apiAbolishResultsObject.abolishStatus = valueApiAbolishResultsApiAbolishResult["AbolishStatus"].asString();
		if(!valueApiAbolishResultsApiAbolishResult["GroupId"].isNull())
			apiAbolishResultsObject.groupId = valueApiAbolishResultsApiAbolishResult["GroupId"].asString();
		if(!valueApiAbolishResultsApiAbolishResult["GroupName"].isNull())
			apiAbolishResultsObject.groupName = valueApiAbolishResultsApiAbolishResult["GroupName"].asString();
		if(!valueApiAbolishResultsApiAbolishResult["ApiUid"].isNull())
			apiAbolishResultsObject.apiUid = valueApiAbolishResultsApiAbolishResult["ApiUid"].asString();
		if(!valueApiAbolishResultsApiAbolishResult["ErrorMsg"].isNull())
			apiAbolishResultsObject.errorMsg = valueApiAbolishResultsApiAbolishResult["ErrorMsg"].asString();
		if(!valueApiAbolishResultsApiAbolishResult["StageName"].isNull())
			apiAbolishResultsObject.stageName = valueApiAbolishResultsApiAbolishResult["StageName"].asString();
		if(!valueApiAbolishResultsApiAbolishResult["ApiName"].isNull())
			apiAbolishResultsObject.apiName = valueApiAbolishResultsApiAbolishResult["ApiName"].asString();
		apiAbolishResults_.push_back(apiAbolishResultsObject);
	}

}

std::vector<DescribeAbolishApiTaskResult::ApiAbolishResult> DescribeAbolishApiTaskResult::getApiAbolishResults()const
{
	return apiAbolishResults_;
}

