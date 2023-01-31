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

#include <alibabacloud/vpc/model/ListPublicIpAddressPoolCidrBlocksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ListPublicIpAddressPoolCidrBlocksResult::ListPublicIpAddressPoolCidrBlocksResult() :
	ServiceResult()
{}

ListPublicIpAddressPoolCidrBlocksResult::ListPublicIpAddressPoolCidrBlocksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPublicIpAddressPoolCidrBlocksResult::~ListPublicIpAddressPoolCidrBlocksResult()
{}

void ListPublicIpAddressPoolCidrBlocksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPublicIpPoolCidrBlockListNode = value["PublicIpPoolCidrBlockList"]["PublicIpPoolCidrBlock"];
	for (auto valuePublicIpPoolCidrBlockListPublicIpPoolCidrBlock : allPublicIpPoolCidrBlockListNode)
	{
		PublicIpPoolCidrBlock publicIpPoolCidrBlockListObject;
		if(!valuePublicIpPoolCidrBlockListPublicIpPoolCidrBlock["PublicIpAddressPoolId"].isNull())
			publicIpPoolCidrBlockListObject.publicIpAddressPoolId = valuePublicIpPoolCidrBlockListPublicIpPoolCidrBlock["PublicIpAddressPoolId"].asString();
		if(!valuePublicIpPoolCidrBlockListPublicIpPoolCidrBlock["CidrBlock"].isNull())
			publicIpPoolCidrBlockListObject.cidrBlock = valuePublicIpPoolCidrBlockListPublicIpPoolCidrBlock["CidrBlock"].asString();
		if(!valuePublicIpPoolCidrBlockListPublicIpPoolCidrBlock["CreationTime"].isNull())
			publicIpPoolCidrBlockListObject.creationTime = valuePublicIpPoolCidrBlockListPublicIpPoolCidrBlock["CreationTime"].asString();
		if(!valuePublicIpPoolCidrBlockListPublicIpPoolCidrBlock["Status"].isNull())
			publicIpPoolCidrBlockListObject.status = valuePublicIpPoolCidrBlockListPublicIpPoolCidrBlock["Status"].asString();
		if(!valuePublicIpPoolCidrBlockListPublicIpPoolCidrBlock["UsedIpNum"].isNull())
			publicIpPoolCidrBlockListObject.usedIpNum = std::stoi(valuePublicIpPoolCidrBlockListPublicIpPoolCidrBlock["UsedIpNum"].asString());
		if(!valuePublicIpPoolCidrBlockListPublicIpPoolCidrBlock["TotalIpNum"].isNull())
			publicIpPoolCidrBlockListObject.totalIpNum = std::stoi(valuePublicIpPoolCidrBlockListPublicIpPoolCidrBlock["TotalIpNum"].asString());
		publicIpPoolCidrBlockList_.push_back(publicIpPoolCidrBlockListObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<ListPublicIpAddressPoolCidrBlocksResult::PublicIpPoolCidrBlock> ListPublicIpAddressPoolCidrBlocksResult::getPublicIpPoolCidrBlockList()const
{
	return publicIpPoolCidrBlockList_;
}

int ListPublicIpAddressPoolCidrBlocksResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListPublicIpAddressPoolCidrBlocksResult::getNextToken()const
{
	return nextToken_;
}

int ListPublicIpAddressPoolCidrBlocksResult::getMaxResults()const
{
	return maxResults_;
}

