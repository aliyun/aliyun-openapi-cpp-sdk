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

#include <alibabacloud/cc5g/model/ListDataPackagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CC5G;
using namespace AlibabaCloud::CC5G::Model;

ListDataPackagesResult::ListDataPackagesResult() :
	ServiceResult()
{}

ListDataPackagesResult::ListDataPackagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataPackagesResult::~ListDataPackagesResult()
{}

void ListDataPackagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataPackagesNode = value["DataPackages"]["DataPackage"];
	for (auto valueDataPackagesDataPackage : allDataPackagesNode)
	{
		DataPackage dataPackagesObject;
		if(!valueDataPackagesDataPackage["DataPackageId"].isNull())
			dataPackagesObject.dataPackageId = valueDataPackagesDataPackage["DataPackageId"].asString();
		if(!valueDataPackagesDataPackage["Status"].isNull())
			dataPackagesObject.status = valueDataPackagesDataPackage["Status"].asString();
		if(!valueDataPackagesDataPackage["Name"].isNull())
			dataPackagesObject.name = valueDataPackagesDataPackage["Name"].asString();
		if(!valueDataPackagesDataPackage["ISP"].isNull())
			dataPackagesObject.iSP = valueDataPackagesDataPackage["ISP"].asString();
		if(!valueDataPackagesDataPackage["Size"].isNull())
			dataPackagesObject.size = valueDataPackagesDataPackage["Size"].asString();
		if(!valueDataPackagesDataPackage["CardCount"].isNull())
			dataPackagesObject.cardCount = valueDataPackagesDataPackage["CardCount"].asString();
		if(!valueDataPackagesDataPackage["CreateTime"].isNull())
			dataPackagesObject.createTime = valueDataPackagesDataPackage["CreateTime"].asString();
		if(!valueDataPackagesDataPackage["ExpiredTime"].isNull())
			dataPackagesObject.expiredTime = valueDataPackagesDataPackage["ExpiredTime"].asString();
		dataPackages_.push_back(dataPackagesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = value["MaxResults"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::string ListDataPackagesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListDataPackagesResult::getNextToken()const
{
	return nextToken_;
}

std::string ListDataPackagesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListDataPackagesResult::DataPackage> ListDataPackagesResult::getDataPackages()const
{
	return dataPackages_;
}

