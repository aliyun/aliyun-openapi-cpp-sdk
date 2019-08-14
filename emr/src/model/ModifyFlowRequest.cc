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

#include <alibabacloud/emr/model/ModifyFlowRequest.h>

using AlibabaCloud::Emr::Model::ModifyFlowRequest;

ModifyFlowRequest::ModifyFlowRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyFlow")
{}

ModifyFlowRequest::~ModifyFlowRequest()
{}

std::string ModifyFlowRequest::getCronExpr()const
{
	return cronExpr_;
}

void ModifyFlowRequest::setCronExpr(const std::string& cronExpr)
{
	cronExpr_ = cronExpr;
	setCoreParameter("CronExpr", cronExpr);
}

std::string ModifyFlowRequest::getParentFlowList()const
{
	return parentFlowList_;
}

void ModifyFlowRequest::setParentFlowList(const std::string& parentFlowList)
{
	parentFlowList_ = parentFlowList;
	setCoreParameter("ParentFlowList", parentFlowList);
}

std::string ModifyFlowRequest::getAlertDingDingGroupBizId()const
{
	return alertDingDingGroupBizId_;
}

void ModifyFlowRequest::setAlertDingDingGroupBizId(const std::string& alertDingDingGroupBizId)
{
	alertDingDingGroupBizId_ = alertDingDingGroupBizId;
	setCoreParameter("AlertDingDingGroupBizId", alertDingDingGroupBizId);
}

bool ModifyFlowRequest::getPeriodic()const
{
	return periodic_;
}

void ModifyFlowRequest::setPeriodic(bool periodic)
{
	periodic_ = periodic;
	setCoreParameter("Periodic", periodic ? "true" : "false");
}

long ModifyFlowRequest::getStartSchedule()const
{
	return startSchedule_;
}

void ModifyFlowRequest::setStartSchedule(long startSchedule)
{
	startSchedule_ = startSchedule;
	setCoreParameter("StartSchedule", std::to_string(startSchedule));
}

std::string ModifyFlowRequest::getDescription()const
{
	return description_;
}

void ModifyFlowRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ModifyFlowRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyFlowRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string ModifyFlowRequest::getAlertUserGroupBizId()const
{
	return alertUserGroupBizId_;
}

void ModifyFlowRequest::setAlertUserGroupBizId(const std::string& alertUserGroupBizId)
{
	alertUserGroupBizId_ = alertUserGroupBizId;
	setCoreParameter("AlertUserGroupBizId", alertUserGroupBizId);
}

std::string ModifyFlowRequest::getHostName()const
{
	return hostName_;
}

void ModifyFlowRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setCoreParameter("HostName", hostName);
}

std::string ModifyFlowRequest::getApplication()const
{
	return application_;
}

void ModifyFlowRequest::setApplication(const std::string& application)
{
	application_ = application;
	setCoreParameter("Application", application);
}

std::string ModifyFlowRequest::getRegionId()const
{
	return regionId_;
}

void ModifyFlowRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool ModifyFlowRequest::getCreateCluster()const
{
	return createCluster_;
}

void ModifyFlowRequest::setCreateCluster(bool createCluster)
{
	createCluster_ = createCluster;
	setCoreParameter("CreateCluster", createCluster ? "true" : "false");
}

std::string ModifyFlowRequest::getName()const
{
	return name_;
}

void ModifyFlowRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

long ModifyFlowRequest::getEndSchedule()const
{
	return endSchedule_;
}

void ModifyFlowRequest::setEndSchedule(long endSchedule)
{
	endSchedule_ = endSchedule;
	setCoreParameter("EndSchedule", std::to_string(endSchedule));
}

std::string ModifyFlowRequest::getId()const
{
	return id_;
}

void ModifyFlowRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string ModifyFlowRequest::getAlertConf()const
{
	return alertConf_;
}

void ModifyFlowRequest::setAlertConf(const std::string& alertConf)
{
	alertConf_ = alertConf;
	setCoreParameter("AlertConf", alertConf);
}

std::string ModifyFlowRequest::getProjectId()const
{
	return projectId_;
}

void ModifyFlowRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string ModifyFlowRequest::getStatus()const
{
	return status_;
}

void ModifyFlowRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

std::string ModifyFlowRequest::getParentCategory()const
{
	return parentCategory_;
}

void ModifyFlowRequest::setParentCategory(const std::string& parentCategory)
{
	parentCategory_ = parentCategory;
	setCoreParameter("ParentCategory", parentCategory);
}

