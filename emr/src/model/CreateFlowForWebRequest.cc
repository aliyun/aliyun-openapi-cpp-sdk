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

#include <alibabacloud/emr/model/CreateFlowForWebRequest.h>

using AlibabaCloud::Emr::Model::CreateFlowForWebRequest;

CreateFlowForWebRequest::CreateFlowForWebRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateFlowForWeb")
{}

CreateFlowForWebRequest::~CreateFlowForWebRequest()
{}

std::string CreateFlowForWebRequest::getCronExpr()const
{
	return cronExpr_;
}

void CreateFlowForWebRequest::setCronExpr(const std::string& cronExpr)
{
	cronExpr_ = cronExpr;
	setCoreParameter("CronExpr", std::to_string(cronExpr));
}

std::string CreateFlowForWebRequest::getParentFlowList()const
{
	return parentFlowList_;
}

void CreateFlowForWebRequest::setParentFlowList(const std::string& parentFlowList)
{
	parentFlowList_ = parentFlowList;
	setCoreParameter("ParentFlowList", std::to_string(parentFlowList));
}

std::string CreateFlowForWebRequest::getAlertDingDingGroupBizId()const
{
	return alertDingDingGroupBizId_;
}

void CreateFlowForWebRequest::setAlertDingDingGroupBizId(const std::string& alertDingDingGroupBizId)
{
	alertDingDingGroupBizId_ = alertDingDingGroupBizId;
	setCoreParameter("AlertDingDingGroupBizId", std::to_string(alertDingDingGroupBizId));
}

long CreateFlowForWebRequest::getStartSchedule()const
{
	return startSchedule_;
}

void CreateFlowForWebRequest::setStartSchedule(long startSchedule)
{
	startSchedule_ = startSchedule;
	setCoreParameter("StartSchedule", startSchedule);
}

std::string CreateFlowForWebRequest::getDescription()const
{
	return description_;
}

void CreateFlowForWebRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string CreateFlowForWebRequest::getClusterId()const
{
	return clusterId_;
}

void CreateFlowForWebRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

std::string CreateFlowForWebRequest::getAlertUserGroupBizId()const
{
	return alertUserGroupBizId_;
}

void CreateFlowForWebRequest::setAlertUserGroupBizId(const std::string& alertUserGroupBizId)
{
	alertUserGroupBizId_ = alertUserGroupBizId;
	setCoreParameter("AlertUserGroupBizId", std::to_string(alertUserGroupBizId));
}

std::string CreateFlowForWebRequest::getGraph()const
{
	return graph_;
}

void CreateFlowForWebRequest::setGraph(const std::string& graph)
{
	graph_ = graph;
	setCoreParameter("Graph", std::to_string(graph));
}

std::string CreateFlowForWebRequest::getHostName()const
{
	return hostName_;
}

void CreateFlowForWebRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setCoreParameter("HostName", std::to_string(hostName));
}

std::string CreateFlowForWebRequest::getRegionId()const
{
	return regionId_;
}

void CreateFlowForWebRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

bool CreateFlowForWebRequest::getCreateCluster()const
{
	return createCluster_;
}

void CreateFlowForWebRequest::setCreateCluster(bool createCluster)
{
	createCluster_ = createCluster;
	setCoreParameter("CreateCluster", createCluster ? "true" : "false");
}

std::string CreateFlowForWebRequest::getName()const
{
	return name_;
}

void CreateFlowForWebRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

long CreateFlowForWebRequest::getEndSchedule()const
{
	return endSchedule_;
}

void CreateFlowForWebRequest::setEndSchedule(long endSchedule)
{
	endSchedule_ = endSchedule;
	setCoreParameter("EndSchedule", endSchedule);
}

std::string CreateFlowForWebRequest::getAlertConf()const
{
	return alertConf_;
}

void CreateFlowForWebRequest::setAlertConf(const std::string& alertConf)
{
	alertConf_ = alertConf;
	setCoreParameter("AlertConf", std::to_string(alertConf));
}

std::string CreateFlowForWebRequest::getProjectId()const
{
	return projectId_;
}

void CreateFlowForWebRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", std::to_string(projectId));
}

std::string CreateFlowForWebRequest::getParentCategory()const
{
	return parentCategory_;
}

void CreateFlowForWebRequest::setParentCategory(const std::string& parentCategory)
{
	parentCategory_ = parentCategory;
	setCoreParameter("ParentCategory", std::to_string(parentCategory));
}

