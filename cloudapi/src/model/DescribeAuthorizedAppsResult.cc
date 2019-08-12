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

#include <alibabacloud/cloudapi/model/DescribeAuthorizedAppsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeAuthorizedAppsResult::DescribeAuthorizedAppsResult() :
	ServiceResult()
{}

DescribeAuthorizedAppsResult::DescribeAuthorizedAppsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAuthorizedAppsResult::~DescribeAuthorizedAppsResult()
{}

void DescribeAuthorizedAppsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allAuthorizedApps = value["AuthorizedApps"]["AuthorizedApp"];
	for (auto value : allAuthorizedApps)
	{
		AuthorizedApp authorizedAppsObject;
		if(!value["StageName"].isNull())
			authorizedAppsObject.stageName = value["StageName"].asString();
		if(!value["AppId"].isNull())
			authorizedAppsObject.appId = std::stol(value["AppId"].asString());
		if(!value["AppName"].isNull())
			authorizedAppsObject.appName = value["AppName"].asString();
		if(!value["Operator"].isNull())
			authorizedAppsObject._operator = value["Operator"].asString();
		if(!value["AuthorizationSource"].isNull())
			authorizedAppsObject.authorizationSource = value["AuthorizationSource"].asString();
		if(!value["Description"].isNull())
			authorizedAppsObject.description = value["Description"].asString();
		if(!value["AuthorizedTime"].isNull())
			authorizedAppsObject.authorizedTime = value["AuthorizedTime"].asString();
		if(!value["AuthVaildTime"].isNull())
			authorizedAppsObject.authVaildTime = value["AuthVaildTime"].asString();
		authorizedApps_.push_back(authorizedAppsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeAuthorizedAppsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAuthorizedAppsResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribeAuthorizedAppsResult::AuthorizedApp> DescribeAuthorizedAppsResult::getAuthorizedApps()const
{
	return authorizedApps_;
}

int DescribeAuthorizedAppsResult::getPageNumber()const
{
	return pageNumber_;
}

