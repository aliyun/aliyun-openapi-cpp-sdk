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

#include <alibabacloud/sas/model/FindContainerNetworkConnectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

FindContainerNetworkConnectResult::FindContainerNetworkConnectResult() :
	ServiceResult()
{}

FindContainerNetworkConnectResult::FindContainerNetworkConnectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FindContainerNetworkConnectResult::~FindContainerNetworkConnectResult()
{}

void FindContainerNetworkConnectResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConnectsNode = value["Connects"]["connect"];
	for (auto valueConnectsconnect : allConnectsNode)
	{
		Connect connectsObject;
		if(!valueConnectsconnect["Id"].isNull())
			connectsObject.id = std::stol(valueConnectsconnect["Id"].asString());
		if(!valueConnectsconnect["FirstTime"].isNull())
			connectsObject.firstTime = std::stol(valueConnectsconnect["FirstTime"].asString());
		if(!valueConnectsconnect["LastTime"].isNull())
			connectsObject.lastTime = std::stol(valueConnectsconnect["LastTime"].asString());
		if(!valueConnectsconnect["SrcIp"].isNull())
			connectsObject.srcIp = valueConnectsconnect["SrcIp"].asString();
		if(!valueConnectsconnect["SrcPort"].isNull())
			connectsObject.srcPort = valueConnectsconnect["SrcPort"].asString();
		if(!valueConnectsconnect["DstIp"].isNull())
			connectsObject.dstIp = valueConnectsconnect["DstIp"].asString();
		if(!valueConnectsconnect["DstPort"].isNull())
			connectsObject.dstPort = valueConnectsconnect["DstPort"].asString();
		auto srcContainerNode = value["SrcContainer"];
		if(!srcContainerNode["ContainerId"].isNull())
			connectsObject.srcContainer.containerId = srcContainerNode["ContainerId"].asString();
		auto dstContainerNode = value["DstContainer"];
		if(!dstContainerNode["ContainerId"].isNull())
			connectsObject.dstContainer.containerId = dstContainerNode["ContainerId"].asString();
		connects_.push_back(connectsObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stol(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stol(pageInfoNode["Count"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stol(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stol(pageInfoNode["CurrentPage"].asString());

}

FindContainerNetworkConnectResult::PageInfo FindContainerNetworkConnectResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<FindContainerNetworkConnectResult::Connect> FindContainerNetworkConnectResult::getConnects()const
{
	return connects_;
}

