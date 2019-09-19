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

#include <alibabacloud/green/model/DescribeWebsiteInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeWebsiteInstanceResult::DescribeWebsiteInstanceResult() :
	ServiceResult()
{}

DescribeWebsiteInstanceResult::DescribeWebsiteInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebsiteInstanceResult::~DescribeWebsiteInstanceResult()
{}

void DescribeWebsiteInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWebsiteInstanceListNode = value["WebsiteInstanceList"]["WebsiteInstance"];
	for (auto valueWebsiteInstanceListWebsiteInstance : allWebsiteInstanceListNode)
	{
		WebsiteInstance websiteInstanceListObject;
		if(!valueWebsiteInstanceListWebsiteInstance["Protocol"].isNull())
			websiteInstanceListObject.protocol = valueWebsiteInstanceListWebsiteInstance["Protocol"].asString();
		if(!valueWebsiteInstanceListWebsiteInstance["InstanceId"].isNull())
			websiteInstanceListObject.instanceId = valueWebsiteInstanceListWebsiteInstance["InstanceId"].asString();
		if(!valueWebsiteInstanceListWebsiteInstance["WebsiteScanInterval"].isNull())
			websiteInstanceListObject.websiteScanInterval = std::stoi(valueWebsiteInstanceListWebsiteInstance["WebsiteScanInterval"].asString());
		if(!valueWebsiteInstanceListWebsiteInstance["Domain"].isNull())
			websiteInstanceListObject.domain = valueWebsiteInstanceListWebsiteInstance["Domain"].asString();
		if(!valueWebsiteInstanceListWebsiteInstance["BuyTime"].isNull())
			websiteInstanceListObject.buyTime = valueWebsiteInstanceListWebsiteInstance["BuyTime"].asString();
		if(!valueWebsiteInstanceListWebsiteInstance["IndexPageScanInterval"].isNull())
			websiteInstanceListObject.indexPageScanInterval = std::stoi(valueWebsiteInstanceListWebsiteInstance["IndexPageScanInterval"].asString());
		if(!valueWebsiteInstanceListWebsiteInstance["IndexPage"].isNull())
			websiteInstanceListObject.indexPage = valueWebsiteInstanceListWebsiteInstance["IndexPage"].asString();
		if(!valueWebsiteInstanceListWebsiteInstance["ExpiredTime"].isNull())
			websiteInstanceListObject.expiredTime = valueWebsiteInstanceListWebsiteInstance["ExpiredTime"].asString();
		if(!valueWebsiteInstanceListWebsiteInstance["Status"].isNull())
			websiteInstanceListObject.status = valueWebsiteInstanceListWebsiteInstance["Status"].asString();
		websiteInstanceList_.push_back(websiteInstanceListObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeWebsiteInstanceResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeWebsiteInstanceResult::getPageSize()const
{
	return pageSize_;
}

int DescribeWebsiteInstanceResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeWebsiteInstanceResult::WebsiteInstance> DescribeWebsiteInstanceResult::getWebsiteInstanceList()const
{
	return websiteInstanceList_;
}

