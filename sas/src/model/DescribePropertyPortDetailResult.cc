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
	auto allPropertysNode = value["Propertys"]["PropertyPort"];
	for (auto valuePropertysPropertyPort : allPropertysNode)
	{
		PropertyPort propertysObject;
		if(!valuePropertysPropertyPort["InternetIp"].isNull())
			propertysObject.internetIp = valuePropertysPropertyPort["InternetIp"].asString();
		if(!valuePropertysPropertyPort["Pid"].isNull())
			propertysObject.pid = valuePropertysPropertyPort["Pid"].asString();
		if(!valuePropertysPropertyPort["BindIp"].isNull())
			propertysObject.bindIp = valuePropertysPropertyPort["BindIp"].asString();
		if(!valuePropertysPropertyPort["Ip"].isNull())
			propertysObject.ip = valuePropertysPropertyPort["Ip"].asString();
		if(!valuePropertysPropertyPort["ProcName"].isNull())
			propertysObject.procName = valuePropertysPropertyPort["ProcName"].asString();
		if(!valuePropertysPropertyPort["InstanceId"].isNull())
			propertysObject.instanceId = valuePropertysPropertyPort["InstanceId"].asString();
		if(!valuePropertysPropertyPort["Port"].isNull())
			propertysObject.port = valuePropertysPropertyPort["Port"].asString();
		if(!valuePropertysPropertyPort["IntranetIp"].isNull())
			propertysObject.intranetIp = valuePropertysPropertyPort["IntranetIp"].asString();
		if(!valuePropertysPropertyPort["Uuid"].isNull())
			propertysObject.uuid = valuePropertysPropertyPort["Uuid"].asString();
		if(!valuePropertysPropertyPort["InstanceName"].isNull())
			propertysObject.instanceName = valuePropertysPropertyPort["InstanceName"].asString();
		if(!valuePropertysPropertyPort["Proto"].isNull())
			propertysObject.proto = valuePropertysPropertyPort["Proto"].asString();
		if(!valuePropertysPropertyPort["CreateTimestamp"].isNull())
			propertysObject.createTimestamp = std::stol(valuePropertysPropertyPort["CreateTimestamp"].asString());
		propertys_.push_back(propertysObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

std::vector<DescribePropertyPortDetailResult::PropertyPort> DescribePropertyPortDetailResult::getPropertys()const
{
	return propertys_;
}

DescribePropertyPortDetailResult::PageInfo DescribePropertyPortDetailResult::getPageInfo()const
{
	return pageInfo_;
}

