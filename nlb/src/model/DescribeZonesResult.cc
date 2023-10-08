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

#include <alibabacloud/nlb/model/DescribeZonesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nlb;
using namespace AlibabaCloud::Nlb::Model;

DescribeZonesResult::DescribeZonesResult() :
	ServiceResult()
{}

DescribeZonesResult::DescribeZonesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeZonesResult::~DescribeZonesResult()
{}

void DescribeZonesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allZonesNode = value["Zones"]["Zone"];
	for (auto valueZonesZone : allZonesNode)
	{
		Zone zonesObject;
		if(!valueZonesZone["LocalName"].isNull())
			zonesObject.localName = valueZonesZone["LocalName"].asString();
		if(!valueZonesZone["ZoneId"].isNull())
			zonesObject.zoneId = valueZonesZone["ZoneId"].asString();
		zones_.push_back(zonesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

std::string DescribeZonesResult::getMessage()const
{
	return message_;
}

int DescribeZonesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeZonesResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeZonesResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeZonesResult::getCode()const
{
	return code_;
}

bool DescribeZonesResult::getSuccess()const
{
	return success_;
}

std::vector<DescribeZonesResult::Zone> DescribeZonesResult::getZones()const
{
	return zones_;
}

