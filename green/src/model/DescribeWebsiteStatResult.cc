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

#include <alibabacloud/green/model/DescribeWebsiteStatResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeWebsiteStatResult::DescribeWebsiteStatResult() :
	ServiceResult()
{}

DescribeWebsiteStatResult::DescribeWebsiteStatResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebsiteStatResult::~DescribeWebsiteStatResult()
{}

void DescribeWebsiteStatResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWebsiteStatList = value["WebsiteStatList"]["WebsiteStat"];
	for (auto value : allWebsiteStatList)
	{
		WebsiteStat websiteStatListObject;
		if(!value["SubServiceModule"].isNull())
			websiteStatListObject.subServiceModule = value["SubServiceModule"].asString();
		if(!value["InstanceCount"].isNull())
			websiteStatListObject.instanceCount = std::stoi(value["InstanceCount"].asString());
		if(!value["ScanCount"].isNull())
			websiteStatListObject.scanCount = std::stoi(value["ScanCount"].asString());
		if(!value["RiskCount"].isNull())
			websiteStatListObject.riskCount = std::stoi(value["RiskCount"].asString());
		websiteStatList_.push_back(websiteStatListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeWebsiteStatResult::WebsiteStat> DescribeWebsiteStatResult::getWebsiteStatList()const
{
	return websiteStatList_;
}

int DescribeWebsiteStatResult::getTotalCount()const
{
	return totalCount_;
}

