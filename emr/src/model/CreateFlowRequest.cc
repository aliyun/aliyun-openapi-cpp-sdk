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
{
	setMethod(HttpRequest::Method::Post);
}

CreateFlowRequest::~CreateFlowRequest()
{}

std::string CreateFlowRequest::getCronExpr()const
{
	return cronExpr_;
}

void CreateFlowRequest::setCronExpr(const std::string& cronExpr)
{
	cronExpr_ = cronExpr;
	setParameter("CronExpr", cronExpr);
}

std::string CreateFlowRequest::getDescription()const
{
	return description_;
}

void CreateFlowRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateFlowRequest::getAlertUserGroupBizId()const
{
	return alertUserGroupBizId_;
}

void CreateFlowRequest::setAlertUserGroupBizId(const std::string& alertUserGroupBizId)
{
	alertUserGroupBizId_ = alertUserGroupBizId;
	setParameter("AlertUserGroupBizId", alertUserGroupBizId);
}

std::string CreateFlowRequest::getLifecycle()const
{
	return lifecycle_;
}

void CreateFlowRequest::setLifecycle(const std::string& lifecycle)
{
	lifecycle_ = lifecycle;
	setParameter("Lifecycle", lifecycle);
}

std::string CreateFlowRequest::getHostName()const
{
	return hostName_;
}

void CreateFlowRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setParameter("HostName", hostName);
}

std::string CreateFlowRequest::getRegionId()const
{
	return regionId_;
}

void CreateFlowRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool CreateFlowRequest::getCreateCluster()const
{
	return createCluster_;
}

void CreateFlowRequest::setCreateCluster(bool createCluster)
{
	createCluster_ = createCluster;
	setParameter("CreateCluster", createCluster ? "true" : "false");
}

long CreateFlowRequest::getEndSchedule()const
{
	return endSchedule_;
}

void CreateFlowRequest::setEndSchedule(long endSchedule)
{
	endSchedule_ = endSchedule;
	setParameter("EndSchedule", std::to_string(endSchedule));
}

std::string CreateFlowRequest::getAlertConf()const
{
	return alertConf_;
}

void CreateFlowRequest::setAlertConf(const std::string& alertConf)
{
	alertConf_ = alertConf;
	setParameter("AlertConf", alertConf);
}

std::string CreateFlowRequest::getProjectId()const
{
	return projectId_;
}

void CreateFlowRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

std::string CreateFlowRequest::getParentFlowList()const
{
	return parentFlowList_;
}

void CreateFlowRequest::setParentFlowList(const std::string& parentFlowList)
{
	parentFlowList_ = parentFlowList;
	setParameter("ParentFlowList", parentFlowList);
}

std::string CreateFlowRequest::getLogArchiveLocation()const
{
	return logArchiveLocation_;
}

void CreateFlowRequest::setLogArchiveLocation(const std::string& logArchiveLocation)
{
	logArchiveLocation_ = logArchiveLocation;
	setParameter("LogArchiveLocation", logArchiveLocation);
}

std::string CreateFlowRequest::getAlertDingDingGroupBizId()const
{
	return alertDingDingGroupBizId_;
}

void CreateFlowRequest::setAlertDingDingGroupBizId(const std::string& alertDingDingGroupBizId)
{
	alertDingDingGroupBizId_ = alertDingDingGroupBizId;
	setParameter("AlertDingDingGroupBizId", alertDingDingGroupBizId);
}

long CreateFlowRequest::getStartSchedule()const
{
	return startSchedule_;
}

void CreateFlowRequest::setStartSchedule(long startSchedule)
{
	startSchedule_ = startSchedule;
	setParameter("StartSchedule", std::to_string(startSchedule));
}

std::string CreateFlowRequest::getClusterId()const
{
	return clusterId_;
}

void CreateFlowRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string CreateFlowRequest::getApplication()const
{
	return application_;
}

void CreateFlowRequest::setApplication(const std::string& application)
{
	application_ = application;
	setParameter("Application", application);
}

std::string CreateFlowRequest::getName()const
{
	return name_;
}

void CreateFlowRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateFlowRequest::get_Namespace()const
{
	return _namespace_;
}

void CreateFlowRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

std::string CreateFlowRequest::getParentCategory()const
{
	return parentCategory_;
}

void CreateFlowRequest::setParentCategory(const std::string& parentCategory)
{
	parentCategory_ = parentCategory;
	setParameter("ParentCategory", parentCategory);
}

