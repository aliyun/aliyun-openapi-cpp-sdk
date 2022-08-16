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

#include <alibabacloud/sas/model/ListHoneypotNodeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListHoneypotNodeResult::ListHoneypotNodeResult() :
	ServiceResult()
{}

ListHoneypotNodeResult::ListHoneypotNodeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListHoneypotNodeResult::~ListHoneypotNodeResult()
{}

void ListHoneypotNodeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHoneypotNodeListNode = value["HoneypotNodeList"]["List"];
	for (auto valueHoneypotNodeListList : allHoneypotNodeListNode)
	{
		List honeypotNodeListObject;
		if(!valueHoneypotNodeListList["NodeId"].isNull())
			honeypotNodeListObject.nodeId = valueHoneypotNodeListList["NodeId"].asString();
		if(!valueHoneypotNodeListList["NodeName"].isNull())
			honeypotNodeListObject.nodeName = valueHoneypotNodeListList["NodeName"].asString();
		if(!valueHoneypotNodeListList["NodeVersion"].isNull())
			honeypotNodeListObject.nodeVersion = valueHoneypotNodeListList["NodeVersion"].asString();
		if(!valueHoneypotNodeListList["HoneypotTotalCount"].isNull())
			honeypotNodeListObject.honeypotTotalCount = std::stoi(valueHoneypotNodeListList["HoneypotTotalCount"].asString());
		if(!valueHoneypotNodeListList["HoneypotUsedCount"].isNull())
			honeypotNodeListObject.honeypotUsedCount = std::stoi(valueHoneypotNodeListList["HoneypotUsedCount"].asString());
		if(!valueHoneypotNodeListList["ProbeTotalCount"].isNull())
			honeypotNodeListObject.probeTotalCount = std::stoi(valueHoneypotNodeListList["ProbeTotalCount"].asString());
		if(!valueHoneypotNodeListList["ProbeUsedCount"].isNull())
			honeypotNodeListObject.probeUsedCount = std::stoi(valueHoneypotNodeListList["ProbeUsedCount"].asString());
		if(!valueHoneypotNodeListList["TotalStatus"].isNull())
			honeypotNodeListObject.totalStatus = std::stoi(valueHoneypotNodeListList["TotalStatus"].asString());
		if(!valueHoneypotNodeListList["EcsInstanceId"].isNull())
			honeypotNodeListObject.ecsInstanceId = valueHoneypotNodeListList["EcsInstanceId"].asString();
		if(!valueHoneypotNodeListList["CreateTime"].isNull())
			honeypotNodeListObject.createTime = valueHoneypotNodeListList["CreateTime"].asString();
		if(!valueHoneypotNodeListList["AllowHoneypotAccessInternet"].isNull())
			honeypotNodeListObject.allowHoneypotAccessInternet = valueHoneypotNodeListList["AllowHoneypotAccessInternet"].asString() == "true";
		if(!valueHoneypotNodeListList["DefaultNode"].isNull())
			honeypotNodeListObject.defaultNode = valueHoneypotNodeListList["DefaultNode"].asString() == "true";
		if(!valueHoneypotNodeListList["NodeIp"].isNull())
			honeypotNodeListObject.nodeIp = valueHoneypotNodeListList["NodeIp"].asString();
		auto allSecurityGroupProbeIpList = value["SecurityGroupProbeIpList"]["SecurityGroupProbeIp"];
		for (auto value : allSecurityGroupProbeIpList)
			honeypotNodeListObject.securityGroupProbeIpList.push_back(value.asString());
		honeypotNodeList_.push_back(honeypotNodeListObject);
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
	if(!pageInfoNode["LastRowKey"].isNull())
		pageInfo_.lastRowKey = pageInfoNode["LastRowKey"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

ListHoneypotNodeResult::PageInfo ListHoneypotNodeResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<ListHoneypotNodeResult::List> ListHoneypotNodeResult::getHoneypotNodeList()const
{
	return honeypotNodeList_;
}

std::string ListHoneypotNodeResult::getMessage()const
{
	return message_;
}

int ListHoneypotNodeResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListHoneypotNodeResult::getCode()const
{
	return code_;
}

bool ListHoneypotNodeResult::getSuccess()const
{
	return success_;
}

