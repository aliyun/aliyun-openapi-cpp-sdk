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

#include <alibabacloud/cbn/model/ListGrantVSwitchEnisResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

ListGrantVSwitchEnisResult::ListGrantVSwitchEnisResult() :
	ServiceResult()
{}

ListGrantVSwitchEnisResult::ListGrantVSwitchEnisResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGrantVSwitchEnisResult::~ListGrantVSwitchEnisResult()
{}

void ListGrantVSwitchEnisResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGrantVSwitchEnisNode = value["GrantVSwitchEnis"]["GrantVSwitchEni"];
	for (auto valueGrantVSwitchEnisGrantVSwitchEni : allGrantVSwitchEnisNode)
	{
		GrantVSwitchEni grantVSwitchEnisObject;
		if(!valueGrantVSwitchEnisGrantVSwitchEni["VpcId"].isNull())
			grantVSwitchEnisObject.vpcId = valueGrantVSwitchEnisGrantVSwitchEni["VpcId"].asString();
		if(!valueGrantVSwitchEnisGrantVSwitchEni["VSwitchId"].isNull())
			grantVSwitchEnisObject.vSwitchId = valueGrantVSwitchEnisGrantVSwitchEni["VSwitchId"].asString();
		if(!valueGrantVSwitchEnisGrantVSwitchEni["NetworkInterfaceId"].isNull())
			grantVSwitchEnisObject.networkInterfaceId = valueGrantVSwitchEnisGrantVSwitchEni["NetworkInterfaceId"].asString();
		if(!valueGrantVSwitchEnisGrantVSwitchEni["Description"].isNull())
			grantVSwitchEnisObject.description = valueGrantVSwitchEnisGrantVSwitchEni["Description"].asString();
		if(!valueGrantVSwitchEnisGrantVSwitchEni["TransitRouterFlag"].isNull())
			grantVSwitchEnisObject.transitRouterFlag = valueGrantVSwitchEnisGrantVSwitchEni["TransitRouterFlag"].asString() == "true";
		if(!valueGrantVSwitchEnisGrantVSwitchEni["NetworkInterfaceName"].isNull())
			grantVSwitchEnisObject.networkInterfaceName = valueGrantVSwitchEnisGrantVSwitchEni["NetworkInterfaceName"].asString();
		if(!valueGrantVSwitchEnisGrantVSwitchEni["PrimaryIpAddress"].isNull())
			grantVSwitchEnisObject.primaryIpAddress = valueGrantVSwitchEnisGrantVSwitchEni["PrimaryIpAddress"].asString();
		grantVSwitchEnis_.push_back(grantVSwitchEnisObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stol(value["MaxResults"].asString());

}

std::string ListGrantVSwitchEnisResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListGrantVSwitchEnisResult::getNextToken()const
{
	return nextToken_;
}

long ListGrantVSwitchEnisResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListGrantVSwitchEnisResult::GrantVSwitchEni> ListGrantVSwitchEnisResult::getGrantVSwitchEnis()const
{
	return grantVSwitchEnis_;
}

