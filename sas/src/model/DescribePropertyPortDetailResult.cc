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

#include <alibabacloud/sas/model/DescribePropertyPortDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribePropertyPortDetailResult::DescribePropertyPortDetailResult() :
	ServiceResult()
{}

DescribePropertyPortDetailResult::DescribePropertyPortDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePropertyPortDetailResult::~DescribePropertyPortDetailResult()
{}

void DescribePropertyPortDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPropertys = value["Propertys"]["PropertyPort"];
	for (auto value : allPropertys)
	{
		PropertyPort propertysObject;
		if(!value["BindIp"].isNull())
			propertysObject.bindIp = value["BindIp"].asString();
		if(!value["Port"].isNull())
			propertysObject.port = value["Port"].asString();
		if(!value["InstanceName"].isNull())
			propertysObject.instanceName = value["InstanceName"].asString();
		if(!value["Proto"].isNull())
			propertysObject.proto = value["Proto"].asString();
		if(!value["Ip"].isNull())
			propertysObject.ip = value["Ip"].asString();
		if(!value["Create"].isNull())
			propertysObject.create = value["Create"].asString();
		if(!value["CreateTimestamp"].isNull())
			propertysObject.createTimestamp = std::stol(value["CreateTimestamp"].asString());
		if(!value["ProcName"].isNull())
			propertysObject.procName = value["ProcName"].asString();
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

std::vector<DescribePropertyPortDetailResult::PropertyPort> DescribePropertyPortDetailResult::getPropertys()const
{
	return propertys_;
}

DescribePropertyPortDetailResult::PageInfo DescribePropertyPortDetailResult::getPageInfo()const
{
	return pageInfo_;
}

