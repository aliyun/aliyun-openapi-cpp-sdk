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

#include <alibabacloud/edas/model/ListClusterMembersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListClusterMembersResult::ListClusterMembersResult() :
	ServiceResult()
{}

ListClusterMembersResult::ListClusterMembersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterMembersResult::~ListClusterMembersResult()
{}

void ListClusterMembersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto clusterMemberPageNode = value["ClusterMemberPage"];
	if(!clusterMemberPageNode["CurrentPage"].isNull())
		clusterMemberPage_.currentPage = std::stoi(clusterMemberPageNode["CurrentPage"].asString());
	if(!clusterMemberPageNode["PageSize"].isNull())
		clusterMemberPage_.pageSize = std::stoi(clusterMemberPageNode["PageSize"].asString());
	if(!clusterMemberPageNode["TotalSize"].isNull())
		clusterMemberPage_.totalSize = std::stoi(clusterMemberPageNode["TotalSize"].asString());
	auto allClusterMemberListNode = clusterMemberPageNode["ClusterMemberList"]["ClusterMember"];
	for (auto clusterMemberPageNodeClusterMemberListClusterMember : allClusterMemberListNode)
	{
		ClusterMemberPage::ClusterMember clusterMemberObject;
		if(!clusterMemberPageNodeClusterMemberListClusterMember["ClusterMemberId"].isNull())
			clusterMemberObject.clusterMemberId = clusterMemberPageNodeClusterMemberListClusterMember["ClusterMemberId"].asString();
		if(!clusterMemberPageNodeClusterMemberListClusterMember["ClusterId"].isNull())
			clusterMemberObject.clusterId = clusterMemberPageNodeClusterMemberListClusterMember["ClusterId"].asString();
		if(!clusterMemberPageNodeClusterMemberListClusterMember["EcuId"].isNull())
			clusterMemberObject.ecuId = clusterMemberPageNodeClusterMemberListClusterMember["EcuId"].asString();
		if(!clusterMemberPageNodeClusterMemberListClusterMember["EcsId"].isNull())
			clusterMemberObject.ecsId = clusterMemberPageNodeClusterMemberListClusterMember["EcsId"].asString();
		if(!clusterMemberPageNodeClusterMemberListClusterMember["Status"].isNull())
			clusterMemberObject.status = std::stoi(clusterMemberPageNodeClusterMemberListClusterMember["Status"].asString());
		if(!clusterMemberPageNodeClusterMemberListClusterMember["CreateTime"].isNull())
			clusterMemberObject.createTime = std::stol(clusterMemberPageNodeClusterMemberListClusterMember["CreateTime"].asString());
		if(!clusterMemberPageNodeClusterMemberListClusterMember["UpdateTime"].isNull())
			clusterMemberObject.updateTime = std::stol(clusterMemberPageNodeClusterMemberListClusterMember["UpdateTime"].asString());
		clusterMemberPage_.clusterMemberList.push_back(clusterMemberObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListClusterMembersResult::getMessage()const
{
	return message_;
}

ListClusterMembersResult::ClusterMemberPage ListClusterMembersResult::getClusterMemberPage()const
{
	return clusterMemberPage_;
}

int ListClusterMembersResult::getCode()const
{
	return code_;
}

