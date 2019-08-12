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

#include <alibabacloud/emr/model/ModifyFlowJobRequest.h>

using AlibabaCloud::Emr::Model::ModifyFlowJobRequest;

ModifyFlowJobRequest::ModifyFlowJobRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyFlowJob")
{}

ModifyFlowJobRequest::~ModifyFlowJobRequest()
{}

std::string ModifyFlowJobRequest::getRunConf()const
{
	return runConf_;
}

void ModifyFlowJobRequest::setRunConf(const std::string& runConf)
{
	runConf_ = runConf;
	setCoreParameter("RunConf", std::to_string(runConf));
}

std::string ModifyFlowJobRequest::getEnvConf()const
{
	return envConf_;
}

void ModifyFlowJobRequest::setEnvConf(const std::string& envConf)
{
	envConf_ = envConf;
	setCoreParameter("EnvConf", std::to_string(envConf));
}

std::string ModifyFlowJobRequest::getDescription()const
{
	return description_;
}

void ModifyFlowJobRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string ModifyFlowJobRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyFlowJobRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

std::string ModifyFlowJobRequest::getParams()const
{
	return params_;
}

void ModifyFlowJobRequest::setParams(const std::string& params)
{
	params_ = params;
	setCoreParameter("Params", std::to_string(params));
}

std::string ModifyFlowJobRequest::getParamConf()const
{
	return paramConf_;
}

void ModifyFlowJobRequest::setParamConf(const std::string& paramConf)
{
	paramConf_ = paramConf;
	setCoreParameter("ParamConf", std::to_string(paramConf));
}

std::vector<ModifyFlowJobRequest::ResourceList> ModifyFlowJobRequest::getResourceList()const
{
	return resourceList_;
}

void ModifyFlowJobRequest::setResourceList(const std::vector<ResourceList>& resourceList)
{
	resourceList_ = resourceList;
	int i = 0;
	for(int i = 0; i!= resourceList.size(); i++)	{
		auto obj = resourceList.at(i);
		std::string str ="ResourceList."+ std::to_string(i);
		setCoreParameter(str + ".Path", std::to_string(obj.path));
		setCoreParameter(str + ".Alias", std::to_string(obj.alias));
	}
}

std::string ModifyFlowJobRequest::getFailAct()const
{
	return failAct_;
}

void ModifyFlowJobRequest::setFailAct(const std::string& failAct)
{
	failAct_ = failAct;
	setCoreParameter("FailAct", std::to_string(failAct));
}

std::string ModifyFlowJobRequest::getCustomVariables()const
{
	return customVariables_;
}

void ModifyFlowJobRequest::setCustomVariables(const std::string& customVariables)
{
	customVariables_ = customVariables;
	setCoreParameter("CustomVariables", std::to_string(customVariables));
}

std::string ModifyFlowJobRequest::getMode()const
{
	return mode_;
}

void ModifyFlowJobRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setCoreParameter("Mode", std::to_string(mode));
}

long ModifyFlowJobRequest::getRetryInterval()const
{
	return retryInterval_;
}

void ModifyFlowJobRequest::setRetryInterval(long retryInterval)
{
	retryInterval_ = retryInterval;
	setCoreParameter("RetryInterval", retryInterval);
}

std::string ModifyFlowJobRequest::getMonitorConf()const
{
	return monitorConf_;
}

void ModifyFlowJobRequest::setMonitorConf(const std::string& monitorConf)
{
	monitorConf_ = monitorConf;
	setCoreParameter("MonitorConf", std::to_string(monitorConf));
}

std::string ModifyFlowJobRequest::getRegionId()const
{
	return regionId_;
}

void ModifyFlowJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyFlowJobRequest::getName()const
{
	return name_;
}

void ModifyFlowJobRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string ModifyFlowJobRequest::getId()const
{
	return id_;
}

void ModifyFlowJobRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

int ModifyFlowJobRequest::getMaxRetry()const
{
	return maxRetry_;
}

void ModifyFlowJobRequest::setMaxRetry(int maxRetry)
{
	maxRetry_ = maxRetry;
	setCoreParameter("MaxRetry", maxRetry);
}

std::string ModifyFlowJobRequest::getAlertConf()const
{
	return alertConf_;
}

void ModifyFlowJobRequest::setAlertConf(const std::string& alertConf)
{
	alertConf_ = alertConf;
	setCoreParameter("AlertConf", std::to_string(alertConf));
}

std::string ModifyFlowJobRequest::getProjectId()const
{
	return projectId_;
}

void ModifyFlowJobRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", std::to_string(projectId));
}

