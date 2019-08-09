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

#include <alibabacloud/cloudapi/model/DescribeApisBySignatureResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeApisBySignatureResult::DescribeApisBySignatureResult() :
	ServiceResult()
{}

DescribeApisBySignatureResult::DescribeApisBySignatureResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApisBySignatureResult::~DescribeApisBySignatureResult()
{}

void DescribeApisBySignatureResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allApiInfos = value["ApiInfos"]["ApiInfo"];
	for (auto value : allApiInfos)
	{
		ApiInfo apiInfosObject;
		if(!value["RegionId"].isNull())
			apiInfosObject.regionId = value["RegionId"].asString();
		if(!value["GroupId"].isNull())
			apiInfosObject.groupId = value["GroupId"].asString();
		if(!value["GroupName"].isNull())
			apiInfosObject.groupName = value["GroupName"].asString();
		if(!value["StageName"].isNull())
			apiInfosObject.stageName = value["StageName"].asString();
		if(!value["ApiId"].isNull())
			apiInfosObject.apiId = value["ApiId"].asString();
		if(!value["ApiName"].isNull())
			apiInfosObject.apiName = value["ApiName"].asString();
		if(!value["Description"].isNull())
			apiInfosObject.description = value["Description"].asString();
		if(!value["Visibility"].isNull())
			apiInfosObject.visibility = value["Visibility"].asString();
		if(!value["BoundTime"].isNull())
			apiInfosObject.boundTime = value["BoundTime"].asString();
		apiInfos_.push_back(apiInfosObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::vector<DescribeApisBySignatureResult::ApiInfo> DescribeApisBySignatureResult::getApiInfos()const
{
	return apiInfos_;
}

int DescribeApisBySignatureResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeApisBySignatureResult::getPageSize()const
{
	return pageSize_;
}

int DescribeApisBySignatureResult::getPageNumber()const
{
	return pageNumber_;
}

