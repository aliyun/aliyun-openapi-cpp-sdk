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

#include <alibabacloud/emr/model/CreateFlowJobRequest.h>

using AlibabaCloud::Emr::Model::CreateFlowJobRequest;

CreateFlowJobRequest::CreateFlowJobRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateFlowJob")
{
	setMethod(HttpRequest::Method::Post);
}

CreateFlowJobRequest::~CreateFlowJobRequest()
{}

std::string CreateFlowJobRequest::getRetryPolicy()const
{
	return retryPolicy_;
}

void CreateFlowJobRequest::setRetryPolicy(const std::string& retryPolicy)
{
	retryPolicy_ = retryPolicy;
	setParameter("RetryPolicy", retryPolicy);
}

std::string CreateFlowJobRequest::getRunConf()const
{
	return runConf_;
}

void CreateFlowJobRequest::setRunConf(const std::string& runConf)
{
	runConf_ = runConf;
	setBodyParameter("RunConf", runConf);
}

std::string CreateFlowJobRequest::getDescription()const
{
	return description_;
}

void CreateFlowJobRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string CreateFlowJobRequest::getType()const
{
	return type_;
}

void CreateFlowJobRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string CreateFlowJobRequest::getParamConf()const
{
	return paramConf_;
}

void CreateFlowJobRequest::setParamConf(const std::string& paramConf)
{
	paramConf_ = paramConf;
	setBodyParameter("ParamConf", paramConf);
}

std::vector<CreateFlowJobRequest::ResourceList> CreateFlowJobRequest::getResourceList()const
{
	return resourceList_;
}

void CreateFlowJobRequest::setResourceList(const std::vector<ResourceList>& resourceList)
{
	resourceList_ = resourceList;
	for(int dep1 = 0; dep1!= resourceList.size(); dep1++) {
		auto resourceListObj = resourceList.at(dep1);
		std::string resourceListObjStr = "ResourceList." + std::to_string(dep1 + 1);
		setParameter(resourceListObjStr + ".Path", resourceListObj.path);
		setParameter(resourceListObjStr + ".Alias", resourceListObj.alias);
	}
}

std::string CreateFlowJobRequest::getFailAct()const
{
	return failAct_;
}

void CreateFlowJobRequest::setFailAct(const std::string& failAct)
{
	failAct_ = failAct;
	setParameter("FailAct", failAct);
}

std::string CreateFlowJobRequest::getMode()const
{
	return mode_;
}

void CreateFlowJobRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setParameter("Mode", mode);
}

std::string CreateFlowJobRequest::getMonitorConf()const
{
	return monitorConf_;
}

void CreateFlowJobRequest::setMonitorConf(const std::string& monitorConf)
{
	monitorConf_ = monitorConf;
	setBodyParameter("MonitorConf", monitorConf);
}

std::string CreateFlowJobRequest::getRegionId()const
{
	return regionId_;
}

void CreateFlowJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int CreateFlowJobRequest::getMaxRetry()const
{
	return maxRetry_;
}

void CreateFlowJobRequest::setMaxRetry(int maxRetry)
{
	maxRetry_ = maxRetry;
	setParameter("MaxRetry", std::to_string(maxRetry));
}

std::string CreateFlowJobRequest::getAlertConf()const
{
	return alertConf_;
}

void CreateFlowJobRequest::setAlertConf(const std::string& alertConf)
{
	alertConf_ = alertConf;
	setParameter("AlertConf", alertConf);
}

std::string CreateFlowJobRequest::getProjectId()const
{
	return projectId_;
}

void CreateFlowJobRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

std::string CreateFlowJobRequest::getEnvConf()const
{
	return envConf_;
}

void CreateFlowJobRequest::setEnvConf(const std::string& envConf)
{
	envConf_ = envConf;
	setBodyParameter("EnvConf", envConf);
}

long CreateFlowJobRequest::getMaxRunningTimeSec()const
{
	return maxRunningTimeSec_;
}

void CreateFlowJobRequest::setMaxRunningTimeSec(long maxRunningTimeSec)
{
	maxRunningTimeSec_ = maxRunningTimeSec;
	setParameter("MaxRunningTimeSec", std::to_string(maxRunningTimeSec));
}

std::string CreateFlowJobRequest::getClusterId()const
{
	return clusterId_;
}

void CreateFlowJobRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string CreateFlowJobRequest::getParams()const
{
	return params_;
}

void CreateFlowJobRequest::setParams(const std::string& params)
{
	params_ = params;
	setBodyParameter("Params", params);
}

std::string CreateFlowJobRequest::getCustomVariables()const
{
	return customVariables_;
}

void CreateFlowJobRequest::setCustomVariables(const std::string& customVariables)
{
	customVariables_ = customVariables;
	setBodyParameter("CustomVariables", customVariables);
}

long CreateFlowJobRequest::getRetryInterval()const
{
	return retryInterval_;
}

void CreateFlowJobRequest::setRetryInterval(long retryInterval)
{
	retryInterval_ = retryInterval;
	setParameter("RetryInterval", std::to_string(retryInterval));
}

std::string CreateFlowJobRequest::getName()const
{
	return name_;
}

void CreateFlowJobRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

bool CreateFlowJobRequest::getAdhoc()const
{
	return adhoc_;
}

void CreateFlowJobRequest::setAdhoc(bool adhoc)
{
	adhoc_ = adhoc;
	setParameter("Adhoc", adhoc ? "true" : "false");
}

std::string CreateFlowJobRequest::getParentCategory()const
{
	return parentCategory_;
}

void CreateFlowJobRequest::setParentCategory(const std::string& parentCategory)
{
	parentCategory_ = parentCategory;
	setParameter("ParentCategory", parentCategory);
}

