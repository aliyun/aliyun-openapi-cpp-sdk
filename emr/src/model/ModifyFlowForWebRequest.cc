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
{
	setMethod(HttpRequest::Method::Post);
}

ModifyFlowForWebRequest::~ModifyFlowForWebRequest()
{}

std::string ModifyFlowForWebRequest::getCronExpr()const
{
	return cronExpr_;
}

void ModifyFlowForWebRequest::setCronExpr(const std::string& cronExpr)
{
	cronExpr_ = cronExpr;
	setParameter("CronExpr", cronExpr);
}

bool ModifyFlowForWebRequest::getPeriodic()const
{
	return periodic_;
}

void ModifyFlowForWebRequest::setPeriodic(bool periodic)
{
	periodic_ = periodic;
	setParameter("Periodic", periodic ? "true" : "false");
}

std::string ModifyFlowForWebRequest::getDescription()const
{
	return description_;
}

void ModifyFlowForWebRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifyFlowForWebRequest::getAlertUserGroupBizId()const
{
	return alertUserGroupBizId_;
}

void ModifyFlowForWebRequest::setAlertUserGroupBizId(const std::string& alertUserGroupBizId)
{
	alertUserGroupBizId_ = alertUserGroupBizId;
	setParameter("AlertUserGroupBizId", alertUserGroupBizId);
}

std::string ModifyFlowForWebRequest::getLifecycle()const
{
	return lifecycle_;
}

void ModifyFlowForWebRequest::setLifecycle(const std::string& lifecycle)
{
	lifecycle_ = lifecycle;
	setParameter("Lifecycle", lifecycle);
}

std::string ModifyFlowForWebRequest::getHostName()const
{
	return hostName_;
}

void ModifyFlowForWebRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setParameter("HostName", hostName);
}

std::string ModifyFlowForWebRequest::getRegionId()const
{
	return regionId_;
}

void ModifyFlowForWebRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool ModifyFlowForWebRequest::getCreateCluster()const
{
	return createCluster_;
}

void ModifyFlowForWebRequest::setCreateCluster(bool createCluster)
{
	createCluster_ = createCluster;
	setParameter("CreateCluster", createCluster ? "true" : "false");
}

long ModifyFlowForWebRequest::getEndSchedule()const
{
	return endSchedule_;
}

void ModifyFlowForWebRequest::setEndSchedule(long endSchedule)
{
	endSchedule_ = endSchedule;
	setParameter("EndSchedule", std::to_string(endSchedule));
}

std::string ModifyFlowForWebRequest::getId()const
{
	return id_;
}

void ModifyFlowForWebRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string ModifyFlowForWebRequest::getAlertConf()const
{
	return alertConf_;
}

void ModifyFlowForWebRequest::setAlertConf(const std::string& alertConf)
{
	alertConf_ = alertConf;
	setParameter("AlertConf", alertConf);
}

std::string ModifyFlowForWebRequest::getProjectId()const
{
	return projectId_;
}

void ModifyFlowForWebRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

std::string ModifyFlowForWebRequest::getParentFlowList()const
{
	return parentFlowList_;
}

void ModifyFlowForWebRequest::setParentFlowList(const std::string& parentFlowList)
{
	parentFlowList_ = parentFlowList;
	setParameter("ParentFlowList", parentFlowList);
}

std::string ModifyFlowForWebRequest::getLogArchiveLocation()const
{
	return logArchiveLocation_;
}

void ModifyFlowForWebRequest::setLogArchiveLocation(const std::string& logArchiveLocation)
{
	logArchiveLocation_ = logArchiveLocation;
	setParameter("LogArchiveLocation", logArchiveLocation);
}

std::string ModifyFlowForWebRequest::getAlertDingDingGroupBizId()const
{
	return alertDingDingGroupBizId_;
}

void ModifyFlowForWebRequest::setAlertDingDingGroupBizId(const std::string& alertDingDingGroupBizId)
{
	alertDingDingGroupBizId_ = alertDingDingGroupBizId;
	setParameter("AlertDingDingGroupBizId", alertDingDingGroupBizId);
}

long ModifyFlowForWebRequest::getStartSchedule()const
{
	return startSchedule_;
}

void ModifyFlowForWebRequest::setStartSchedule(long startSchedule)
{
	startSchedule_ = startSchedule;
	setParameter("StartSchedule", std::to_string(startSchedule));
}

std::string ModifyFlowForWebRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyFlowForWebRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ModifyFlowForWebRequest::getGraph()const
{
	return graph_;
}

void ModifyFlowForWebRequest::setGraph(const std::string& graph)
{
	graph_ = graph;
	setParameter("Graph", graph);
}

std::string ModifyFlowForWebRequest::getName()const
{
	return name_;
}

void ModifyFlowForWebRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ModifyFlowForWebRequest::get_Namespace()const
{
	return _namespace_;
}

void ModifyFlowForWebRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

std::string ModifyFlowForWebRequest::getStatus()const
{
	return status_;
}

void ModifyFlowForWebRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

std::string ModifyFlowForWebRequest::getParentCategory()const
{
	return parentCategory_;
}

void ModifyFlowForWebRequest::setParentCategory(const std::string& parentCategory)
{
	parentCategory_ = parentCategory;
	setParameter("ParentCategory", parentCategory);
}

