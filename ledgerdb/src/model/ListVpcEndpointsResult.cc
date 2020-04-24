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

#include <alibabacloud/ledgerdb/model/ListVpcEndpointsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ledgerdb;
using namespace AlibabaCloud::Ledgerdb::Model;

ListVpcEndpointsResult::ListVpcEndpointsResult() :
	ServiceResult()
{}

ListVpcEndpointsResult::ListVpcEndpointsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVpcEndpointsResult::~ListVpcEndpointsResult()
{}

void ListVpcEndpointsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVpcEndpointsNode = value["VpcEndpoints"]["VpcEndpoint"];
	for (auto valueVpcEndpointsVpcEndpoint : allVpcEndpointsNode)
	{
		VpcEndpoint vpcEndpointsObject;
		if(!valueVpcEndpointsVpcEndpoint["VpcEndpointId"].isNull())
			vpcEndpointsObject.vpcEndpointId = valueVpcEndpointsVpcEndpoint["VpcEndpointId"].asString();
		if(!valueVpcEndpointsVpcEndpoint["LedgerId"].isNull())
			vpcEndpointsObject.ledgerId = valueVpcEndpointsVpcEndpoint["LedgerId"].asString();
		if(!valueVpcEndpointsVpcEndpoint["MemberId"].isNull())
			vpcEndpointsObject.memberId = valueVpcEndpointsVpcEndpoint["MemberId"].asString();
		if(!valueVpcEndpointsVpcEndpoint["RegionId"].isNull())
			vpcEndpointsObject.regionId = valueVpcEndpointsVpcEndpoint["RegionId"].asString();
		if(!valueVpcEndpointsVpcEndpoint["VpcId"].isNull())
			vpcEndpointsObject.vpcId = valueVpcEndpointsVpcEndpoint["VpcId"].asString();
		if(!valueVpcEndpointsVpcEndpoint["VSwitchId"].isNull())
			vpcEndpointsObject.vSwitchId = valueVpcEndpointsVpcEndpoint["VSwitchId"].asString();
		if(!valueVpcEndpointsVpcEndpoint["Address"].isNull())
			vpcEndpointsObject.address = valueVpcEndpointsVpcEndpoint["Address"].asString();
		if(!valueVpcEndpointsVpcEndpoint["CreateTime"].isNull())
			vpcEndpointsObject.createTime = std::stol(valueVpcEndpointsVpcEndpoint["CreateTime"].asString());
		if(!valueVpcEndpointsVpcEndpoint["Status"].isNull())
			vpcEndpointsObject.status = valueVpcEndpointsVpcEndpoint["Status"].asString();
		vpcEndpoints_.push_back(vpcEndpointsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::vector<ListVpcEndpointsResult::VpcEndpoint> ListVpcEndpointsResult::getVpcEndpoints()const
{
	return vpcEndpoints_;
}

std::string ListVpcEndpointsResult::getNextToken()const
{
	return nextToken_;
}

int ListVpcEndpointsResult::getMaxResults()const
{
	return maxResults_;
}

