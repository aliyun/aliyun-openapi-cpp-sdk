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

#include <alibabacloud/alidns/model/DescribeDnsGtmAddrAttributeInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDnsGtmAddrAttributeInfoResult::DescribeDnsGtmAddrAttributeInfoResult() :
	ServiceResult()
{}

DescribeDnsGtmAddrAttributeInfoResult::DescribeDnsGtmAddrAttributeInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDnsGtmAddrAttributeInfoResult::~DescribeDnsGtmAddrAttributeInfoResult()
{}

void DescribeDnsGtmAddrAttributeInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAddrNode = value["Addr"]["AddrItem"];
	for (auto valueAddrAddrItem : allAddrNode)
	{
		AddrItem addrObject;
		if(!valueAddrAddrItem["Addr"].isNull())
			addrObject.addr = valueAddrAddrItem["Addr"].asString();
		auto attributeInfoNode = value["AttributeInfo"];
		if(!attributeInfoNode["FatherCode"].isNull())
			addrObject.attributeInfo.fatherCode = attributeInfoNode["FatherCode"].asString();
		if(!attributeInfoNode["GroupName"].isNull())
			addrObject.attributeInfo.groupName = attributeInfoNode["GroupName"].asString();
		if(!attributeInfoNode["LineCode"].isNull())
			addrObject.attributeInfo.lineCode = attributeInfoNode["LineCode"].asString();
		if(!attributeInfoNode["LineName"].isNull())
			addrObject.attributeInfo.lineName = attributeInfoNode["LineName"].asString();
		if(!attributeInfoNode["GroupCode"].isNull())
			addrObject.attributeInfo.groupCode = attributeInfoNode["GroupCode"].asString();
		addr_.push_back(addrObject);
	}

}

std::vector<DescribeDnsGtmAddrAttributeInfoResult::AddrItem> DescribeDnsGtmAddrAttributeInfoResult::getAddr()const
{
	return addr_;
}

