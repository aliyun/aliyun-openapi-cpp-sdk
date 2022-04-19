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

#include <alibabacloud/sas/model/DescribePropertyCronDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribePropertyCronDetailResult::DescribePropertyCronDetailResult() :
	ServiceResult()
{}

DescribePropertyCronDetailResult::DescribePropertyCronDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePropertyCronDetailResult::~DescribePropertyCronDetailResult()
{}

void DescribePropertyCronDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPropertysNode = value["Propertys"]["PropertyCron"];
	for (auto valuePropertysPropertyCron : allPropertysNode)
	{
		PropertyCron propertysObject;
		if(!valuePropertysPropertyCron["InternetIp"].isNull())
			propertysObject.internetIp = valuePropertysPropertyCron["InternetIp"].asString();
		if(!valuePropertysPropertyCron["Ip"].isNull())
			propertysObject.ip = valuePropertysPropertyCron["Ip"].asString();
		if(!valuePropertysPropertyCron["User"].isNull())
			propertysObject.user = valuePropertysPropertyCron["User"].asString();
		if(!valuePropertysPropertyCron["InstanceId"].isNull())
			propertysObject.instanceId = valuePropertysPropertyCron["InstanceId"].asString();
		if(!valuePropertysPropertyCron["Source"].isNull())
			propertysObject.source = valuePropertysPropertyCron["Source"].asString();
		if(!valuePropertysPropertyCron["IntranetIp"].isNull())
			propertysObject.intranetIp = valuePropertysPropertyCron["IntranetIp"].asString();
		if(!valuePropertysPropertyCron["Cmd"].isNull())
			propertysObject.cmd = valuePropertysPropertyCron["Cmd"].asString();
		if(!valuePropertysPropertyCron["Period"].isNull())
			propertysObject.period = valuePropertysPropertyCron["Period"].asString();
		if(!valuePropertysPropertyCron["Uuid"].isNull())
			propertysObject.uuid = valuePropertysPropertyCron["Uuid"].asString();
		if(!valuePropertysPropertyCron["InstanceName"].isNull())
			propertysObject.instanceName = valuePropertysPropertyCron["InstanceName"].asString();
		if(!valuePropertysPropertyCron["Md5"].isNull())
			propertysObject.md5 = valuePropertysPropertyCron["Md5"].asString();
		if(!valuePropertysPropertyCron["CreateTimestamp"].isNull())
			propertysObject.createTimestamp = std::stol(valuePropertysPropertyCron["CreateTimestamp"].asString());
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

std::vector<DescribePropertyCronDetailResult::PropertyCron> DescribePropertyCronDetailResult::getPropertys()const
{
	return propertys_;
}

DescribePropertyCronDetailResult::PageInfo DescribePropertyCronDetailResult::getPageInfo()const
{
	return pageInfo_;
}

