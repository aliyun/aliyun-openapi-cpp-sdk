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

#include <alibabacloud/cloudapi/model/DescribeUpdateBackendTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeUpdateBackendTaskResult::DescribeUpdateBackendTaskResult() :
	ServiceResult()
{}

DescribeUpdateBackendTaskResult::DescribeUpdateBackendTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUpdateBackendTaskResult::~DescribeUpdateBackendTaskResult()
{}

void DescribeUpdateBackendTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApiUpdateBackendResultsNode = value["ApiUpdateBackendResults"]["ApiUpdateBackendResult"];
	for (auto valueApiUpdateBackendResultsApiUpdateBackendResult : allApiUpdateBackendResultsNode)
	{
		ApiUpdateBackendResult apiUpdateBackendResultsObject;
		if(!valueApiUpdateBackendResultsApiUpdateBackendResult["StageId"].isNull())
			apiUpdateBackendResultsObject.stageId = valueApiUpdateBackendResultsApiUpdateBackendResult["StageId"].asString();
		if(!valueApiUpdateBackendResultsApiUpdateBackendResult["UpdateStatus"].isNull())
			apiUpdateBackendResultsObject.updateStatus = valueApiUpdateBackendResultsApiUpdateBackendResult["UpdateStatus"].asString();
		if(!valueApiUpdateBackendResultsApiUpdateBackendResult["GroupName"].isNull())
			apiUpdateBackendResultsObject.groupName = valueApiUpdateBackendResultsApiUpdateBackendResult["GroupName"].asString();
		if(!valueApiUpdateBackendResultsApiUpdateBackendResult["GroupId"].isNull())
			apiUpdateBackendResultsObject.groupId = valueApiUpdateBackendResultsApiUpdateBackendResult["GroupId"].asString();
		if(!valueApiUpdateBackendResultsApiUpdateBackendResult["ApiUid"].isNull())
			apiUpdateBackendResultsObject.apiUid = valueApiUpdateBackendResultsApiUpdateBackendResult["ApiUid"].asString();
		if(!valueApiUpdateBackendResultsApiUpdateBackendResult["ErrorMsg"].isNull())
			apiUpdateBackendResultsObject.errorMsg = valueApiUpdateBackendResultsApiUpdateBackendResult["ErrorMsg"].asString();
		if(!valueApiUpdateBackendResultsApiUpdateBackendResult["StageName"].isNull())
			apiUpdateBackendResultsObject.stageName = valueApiUpdateBackendResultsApiUpdateBackendResult["StageName"].asString();
		if(!valueApiUpdateBackendResultsApiUpdateBackendResult["ApiName"].isNull())
			apiUpdateBackendResultsObject.apiName = valueApiUpdateBackendResultsApiUpdateBackendResult["ApiName"].asString();
		if(!valueApiUpdateBackendResultsApiUpdateBackendResult["BackendId"].isNull())
			apiUpdateBackendResultsObject.backendId = valueApiUpdateBackendResultsApiUpdateBackendResult["BackendId"].asString();
		apiUpdateBackendResults_.push_back(apiUpdateBackendResultsObject);
	}

}

std::vector<DescribeUpdateBackendTaskResult::ApiUpdateBackendResult> DescribeUpdateBackendTaskResult::getApiUpdateBackendResults()const
{
	return apiUpdateBackendResults_;
}

