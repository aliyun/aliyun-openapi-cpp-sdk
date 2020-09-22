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

#include <alibabacloud/vs/model/DescribeParentPlatformsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeParentPlatformsResult::DescribeParentPlatformsResult() :
	ServiceResult()
{}

DescribeParentPlatformsResult::DescribeParentPlatformsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeParentPlatformsResult::~DescribeParentPlatformsResult()
{}

void DescribeParentPlatformsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPlatformsNode = value["Platforms"]["Platform"];
	for (auto valuePlatformsPlatform : allPlatformsNode)
	{
		Platform platformsObject;
		if(!valuePlatformsPlatform["Id"].isNull())
			platformsObject.id = valuePlatformsPlatform["Id"].asString();
		if(!valuePlatformsPlatform["Name"].isNull())
			platformsObject.name = valuePlatformsPlatform["Name"].asString();
		if(!valuePlatformsPlatform["Description"].isNull())
			platformsObject.description = valuePlatformsPlatform["Description"].asString();
		if(!valuePlatformsPlatform["Protocol"].isNull())
			platformsObject.protocol = valuePlatformsPlatform["Protocol"].asString();
		if(!valuePlatformsPlatform["Status"].isNull())
			platformsObject.status = valuePlatformsPlatform["Status"].asString();
		if(!valuePlatformsPlatform["GbId"].isNull())
			platformsObject.gbId = valuePlatformsPlatform["GbId"].asString();
		if(!valuePlatformsPlatform["Ip"].isNull())
			platformsObject.ip = valuePlatformsPlatform["Ip"].asString();
		if(!valuePlatformsPlatform["Port"].isNull())
			platformsObject.port = std::stol(valuePlatformsPlatform["Port"].asString());
		if(!valuePlatformsPlatform["ClientGbId"].isNull())
			platformsObject.clientGbId = valuePlatformsPlatform["ClientGbId"].asString();
		if(!valuePlatformsPlatform["ClientAuth"].isNull())
			platformsObject.clientAuth = valuePlatformsPlatform["ClientAuth"].asString() == "true";
		if(!valuePlatformsPlatform["ClientUsername"].isNull())
			platformsObject.clientUsername = valuePlatformsPlatform["ClientUsername"].asString();
		if(!valuePlatformsPlatform["ClientPassword"].isNull())
			platformsObject.clientPassword = valuePlatformsPlatform["ClientPassword"].asString();
		if(!valuePlatformsPlatform["ClientIp"].isNull())
			platformsObject.clientIp = valuePlatformsPlatform["ClientIp"].asString();
		if(!valuePlatformsPlatform["ClientPort"].isNull())
			platformsObject.clientPort = std::stol(valuePlatformsPlatform["ClientPort"].asString());
		if(!valuePlatformsPlatform["AutoStart"].isNull())
			platformsObject.autoStart = valuePlatformsPlatform["AutoStart"].asString() == "true";
		if(!valuePlatformsPlatform["CreatedTime"].isNull())
			platformsObject.createdTime = valuePlatformsPlatform["CreatedTime"].asString();
		platforms_.push_back(platformsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNum"].isNull())
		pageNum_ = std::stol(value["PageNum"].asString());
	if(!value["PageCount"].isNull())
		pageCount_ = std::stol(value["PageCount"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

std::vector<DescribeParentPlatformsResult::Platform> DescribeParentPlatformsResult::getPlatforms()const
{
	return platforms_;
}

long DescribeParentPlatformsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeParentPlatformsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeParentPlatformsResult::getPageNum()const
{
	return pageNum_;
}

long DescribeParentPlatformsResult::getPageCount()const
{
	return pageCount_;
}

