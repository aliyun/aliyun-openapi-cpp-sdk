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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allWebsiteInstanceList = value["WebsiteInstanceList"]["WebsiteInstance"];
	for (auto value : allWebsiteInstanceList)
	{
		WebsiteInstance websiteInstanceListObject;
		if(!value["Protocol"].isNull())
			websiteInstanceListObject.protocol = value["Protocol"].asString();
		if(!value["InstanceId"].isNull())
			websiteInstanceListObject.instanceId = value["InstanceId"].asString();
		if(!value["WebsiteScanInterval"].isNull())
			websiteInstanceListObject.websiteScanInterval = std::stoi(value["WebsiteScanInterval"].asString());
		if(!value["Domain"].isNull())
			websiteInstanceListObject.domain = value["Domain"].asString();
		if(!value["BuyTime"].isNull())
			websiteInstanceListObject.buyTime = value["BuyTime"].asString();
		if(!value["IndexPageScanInterval"].isNull())
			websiteInstanceListObject.indexPageScanInterval = std::stoi(value["IndexPageScanInterval"].asString());
		if(!value["IndexPage"].isNull())
			websiteInstanceListObject.indexPage = value["IndexPage"].asString();
		if(!value["ExpiredTime"].isNull())
			websiteInstanceListObject.expiredTime = value["ExpiredTime"].asString();
		if(!value["Status"].isNull())
			websiteInstanceListObject.status = value["Status"].asString();
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

