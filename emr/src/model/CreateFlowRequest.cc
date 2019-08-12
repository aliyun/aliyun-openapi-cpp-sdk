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

#include <alibabacloud/emr/model/CreateFlowRequest.h>

using AlibabaCloud::Emr::Model::CreateFlowRequest;

CreateFlowRequest::CreateFlowRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateFlow")
{}

CreateFlowRequest::~CreateFlowRequest()
{}

std::string CreateFlowRequest::getCronExpr()const
{
	return cronExpr_;
}

void CreateFlowRequest::setCronExpr(const std::string& cronExpr)
{
	cronExpr_ = cronExpr;
	setCoreParameter("CronExpr", cronExpr);
}

std::string CreateFlowRequest::getParentFlowList()const
{
	return parentFlowList_;
}

void CreateFlowRequest::setParentFlowList(const std::string& parentFlowList)
{
	parentFlowList_ = parentFlowList;
	setCoreParameter("ParentFlowList", parentFlowList);
}

std::string CreateFlowRequest::getAlertDingDingGroupBizId()const
{
	return alertDingDingGroupBizId_;
}

void CreateFlowRequest::setAlertDingDingGroupBizId(const std::string& alertDingDingGroupBizId)
{
	alertDingDingGroupBizId_ = alertDingDingGroupBizId;
	setCoreParameter("AlertDingDingGroupBizId", alertDingDingGroupBizId);
}

long CreateFlowRequest::getStartSchedule()const
{
	return startSchedule_;
}

void CreateFlowRequest::setStartSchedule(long startSchedule)
{
	startSchedule_ = startSchedule;
	setCoreParameter("StartSchedule", std::to_string(startSchedule));
}

std::string CreateFlowRequest::getDescription()const
{
	return description_;
}

void CreateFlowRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateFlowRequest::getClusterId()const
{
	return clusterId_;
}

void CreateFlowRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string CreateFlowRequest::getAlertUserGroupBizId()const
{
	return alertUserGroupBizId_;
}

void CreateFlowRequest::setAlertUserGroupBizId(const std::string& alertUserGroupBizId)
{
	alertUserGroupBizId_ = alertUserGroupBizId;
	setCoreParameter("AlertUserGroupBizId", alertUserGroupBizId);
}

std::string CreateFlowRequest::getHostName()const
{
	return hostName_;
}

void CreateFlowRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setCoreParameter("HostName", hostName);
}

std::string CreateFlowRequest::getApplication()const
{
	return application_;
}

void CreateFlowRequest::setApplication(const std::string& application)
{
	application_ = application;
	setCoreParameter("Application", application);
}

std::string CreateFlowRequest::getRegionId()const
{
	return regionId_;
}

void CreateFlowRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool CreateFlowRequest::getCreateCluster()const
{
	return createCluster_;
}

void CreateFlowRequest::setCreateCluster(bool createCluster)
{
	createCluster_ = createCluster;
	setCoreParameter("CreateCluster", createCluster ? "true" : "false");
}

std::string CreateFlowRequest::getName()const
{
	return name_;
}

void CreateFlowRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

long CreateFlowRequest::getEndSchedule()const
{
	return endSchedule_;
}

void CreateFlowRequest::setEndSchedule(long endSchedule)
{
	endSchedule_ = endSchedule;
	setCoreParameter("EndSchedule", std::to_string(endSchedule));
}

std::string CreateFlowRequest::getAlertConf()const
{
	return alertConf_;
}

void CreateFlowRequest::setAlertConf(const std::string& alertConf)
{
	alertConf_ = alertConf;
	setCoreParameter("AlertConf", alertConf);
}

std::string CreateFlowRequest::getProjectId()const
{
	return projectId_;
}

void CreateFlowRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string CreateFlowRequest::getParentCategory()const
{
	return parentCategory_;
}

void CreateFlowRequest::setParentCategory(const std::string& parentCategory)
{
	parentCategory_ = parentCategory;
	setCoreParameter("ParentCategory", parentCategory);
}

