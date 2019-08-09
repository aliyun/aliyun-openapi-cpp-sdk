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

#include <alibabacloud/cloudapi/model/DescribeApiGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeApiGroupsResult::DescribeApiGroupsResult() :
	ServiceResult()
{}

DescribeApiGroupsResult::DescribeApiGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApiGroupsResult::~DescribeApiGroupsResult()
{}

void DescribeApiGroupsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allApiGroupAttributes = value["ApiGroupAttributes"]["ApiGroupAttribute"];
	for (auto value : allApiGroupAttributes)
	{
		ApiGroupAttribute apiGroupAttributesObject;
		if(!value["GroupId"].isNull())
			apiGroupAttributesObject.groupId = value["GroupId"].asString();
		if(!value["GroupName"].isNull())
			apiGroupAttributesObject.groupName = value["GroupName"].asString();
		if(!value["SubDomain"].isNull())
			apiGroupAttributesObject.subDomain = value["SubDomain"].asString();
		if(!value["Description"].isNull())
			apiGroupAttributesObject.description = value["Description"].asString();
		if(!value["CreatedTime"].isNull())
			apiGroupAttributesObject.createdTime = value["CreatedTime"].asString();
		if(!value["ModifiedTime"].isNull())
			apiGroupAttributesObject.modifiedTime = value["ModifiedTime"].asString();
		if(!value["RegionId"].isNull())
			apiGroupAttributesObject.regionId = value["RegionId"].asString();
		if(!value["TrafficLimit"].isNull())
			apiGroupAttributesObject.trafficLimit = std::stoi(value["TrafficLimit"].asString());
		if(!value["BillingStatus"].isNull())
			apiGroupAttributesObject.billingStatus = value["BillingStatus"].asString();
		if(!value["IllegalStatus"].isNull())
			apiGroupAttributesObject.illegalStatus = value["IllegalStatus"].asString();
		if(!value["InstanceId"].isNull())
			apiGroupAttributesObject.instanceId = value["InstanceId"].asString();
		if(!value["InstanceType"].isNull())
			apiGroupAttributesObject.instanceType = value["InstanceType"].asString();
		if(!value["HttpsPolicy"].isNull())
			apiGroupAttributesObject.httpsPolicy = value["HttpsPolicy"].asString();
		apiGroupAttributes_.push_back(apiGroupAttributesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeApiGroupsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeApiGroupsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeApiGroupsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeApiGroupsResult::ApiGroupAttribute> DescribeApiGroupsResult::getApiGroupAttributes()const
{
	return apiGroupAttributes_;
}

