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

#include <alibabacloud/ga/model/ListBasicAccelerateIpsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

ListBasicAccelerateIpsResult::ListBasicAccelerateIpsResult() :
	ServiceResult()
{}

ListBasicAccelerateIpsResult::ListBasicAccelerateIpsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBasicAccelerateIpsResult::~ListBasicAccelerateIpsResult()
{}

void ListBasicAccelerateIpsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAccelerateIpsNode = value["AccelerateIps"]["AccelerateIpsItem"];
	for (auto valueAccelerateIpsAccelerateIpsItem : allAccelerateIpsNode)
	{
		AccelerateIpsItem accelerateIpsObject;
		if(!valueAccelerateIpsAccelerateIpsItem["AcceleratorId"].isNull())
			accelerateIpsObject.acceleratorId = valueAccelerateIpsAccelerateIpsItem["AcceleratorId"].asString();
		if(!valueAccelerateIpsAccelerateIpsItem["IpSetId"].isNull())
			accelerateIpsObject.ipSetId = valueAccelerateIpsAccelerateIpsItem["IpSetId"].asString();
		if(!valueAccelerateIpsAccelerateIpsItem["AccelerateIpId"].isNull())
			accelerateIpsObject.accelerateIpId = valueAccelerateIpsAccelerateIpsItem["AccelerateIpId"].asString();
		if(!valueAccelerateIpsAccelerateIpsItem["AccelerateIpAddress"].isNull())
			accelerateIpsObject.accelerateIpAddress = valueAccelerateIpsAccelerateIpsItem["AccelerateIpAddress"].asString();
		if(!valueAccelerateIpsAccelerateIpsItem["State"].isNull())
			accelerateIpsObject.state = valueAccelerateIpsAccelerateIpsItem["State"].asString();
		accelerateIps_.push_back(accelerateIpsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int ListBasicAccelerateIpsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListBasicAccelerateIpsResult::getNextToken()const
{
	return nextToken_;
}

int ListBasicAccelerateIpsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListBasicAccelerateIpsResult::AccelerateIpsItem> ListBasicAccelerateIpsResult::getAccelerateIps()const
{
	return accelerateIps_;
}

