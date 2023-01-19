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

#include <alibabacloud/sas/model/ListHoneypotProbeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListHoneypotProbeResult::ListHoneypotProbeResult() :
	ServiceResult()
{}

ListHoneypotProbeResult::ListHoneypotProbeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListHoneypotProbeResult::~ListHoneypotProbeResult()
{}

void ListHoneypotProbeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListNode = value["List"]["ListItem"];
	for (auto valueListListItem : allListNode)
	{
		ListItem listObject;
		if(!valueListListItem["ProbeId"].isNull())
			listObject.probeId = valueListListItem["ProbeId"].asString();
		if(!valueListListItem["ProbeType"].isNull())
			listObject.probeType = valueListListItem["ProbeType"].asString();
		if(!valueListListItem["ProbeVersion"].isNull())
			listObject.probeVersion = valueListListItem["ProbeVersion"].asString();
		if(!valueListListItem["DisplayName"].isNull())
			listObject.displayName = valueListListItem["DisplayName"].asString();
		if(!valueListListItem["OsType"].isNull())
			listObject.osType = valueListListItem["OsType"].asString();
		if(!valueListListItem["HostIp"].isNull())
			listObject.hostIp = valueListListItem["HostIp"].asString();
		if(!valueListListItem["DeployTime"].isNull())
			listObject.deployTime = std::stol(valueListListItem["DeployTime"].asString());
		if(!valueListListItem["Status"].isNull())
			listObject.status = valueListListItem["Status"].asString();
		if(!valueListListItem["Uuid"].isNull())
			listObject.uuid = valueListListItem["Uuid"].asString();
		if(!valueListListItem["VpcId"].isNull())
			listObject.vpcId = valueListListItem["VpcId"].asString();
		auto controlNodeNode = value["ControlNode"];
		if(!controlNodeNode["NodeId"].isNull())
			listObject.controlNode.nodeId = controlNodeNode["NodeId"].asString();
		if(!controlNodeNode["NodeName"].isNull())
			listObject.controlNode.nodeName = controlNodeNode["NodeName"].asString();
		if(!controlNodeNode["EcsInstanceId"].isNull())
			listObject.controlNode.ecsInstanceId = controlNodeNode["EcsInstanceId"].asString();
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
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

ListHoneypotProbeResult::PageInfo ListHoneypotProbeResult::getPageInfo()const
{
	return pageInfo_;
}

std::string ListHoneypotProbeResult::getMessage()const
{
	return message_;
}

int ListHoneypotProbeResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListHoneypotProbeResult::ListItem> ListHoneypotProbeResult::getList()const
{
	return list_;
}

std::string ListHoneypotProbeResult::getCode()const
{
	return code_;
}

bool ListHoneypotProbeResult::getSuccess()const
{
	return success_;
}

