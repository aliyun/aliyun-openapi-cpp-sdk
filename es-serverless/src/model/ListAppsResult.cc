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

#include <alibabacloud/es-serverless/model/ListAppsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Es_serverless;
using namespace AlibabaCloud::Es_serverless::Model;

ListAppsResult::ListAppsResult() :
	ServiceResult()
{}

ListAppsResult::ListAppsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAppsResult::~ListAppsResult()
{}

void ListAppsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["app"];
	for (auto valueresultapp : allresultNode)
	{
		App resultObject;
		if(!valueresultapp["appName"].isNull())
			resultObject.appName = valueresultapp["appName"].asString();
		if(!valueresultapp["ownerId"].isNull())
			resultObject.ownerId = valueresultapp["ownerId"].asString();
		if(!valueresultapp["storageQuota"].isNull())
			resultObject.storageQuota = valueresultapp["storageQuota"].asString();
		if(!valueresultapp["regionId"].isNull())
			resultObject.regionId = valueresultapp["regionId"].asString();
		if(!valueresultapp["status"].isNull())
			resultObject.status = valueresultapp["status"].asString();
		if(!valueresultapp["createTime"].isNull())
			resultObject.createTime = valueresultapp["createTime"].asString();
		if(!valueresultapp["flowQuota"].isNull())
			resultObject.flowQuota = valueresultapp["flowQuota"].asString();
		if(!valueresultapp["description"].isNull())
			resultObject.description = valueresultapp["description"].asString();
		result_.push_back(resultObject);
	}
	if(!value["totalCount"].isNull())
		totalCount_ = std::stoi(value["totalCount"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<ListAppsResult::App> ListAppsResult::getresult()const
{
	return result_;
}

int ListAppsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListAppsResult::getRequestId()const
{
	return requestId_;
}

