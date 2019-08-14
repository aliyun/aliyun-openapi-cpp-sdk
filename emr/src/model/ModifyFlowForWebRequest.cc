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

#include <alibabacloud/emr/model/ModifyFlowForWebRequest.h>

using AlibabaCloud::Emr::Model::ModifyFlowForWebRequest;

ModifyFlowForWebRequest::ModifyFlowForWebRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyFlowForWeb")
{}

ModifyFlowForWebRequest::~ModifyFlowForWebRequest()
{}

std::string ModifyFlowForWebRequest::getCronExpr()const
{
	return cronExpr_;
}

void ModifyFlowForWebRequest::setCronExpr(const std::string& cronExpr)
{
	cronExpr_ = cronExpr;
	setCoreParameter("CronExpr", cronExpr);
}

std::string ModifyFlowForWebRequest::getParentFlowList()const
{
	return parentFlowList_;
}

void ModifyFlowForWebRequest::setParentFlowList(const std::string& parentFlowList)
{
	parentFlowList_ = parentFlowList;
	setCoreParameter("ParentFlowList", parentFlowList);
}

std::string ModifyFlowForWebRequest::getAlertDingDingGroupBizId()const
{
	return alertDingDingGroupBizId_;
}

void ModifyFlowForWebRequest::setAlertDingDingGroupBizId(const std::string& alertDingDingGroupBizId)
{
	alertDingDingGroupBizId_ = alertDingDingGroupBizId;
	setCoreParameter("AlertDingDingGroupBizId", alertDingDingGroupBizId);
}

bool ModifyFlowForWebRequest::getPeriodic()const
{
	return periodic_;
}

void ModifyFlowForWebRequest::setPeriodic(bool periodic)
{
	periodic_ = periodic;
	setCoreParameter("Periodic", periodic ? "true" : "false");
}

long ModifyFlowForWebRequest::getStartSchedule()const
{
	return startSchedule_;
}

void ModifyFlowForWebRequest::setStartSchedule(long startSchedule)
{
	startSchedule_ = startSchedule;
	setCoreParameter("StartSchedule", std::to_string(startSchedule));
}

std::string ModifyFlowForWebRequest::getDescription()const
{
	return description_;
}

void ModifyFlowForWebRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ModifyFlowForWebRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyFlowForWebRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string ModifyFlowForWebRequest::getAlertUserGroupBizId()const
{
	return alertUserGroupBizId_;
}

void ModifyFlowForWebRequest::setAlertUserGroupBizId(const std::string& alertUserGroupBizId)
{
	alertUserGroupBizId_ = alertUserGroupBizId;
	setCoreParameter("AlertUserGroupBizId", alertUserGroupBizId);
}

std::string ModifyFlowForWebRequest::getGraph()const
{
	return graph_;
}

void ModifyFlowForWebRequest::setGraph(const std::string& graph)
{
	graph_ = graph;
	setCoreParameter("Graph", graph);
}

std::string ModifyFlowForWebRequest::getHostName()const
{
	return hostName_;
}

void ModifyFlowForWebRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setCoreParameter("HostName", hostName);
}

std::string ModifyFlowForWebRequest::getRegionId()const
{
	return regionId_;
}

void ModifyFlowForWebRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool ModifyFlowForWebRequest::getCreateCluster()const
{
	return createCluster_;
}

void ModifyFlowForWebRequest::setCreateCluster(bool createCluster)
{
	createCluster_ = createCluster;
	setCoreParameter("CreateCluster", createCluster ? "true" : "false");
}

std::string ModifyFlowForWebRequest::getName()const
{
	return name_;
}

void ModifyFlowForWebRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

long ModifyFlowForWebRequest::getEndSchedule()const
{
	return endSchedule_;
}

void ModifyFlowForWebRequest::setEndSchedule(long endSchedule)
{
	endSchedule_ = endSchedule;
	setCoreParameter("EndSchedule", std::to_string(endSchedule));
}

std::string ModifyFlowForWebRequest::getId()const
{
	return id_;
}

void ModifyFlowForWebRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string ModifyFlowForWebRequest::getAlertConf()const
{
	return alertConf_;
}

void ModifyFlowForWebRequest::setAlertConf(const std::string& alertConf)
{
	alertConf_ = alertConf;
	setCoreParameter("AlertConf", alertConf);
}

std::string ModifyFlowForWebRequest::getProjectId()const
{
	return projectId_;
}

void ModifyFlowForWebRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string ModifyFlowForWebRequest::getStatus()const
{
	return status_;
}

void ModifyFlowForWebRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

std::string ModifyFlowForWebRequest::getParentCategory()const
{
	return parentCategory_;
}

void ModifyFlowForWebRequest::setParentCategory(const std::string& parentCategory)
{
	parentCategory_ = parentCategory;
	setCoreParameter("ParentCategory", parentCategory);
}

