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

#include <alibabacloud/imm/model/QueryLocationDateClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

QueryLocationDateClustersResult::QueryLocationDateClustersResult() :
	ServiceResult()
{}

QueryLocationDateClustersResult::QueryLocationDateClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryLocationDateClustersResult::~QueryLocationDateClustersResult()
{}

void QueryLocationDateClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLocationDateClustersNode = value["LocationDateClusters"]["LocationDateClustersItem"];
	for (auto valueLocationDateClustersLocationDateClustersItem : allLocationDateClustersNode)
	{
		LocationDateClustersItem locationDateClustersObject;
		if(!valueLocationDateClustersLocationDateClustersItem["Title"].isNull())
			locationDateClustersObject.title = valueLocationDateClustersLocationDateClustersItem["Title"].asString();
		if(!valueLocationDateClustersLocationDateClustersItem["LocationDateClusterLevel"].isNull())
			locationDateClustersObject.locationDateClusterLevel = valueLocationDateClustersLocationDateClustersItem["LocationDateClusterLevel"].asString();
		if(!valueLocationDateClustersLocationDateClustersItem["LocationDateClusterStartTime"].isNull())
			locationDateClustersObject.locationDateClusterStartTime = valueLocationDateClustersLocationDateClustersItem["LocationDateClusterStartTime"].asString();
		if(!valueLocationDateClustersLocationDateClustersItem["LocationDateClusterEndTime"].isNull())
			locationDateClustersObject.locationDateClusterEndTime = valueLocationDateClustersLocationDateClustersItem["LocationDateClusterEndTime"].asString();
		if(!valueLocationDateClustersLocationDateClustersItem["ObjectId"].isNull())
			locationDateClustersObject.objectId = valueLocationDateClustersLocationDateClustersItem["ObjectId"].asString();
		if(!valueLocationDateClustersLocationDateClustersItem["UpdateTime"].isNull())
			locationDateClustersObject.updateTime = valueLocationDateClustersLocationDateClustersItem["UpdateTime"].asString();
		if(!valueLocationDateClustersLocationDateClustersItem["CreateTime"].isNull())
			locationDateClustersObject.createTime = valueLocationDateClustersLocationDateClustersItem["CreateTime"].asString();
		if(!valueLocationDateClustersLocationDateClustersItem["CustomId"].isNull())
			locationDateClustersObject.customId = valueLocationDateClustersLocationDateClustersItem["CustomId"].asString();
		if(!valueLocationDateClustersLocationDateClustersItem["CustomLabels"].isNull())
			locationDateClustersObject.customLabels = valueLocationDateClustersLocationDateClustersItem["CustomLabels"].asString();
		auto allAddressesNode = valueLocationDateClustersLocationDateClustersItem["Addresses"]["AddressesItem"];
		for (auto valueLocationDateClustersLocationDateClustersItemAddressesAddressesItem : allAddressesNode)
		{
			LocationDateClustersItem::AddressesItem addressesObject;
			if(!valueLocationDateClustersLocationDateClustersItemAddressesAddressesItem["Language"].isNull())
				addressesObject.language = valueLocationDateClustersLocationDateClustersItemAddressesAddressesItem["Language"].asString();
			if(!valueLocationDateClustersLocationDateClustersItemAddressesAddressesItem["AddressLine"].isNull())
				addressesObject.addressLine = valueLocationDateClustersLocationDateClustersItemAddressesAddressesItem["AddressLine"].asString();
			if(!valueLocationDateClustersLocationDateClustersItemAddressesAddressesItem["Country"].isNull())
				addressesObject.country = valueLocationDateClustersLocationDateClustersItemAddressesAddressesItem["Country"].asString();
			if(!valueLocationDateClustersLocationDateClustersItemAddressesAddressesItem["Province"].isNull())
				addressesObject.province = valueLocationDateClustersLocationDateClustersItemAddressesAddressesItem["Province"].asString();
			if(!valueLocationDateClustersLocationDateClustersItemAddressesAddressesItem["City"].isNull())
				addressesObject.city = valueLocationDateClustersLocationDateClustersItemAddressesAddressesItem["City"].asString();
			if(!valueLocationDateClustersLocationDateClustersItemAddressesAddressesItem["District"].isNull())
				addressesObject.district = valueLocationDateClustersLocationDateClustersItemAddressesAddressesItem["District"].asString();
			if(!valueLocationDateClustersLocationDateClustersItemAddressesAddressesItem["Township"].isNull())
				addressesObject.township = valueLocationDateClustersLocationDateClustersItemAddressesAddressesItem["Township"].asString();
			locationDateClustersObject.addresses.push_back(addressesObject);
		}
		locationDateClusters_.push_back(locationDateClustersObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string QueryLocationDateClustersResult::getNextToken()const
{
	return nextToken_;
}

std::vector<QueryLocationDateClustersResult::LocationDateClustersItem> QueryLocationDateClustersResult::getLocationDateClusters()const
{
	return locationDateClusters_;
}

