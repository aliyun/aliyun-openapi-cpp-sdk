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

#include <alibabacloud/eipanycast/model/ListAnycastEipAddressesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eipanycast;
using namespace AlibabaCloud::Eipanycast::Model;

ListAnycastEipAddressesResult::ListAnycastEipAddressesResult() :
	ServiceResult()
{}

ListAnycastEipAddressesResult::ListAnycastEipAddressesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAnycastEipAddressesResult::~ListAnycastEipAddressesResult()
{}

void ListAnycastEipAddressesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAnycastListNode = value["AnycastList"]["Anycast"];
	for (auto valueAnycastListAnycast : allAnycastListNode)
	{
		Anycast anycastListObject;
		if(!valueAnycastListAnycast["Status"].isNull())
			anycastListObject.status = valueAnycastListAnycast["Status"].asString();
		if(!valueAnycastListAnycast["CreateTime"].isNull())
			anycastListObject.createTime = valueAnycastListAnycast["CreateTime"].asString();
		if(!valueAnycastListAnycast["AnycastId"].isNull())
			anycastListObject.anycastId = valueAnycastListAnycast["AnycastId"].asString();
		if(!valueAnycastListAnycast["AliUid"].isNull())
			anycastListObject.aliUid = std::stol(valueAnycastListAnycast["AliUid"].asString());
		if(!valueAnycastListAnycast["Bid"].isNull())
			anycastListObject.bid = valueAnycastListAnycast["Bid"].asString();
		if(!valueAnycastListAnycast["ServiceLocation"].isNull())
			anycastListObject.serviceLocation = valueAnycastListAnycast["ServiceLocation"].asString();
		if(!valueAnycastListAnycast["InstanceChargeType"].isNull())
			anycastListObject.instanceChargeType = valueAnycastListAnycast["InstanceChargeType"].asString();
		if(!valueAnycastListAnycast["IpAddress"].isNull())
			anycastListObject.ipAddress = valueAnycastListAnycast["IpAddress"].asString();
		if(!valueAnycastListAnycast["Bandwidth"].isNull())
			anycastListObject.bandwidth = std::stoi(valueAnycastListAnycast["Bandwidth"].asString());
		if(!valueAnycastListAnycast["Description"].isNull())
			anycastListObject.description = valueAnycastListAnycast["Description"].asString();
		if(!valueAnycastListAnycast["InternetChargeType"].isNull())
			anycastListObject.internetChargeType = valueAnycastListAnycast["InternetChargeType"].asString();
		if(!valueAnycastListAnycast["BusinessStatus"].isNull())
			anycastListObject.businessStatus = valueAnycastListAnycast["BusinessStatus"].asString();
		if(!valueAnycastListAnycast["Name"].isNull())
			anycastListObject.name = valueAnycastListAnycast["Name"].asString();
		auto allAnycastEipBindInfoListNode = valueAnycastListAnycast["AnycastEipBindInfoList"]["AnycastEipBindInfo"];
		for (auto valueAnycastListAnycastAnycastEipBindInfoListAnycastEipBindInfo : allAnycastEipBindInfoListNode)
		{
			Anycast::AnycastEipBindInfo anycastEipBindInfoListObject;
			if(!valueAnycastListAnycastAnycastEipBindInfoListAnycastEipBindInfo["BindInstanceType"].isNull())
				anycastEipBindInfoListObject.bindInstanceType = valueAnycastListAnycastAnycastEipBindInfoListAnycastEipBindInfo["BindInstanceType"].asString();
			if(!valueAnycastListAnycastAnycastEipBindInfoListAnycastEipBindInfo["BindTime"].isNull())
				anycastEipBindInfoListObject.bindTime = valueAnycastListAnycastAnycastEipBindInfoListAnycastEipBindInfo["BindTime"].asString();
			if(!valueAnycastListAnycastAnycastEipBindInfoListAnycastEipBindInfo["BindInstanceRegionId"].isNull())
				anycastEipBindInfoListObject.bindInstanceRegionId = valueAnycastListAnycastAnycastEipBindInfoListAnycastEipBindInfo["BindInstanceRegionId"].asString();
			if(!valueAnycastListAnycastAnycastEipBindInfoListAnycastEipBindInfo["BindInstanceId"].isNull())
				anycastEipBindInfoListObject.bindInstanceId = valueAnycastListAnycastAnycastEipBindInfoListAnycastEipBindInfo["BindInstanceId"].asString();
			anycastListObject.anycastEipBindInfoList.push_back(anycastEipBindInfoListObject);
		}
		anycastList_.push_back(anycastListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

int ListAnycastEipAddressesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListAnycastEipAddressesResult::Anycast> ListAnycastEipAddressesResult::getAnycastList()const
{
	return anycastList_;
}

std::string ListAnycastEipAddressesResult::getNextToken()const
{
	return nextToken_;
}

