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

#include <alibabacloud/edas/model/ListDeployGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListDeployGroupResult::ListDeployGroupResult() :
	ServiceResult()
{}

ListDeployGroupResult::ListDeployGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDeployGroupResult::~ListDeployGroupResult()
{}

void ListDeployGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDeployGroupListNode = value["DeployGroupList"]["DeployGroup"];
	for (auto valueDeployGroupListDeployGroup : allDeployGroupListNode)
	{
		DeployGroup deployGroupListObject;
		if(!valueDeployGroupListDeployGroup["GroupId"].isNull())
			deployGroupListObject.groupId = valueDeployGroupListDeployGroup["GroupId"].asString();
		if(!valueDeployGroupListDeployGroup["GroupName"].isNull())
			deployGroupListObject.groupName = valueDeployGroupListDeployGroup["GroupName"].asString();
		if(!valueDeployGroupListDeployGroup["AppId"].isNull())
			deployGroupListObject.appId = valueDeployGroupListDeployGroup["AppId"].asString();
		if(!valueDeployGroupListDeployGroup["PackageVersionId"].isNull())
			deployGroupListObject.packageVersionId = valueDeployGroupListDeployGroup["PackageVersionId"].asString();
		if(!valueDeployGroupListDeployGroup["AppVersionId"].isNull())
			deployGroupListObject.appVersionId = valueDeployGroupListDeployGroup["AppVersionId"].asString();
		if(!valueDeployGroupListDeployGroup["GroupType"].isNull())
			deployGroupListObject.groupType = std::stoi(valueDeployGroupListDeployGroup["GroupType"].asString());
		if(!valueDeployGroupListDeployGroup["ClusterId"].isNull())
			deployGroupListObject.clusterId = valueDeployGroupListDeployGroup["ClusterId"].asString();
		if(!valueDeployGroupListDeployGroup["CreateTime"].isNull())
			deployGroupListObject.createTime = std::stol(valueDeployGroupListDeployGroup["CreateTime"].asString());
		if(!valueDeployGroupListDeployGroup["UpdateTime"].isNull())
			deployGroupListObject.updateTime = std::stol(valueDeployGroupListDeployGroup["UpdateTime"].asString());
		if(!valueDeployGroupListDeployGroup["NameSpace"].isNull())
			deployGroupListObject._nameSpace = valueDeployGroupListDeployGroup["NameSpace"].asString();
		if(!valueDeployGroupListDeployGroup["ClusterName"].isNull())
			deployGroupListObject.clusterName = valueDeployGroupListDeployGroup["ClusterName"].asString();
		if(!valueDeployGroupListDeployGroup["LastUpdateTime"].isNull())
			deployGroupListObject.lastUpdateTime = std::stol(valueDeployGroupListDeployGroup["LastUpdateTime"].asString());
		if(!valueDeployGroupListDeployGroup["PreStop"].isNull())
			deployGroupListObject.preStop = valueDeployGroupListDeployGroup["PreStop"].asString();
		if(!valueDeployGroupListDeployGroup["PostStart"].isNull())
			deployGroupListObject.postStart = valueDeployGroupListDeployGroup["PostStart"].asString();
		if(!valueDeployGroupListDeployGroup["PackageUrl"].isNull())
			deployGroupListObject.packageUrl = valueDeployGroupListDeployGroup["PackageUrl"].asString();
		if(!valueDeployGroupListDeployGroup["Env"].isNull())
			deployGroupListObject.env = valueDeployGroupListDeployGroup["Env"].asString();
		if(!valueDeployGroupListDeployGroup["Labels"].isNull())
			deployGroupListObject.labels = valueDeployGroupListDeployGroup["Labels"].asString();
		if(!valueDeployGroupListDeployGroup["Selector"].isNull())
			deployGroupListObject.selector = valueDeployGroupListDeployGroup["Selector"].asString();
		if(!valueDeployGroupListDeployGroup["Strategy"].isNull())
			deployGroupListObject.strategy = valueDeployGroupListDeployGroup["Strategy"].asString();
		if(!valueDeployGroupListDeployGroup["Status"].isNull())
			deployGroupListObject.status = valueDeployGroupListDeployGroup["Status"].asString();
		if(!valueDeployGroupListDeployGroup["Reversion"].isNull())
			deployGroupListObject.reversion = valueDeployGroupListDeployGroup["Reversion"].asString();
		if(!valueDeployGroupListDeployGroup["CsClusterId"].isNull())
			deployGroupListObject.csClusterId = valueDeployGroupListDeployGroup["CsClusterId"].asString();
		if(!valueDeployGroupListDeployGroup["BaseComponentMetaName"].isNull())
			deployGroupListObject.baseComponentMetaName = valueDeployGroupListDeployGroup["BaseComponentMetaName"].asString();
		if(!valueDeployGroupListDeployGroup["DeploymentName"].isNull())
			deployGroupListObject.deploymentName = valueDeployGroupListDeployGroup["DeploymentName"].asString();
		if(!valueDeployGroupListDeployGroup["CpuLimit"].isNull())
			deployGroupListObject.cpuLimit = valueDeployGroupListDeployGroup["CpuLimit"].asString();
		if(!valueDeployGroupListDeployGroup["MemoryLimit"].isNull())
			deployGroupListObject.memoryLimit = valueDeployGroupListDeployGroup["MemoryLimit"].asString();
		if(!valueDeployGroupListDeployGroup["PackagePublicUrl"].isNull())
			deployGroupListObject.packagePublicUrl = valueDeployGroupListDeployGroup["PackagePublicUrl"].asString();
		if(!valueDeployGroupListDeployGroup["PackageVersion"].isNull())
			deployGroupListObject.packageVersion = valueDeployGroupListDeployGroup["PackageVersion"].asString();
		if(!valueDeployGroupListDeployGroup["CpuRequest"].isNull())
			deployGroupListObject.cpuRequest = valueDeployGroupListDeployGroup["CpuRequest"].asString();
		if(!valueDeployGroupListDeployGroup["MemoryRequest"].isNull())
			deployGroupListObject.memoryRequest = valueDeployGroupListDeployGroup["MemoryRequest"].asString();
		if(!valueDeployGroupListDeployGroup["VServerGroupId"].isNull())
			deployGroupListObject.vServerGroupId = valueDeployGroupListDeployGroup["VServerGroupId"].asString();
		if(!valueDeployGroupListDeployGroup["VExtServerGroupId"].isNull())
			deployGroupListObject.vExtServerGroupId = valueDeployGroupListDeployGroup["VExtServerGroupId"].asString();
		deployGroupList_.push_back(deployGroupListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::vector<ListDeployGroupResult::DeployGroup> ListDeployGroupResult::getDeployGroupList()const
{
	return deployGroupList_;
}

std::string ListDeployGroupResult::getMessage()const
{
	return message_;
}

int ListDeployGroupResult::getCode()const
{
	return code_;
}

