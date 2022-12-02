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
	auto allHoneypotNodeListNode = value["HoneypotNodeList"]["HoneypotNode"];
	for (auto valueHoneypotNodeListHoneypotNode : allHoneypotNodeListNode)
	{
		HoneypotNode honeypotNodeListObject;
		if(!valueHoneypotNodeListHoneypotNode["NodeId"].isNull())
			honeypotNodeListObject.nodeId = valueHoneypotNodeListHoneypotNode["NodeId"].asString();
		if(!valueHoneypotNodeListHoneypotNode["NodeName"].isNull())
			honeypotNodeListObject.nodeName = valueHoneypotNodeListHoneypotNode["NodeName"].asString();
		if(!valueHoneypotNodeListHoneypotNode["NodeVersion"].isNull())
			honeypotNodeListObject.nodeVersion = valueHoneypotNodeListHoneypotNode["NodeVersion"].asString();
		if(!valueHoneypotNodeListHoneypotNode["HoneypotTotalCount"].isNull())
			honeypotNodeListObject.honeypotTotalCount = std::stoi(valueHoneypotNodeListHoneypotNode["HoneypotTotalCount"].asString());
		if(!valueHoneypotNodeListHoneypotNode["HoneypotUsedCount"].isNull())
			honeypotNodeListObject.honeypotUsedCount = std::stoi(valueHoneypotNodeListHoneypotNode["HoneypotUsedCount"].asString());
		if(!valueHoneypotNodeListHoneypotNode["ProbeTotalCount"].isNull())
			honeypotNodeListObject.probeTotalCount = std::stoi(valueHoneypotNodeListHoneypotNode["ProbeTotalCount"].asString());
		if(!valueHoneypotNodeListHoneypotNode["ProbeUsedCount"].isNull())
			honeypotNodeListObject.probeUsedCount = std::stoi(valueHoneypotNodeListHoneypotNode["ProbeUsedCount"].asString());
		if(!valueHoneypotNodeListHoneypotNode["TotalStatus"].isNull())
			honeypotNodeListObject.totalStatus = std::stoi(valueHoneypotNodeListHoneypotNode["TotalStatus"].asString());
		if(!valueHoneypotNodeListHoneypotNode["EcsInstanceId"].isNull())
			honeypotNodeListObject.ecsInstanceId = valueHoneypotNodeListHoneypotNode["EcsInstanceId"].asString();
		if(!valueHoneypotNodeListHoneypotNode["CreateTime"].isNull())
			honeypotNodeListObject.createTime = valueHoneypotNodeListHoneypotNode["CreateTime"].asString();
		if(!valueHoneypotNodeListHoneypotNode["AllowHoneypotAccessInternet"].isNull())
			honeypotNodeListObject.allowHoneypotAccessInternet = valueHoneypotNodeListHoneypotNode["AllowHoneypotAccessInternet"].asString() == "true";
		if(!valueHoneypotNodeListHoneypotNode["DefaultNode"].isNull())
			honeypotNodeListObject.defaultNode = valueHoneypotNodeListHoneypotNode["DefaultNode"].asString() == "true";
		if(!valueHoneypotNodeListHoneypotNode["NodeIp"].isNull())
			honeypotNodeListObject.nodeIp = valueHoneypotNodeListHoneypotNode["NodeIp"].asString();
		if(!valueHoneypotNodeListHoneypotNode["UpgradeAvailable"].isNull())
			honeypotNodeListObject.upgradeAvailable = valueHoneypotNodeListHoneypotNode["UpgradeAvailable"].asString() == "true";
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

std::vector<ListHoneypotNodeResult::HoneypotNode> ListHoneypotNodeResult::getHoneypotNodeList()const
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

