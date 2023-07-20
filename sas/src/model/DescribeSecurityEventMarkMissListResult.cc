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

#include <alibabacloud/sas/model/DescribeSecurityEventMarkMissListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeSecurityEventMarkMissListResult::DescribeSecurityEventMarkMissListResult() :
	ServiceResult()
{}

DescribeSecurityEventMarkMissListResult::DescribeSecurityEventMarkMissListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSecurityEventMarkMissListResult::~DescribeSecurityEventMarkMissListResult()
{}

void DescribeSecurityEventMarkMissListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListNode = value["List"]["SecurityEventMarkMissReponse"];
	for (auto valueListSecurityEventMarkMissReponse : allListNode)
	{
		SecurityEventMarkMissReponse listObject;
		if(!valueListSecurityEventMarkMissReponse["EventName"].isNull())
			listObject.eventName = valueListSecurityEventMarkMissReponse["EventName"].asString();
		if(!valueListSecurityEventMarkMissReponse["InternetIp"].isNull())
			listObject.internetIp = valueListSecurityEventMarkMissReponse["InternetIp"].asString();
		if(!valueListSecurityEventMarkMissReponse["EventNameOriginal"].isNull())
			listObject.eventNameOriginal = valueListSecurityEventMarkMissReponse["EventNameOriginal"].asString();
		if(!valueListSecurityEventMarkMissReponse["AliUid"].isNull())
			listObject.aliUid = std::stol(valueListSecurityEventMarkMissReponse["AliUid"].asString());
		if(!valueListSecurityEventMarkMissReponse["FieldValue"].isNull())
			listObject.fieldValue = valueListSecurityEventMarkMissReponse["FieldValue"].asString();
		if(!valueListSecurityEventMarkMissReponse["InstanceId"].isNull())
			listObject.instanceId = valueListSecurityEventMarkMissReponse["InstanceId"].asString();
		if(!valueListSecurityEventMarkMissReponse["Field"].isNull())
			listObject.field = valueListSecurityEventMarkMissReponse["Field"].asString();
		if(!valueListSecurityEventMarkMissReponse["IntranetIp"].isNull())
			listObject.intranetIp = valueListSecurityEventMarkMissReponse["IntranetIp"].asString();
		if(!valueListSecurityEventMarkMissReponse["FiledAliasName"].isNull())
			listObject.filedAliasName = valueListSecurityEventMarkMissReponse["FiledAliasName"].asString();
		if(!valueListSecurityEventMarkMissReponse["Uuid"].isNull())
			listObject.uuid = valueListSecurityEventMarkMissReponse["Uuid"].asString();
		if(!valueListSecurityEventMarkMissReponse["Operate"].isNull())
			listObject.operate = valueListSecurityEventMarkMissReponse["Operate"].asString();
		if(!valueListSecurityEventMarkMissReponse["EventTypeOriginal"].isNull())
			listObject.eventTypeOriginal = valueListSecurityEventMarkMissReponse["EventTypeOriginal"].asString();
		if(!valueListSecurityEventMarkMissReponse["EventType"].isNull())
			listObject.eventType = valueListSecurityEventMarkMissReponse["EventType"].asString();
		if(!valueListSecurityEventMarkMissReponse["InstanceName"].isNull())
			listObject.instanceName = valueListSecurityEventMarkMissReponse["InstanceName"].asString();
		if(!valueListSecurityEventMarkMissReponse["Id"].isNull())
			listObject.id = std::stol(valueListSecurityEventMarkMissReponse["Id"].asString());
		list_.push_back(listObject);
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

DescribeSecurityEventMarkMissListResult::PageInfo DescribeSecurityEventMarkMissListResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeSecurityEventMarkMissListResult::SecurityEventMarkMissReponse> DescribeSecurityEventMarkMissListResult::getList()const
{
	return list_;
}

