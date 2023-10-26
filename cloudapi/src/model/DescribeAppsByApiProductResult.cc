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

#include <alibabacloud/cloudapi/model/DescribeAppsByApiProductResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeAppsByApiProductResult::DescribeAppsByApiProductResult() :
	ServiceResult()
{}

DescribeAppsByApiProductResult::DescribeAppsByApiProductResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAppsByApiProductResult::~DescribeAppsByApiProductResult()
{}

void DescribeAppsByApiProductResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAuthorizedAppsNode = value["AuthorizedApps"]["AuthorizedApp"];
	for (auto valueAuthorizedAppsAuthorizedApp : allAuthorizedAppsNode)
	{
		AuthorizedApp authorizedAppsObject;
		if(!valueAuthorizedAppsAuthorizedApp["AppName"].isNull())
			authorizedAppsObject.appName = valueAuthorizedAppsAuthorizedApp["AppName"].asString();
		if(!valueAuthorizedAppsAuthorizedApp["Description"].isNull())
			authorizedAppsObject.description = valueAuthorizedAppsAuthorizedApp["Description"].asString();
		if(!valueAuthorizedAppsAuthorizedApp["AuthValidTime"].isNull())
			authorizedAppsObject.authValidTime = valueAuthorizedAppsAuthorizedApp["AuthValidTime"].asString();
		if(!valueAuthorizedAppsAuthorizedApp["AppId"].isNull())
			authorizedAppsObject.appId = std::stol(valueAuthorizedAppsAuthorizedApp["AppId"].asString());
		if(!valueAuthorizedAppsAuthorizedApp["Extend"].isNull())
			authorizedAppsObject.extend = valueAuthorizedAppsAuthorizedApp["Extend"].asString();
		if(!valueAuthorizedAppsAuthorizedApp["AuthorizedTime"].isNull())
			authorizedAppsObject.authorizedTime = valueAuthorizedAppsAuthorizedApp["AuthorizedTime"].asString();
		authorizedApps_.push_back(authorizedAppsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeAppsByApiProductResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAppsByApiProductResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribeAppsByApiProductResult::AuthorizedApp> DescribeAppsByApiProductResult::getAuthorizedApps()const
{
	return authorizedApps_;
}

int DescribeAppsByApiProductResult::getPageNumber()const
{
	return pageNumber_;
}

