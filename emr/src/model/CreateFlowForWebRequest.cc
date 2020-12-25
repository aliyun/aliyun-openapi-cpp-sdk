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
{
	setMethod(HttpRequest::Method::Post);
}

CreateFlowForWebRequest::~CreateFlowForWebRequest()
{}

std::string CreateFlowForWebRequest::getCronExpr()const
{
	return cronExpr_;
}

void CreateFlowForWebRequest::setCronExpr(const std::string& cronExpr)
{
	cronExpr_ = cronExpr;
	setParameter("CronExpr", cronExpr);
}

std::string CreateFlowForWebRequest::getDescription()const
{
	return description_;
}

void CreateFlowForWebRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateFlowForWebRequest::getAlertUserGroupBizId()const
{
	return alertUserGroupBizId_;
}

void CreateFlowForWebRequest::setAlertUserGroupBizId(const std::string& alertUserGroupBizId)
{
	alertUserGroupBizId_ = alertUserGroupBizId;
	setParameter("AlertUserGroupBizId", alertUserGroupBizId);
}

std::string CreateFlowForWebRequest::getLifecycle()const
{
	return lifecycle_;
}

void CreateFlowForWebRequest::setLifecycle(const std::string& lifecycle)
{
	lifecycle_ = lifecycle;
	setParameter("Lifecycle", lifecycle);
}

std::string CreateFlowForWebRequest::getHostName()const
{
	return hostName_;
}

void CreateFlowForWebRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setParameter("HostName", hostName);
}

std::string CreateFlowForWebRequest::getRegionId()const
{
	return regionId_;
}

void CreateFlowForWebRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool CreateFlowForWebRequest::getCreateCluster()const
{
	return createCluster_;
}

void CreateFlowForWebRequest::setCreateCluster(bool createCluster)
{
	createCluster_ = createCluster;
	setParameter("CreateCluster", createCluster ? "true" : "false");
}

long CreateFlowForWebRequest::getEndSchedule()const
{
	return endSchedule_;
}

void CreateFlowForWebRequest::setEndSchedule(long endSchedule)
{
	endSchedule_ = endSchedule;
	setParameter("EndSchedule", std::to_string(endSchedule));
}

std::string CreateFlowForWebRequest::getAlertConf()const
{
	return alertConf_;
}

void CreateFlowForWebRequest::setAlertConf(const std::string& alertConf)
{
	alertConf_ = alertConf;
	setParameter("AlertConf", alertConf);
}

std::string CreateFlowForWebRequest::getProjectId()const
{
	return projectId_;
}

void CreateFlowForWebRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

std::string CreateFlowForWebRequest::getParentFlowList()const
{
	return parentFlowList_;
}

void CreateFlowForWebRequest::setParentFlowList(const std::string& parentFlowList)
{
	parentFlowList_ = parentFlowList;
	setParameter("ParentFlowList", parentFlowList);
}

std::string CreateFlowForWebRequest::getLogArchiveLocation()const
{
	return logArchiveLocation_;
}

void CreateFlowForWebRequest::setLogArchiveLocation(const std::string& logArchiveLocation)
{
	logArchiveLocation_ = logArchiveLocation;
	setParameter("LogArchiveLocation", logArchiveLocation);
}

std::string CreateFlowForWebRequest::getAlertDingDingGroupBizId()const
{
	return alertDingDingGroupBizId_;
}

void CreateFlowForWebRequest::setAlertDingDingGroupBizId(const std::string& alertDingDingGroupBizId)
{
	alertDingDingGroupBizId_ = alertDingDingGroupBizId;
	setParameter("AlertDingDingGroupBizId", alertDingDingGroupBizId);
}

long CreateFlowForWebRequest::getStartSchedule()const
{
	return startSchedule_;
}

void CreateFlowForWebRequest::setStartSchedule(long startSchedule)
{
	startSchedule_ = startSchedule;
	setParameter("StartSchedule", std::to_string(startSchedule));
}

std::string CreateFlowForWebRequest::getClusterId()const
{
	return clusterId_;
}

void CreateFlowForWebRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string CreateFlowForWebRequest::getGraph()const
{
	return graph_;
}

void CreateFlowForWebRequest::setGraph(const std::string& graph)
{
	graph_ = graph;
	setParameter("Graph", graph);
}

std::string CreateFlowForWebRequest::getName()const
{
	return name_;
}

void CreateFlowForWebRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateFlowForWebRequest::get_Namespace()const
{
	return _namespace_;
}

void CreateFlowForWebRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

std::string CreateFlowForWebRequest::getParentCategory()const
{
	return parentCategory_;
}

void CreateFlowForWebRequest::setParentCategory(const std::string& parentCategory)
{
	parentCategory_ = parentCategory;
	setParameter("ParentCategory", parentCategory);
}

