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

#include <alibabacloud/sas/model/DescribePropertySoftwareDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribePropertySoftwareDetailResult::DescribePropertySoftwareDetailResult() :
	ServiceResult()
{}

DescribePropertySoftwareDetailResult::DescribePropertySoftwareDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePropertySoftwareDetailResult::~DescribePropertySoftwareDetailResult()
{}

void DescribePropertySoftwareDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPropertys = value["Propertys"]["PropertySoftware"];
	for (auto value : allPropertys)
	{
		PropertySoftware propertysObject;
		if(!value["Name"].isNull())
			propertysObject.name = value["Name"].asString();
		if(!value["Path"].isNull())
			propertysObject.path = value["Path"].asString();
		if(!value["InstanceName"].isNull())
			propertysObject.instanceName = value["InstanceName"].asString();
		if(!value["Ip"].isNull())
			propertysObject.ip = value["Ip"].asString();
		if(!value["Create"].isNull())
			propertysObject.create = std::stol(value["Create"].asString());
		if(!value["CreateTimestamp"].isNull())
			propertysObject.createTimestamp = std::stol(value["CreateTimestamp"].asString());
		if(!value["InstallTime"].isNull())
			propertysObject.installTime = value["InstallTime"].asString();
		if(!value["Version"].isNull())
			propertysObject.version = value["Version"].asString();
		if(!value["Uuid"].isNull())
			propertysObject.uuid = value["Uuid"].asString();
		if(!value["InstanceId"].isNull())
			propertysObject.instanceId = value["InstanceId"].asString();
		if(!value["IntranetIp"].isNull())
			propertysObject.intranetIp = value["IntranetIp"].asString();
		if(!value["InternetIp"].isNull())
			propertysObject.internetIp = value["InternetIp"].asString();
		propertys_.push_back(propertysObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());

}

std::vector<DescribePropertySoftwareDetailResult::PropertySoftware> DescribePropertySoftwareDetailResult::getPropertys()const
{
	return propertys_;
}

DescribePropertySoftwareDetailResult::PageInfo DescribePropertySoftwareDetailResult::getPageInfo()const
{
	return pageInfo_;
}

