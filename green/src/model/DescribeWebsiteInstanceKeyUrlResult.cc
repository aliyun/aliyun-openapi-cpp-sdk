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

#include <alibabacloud/green/model/DescribeWebsiteInstanceKeyUrlResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeWebsiteInstanceKeyUrlResult::DescribeWebsiteInstanceKeyUrlResult() :
	ServiceResult()
{}

DescribeWebsiteInstanceKeyUrlResult::DescribeWebsiteInstanceKeyUrlResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebsiteInstanceKeyUrlResult::~DescribeWebsiteInstanceKeyUrlResult()
{}

void DescribeWebsiteInstanceKeyUrlResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWebsiteInstanceKeyUrlList = value["WebsiteInstanceKeyUrlList"]["WebsiteInstanceKeyUrl"];
	for (const auto &item : allWebsiteInstanceKeyUrlList)
		websiteInstanceKeyUrlList_.push_back(item.asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeWebsiteInstanceKeyUrlResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<std::string> DescribeWebsiteInstanceKeyUrlResult::getWebsiteInstanceKeyUrlList()const
{
	return websiteInstanceKeyUrlList_;
}

