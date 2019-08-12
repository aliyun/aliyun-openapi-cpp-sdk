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
{}

CreateFlowJobRequest::~CreateFlowJobRequest()
{}

std::string CreateFlowJobRequest::getRunConf()const
{
	return runConf_;
}

void CreateFlowJobRequest::setRunConf(const std::string& runConf)
{
	runConf_ = runConf;
	setCoreParameter("RunConf", runConf);
}

std::string CreateFlowJobRequest::getEnvConf()const
{
	return envConf_;
}

void CreateFlowJobRequest::setEnvConf(const std::string& envConf)
{
	envConf_ = envConf;
	setCoreParameter("EnvConf", envConf);
}

std::string CreateFlowJobRequest::getDescription()const
{
	return description_;
}

void CreateFlowJobRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateFlowJobRequest::getClusterId()const
{
	return clusterId_;
}

void CreateFlowJobRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string CreateFlowJobRequest::getType()const
{
	return type_;
}

void CreateFlowJobRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string CreateFlowJobRequest::getParams()const
{
	return params_;
}

void CreateFlowJobRequest::setParams(const std::string& params)
{
	params_ = params;
	setCoreParameter("Params", params);
}

std::string CreateFlowJobRequest::getParamConf()const
{
	return paramConf_;
}

void CreateFlowJobRequest::setParamConf(const std::string& paramConf)
{
	paramConf_ = paramConf;
	setCoreParameter("ParamConf", paramConf);
}

std::vector<CreateFlowJobRequest::ResourceList> CreateFlowJobRequest::getResourceList()const
{
	return resourceList_;
}

void CreateFlowJobRequest::setResourceList(const std::vector<ResourceList>& resourceList)
{
	resourceList_ = resourceList;
	int i = 0;
	for(int i = 0; i!= resourceList.size(); i++)	{
		auto obj = resourceList.at(i);
		std::string str ="ResourceList."+ std::to_string(i);
		setCoreParameter(str + ".Path", obj.path);
		setCoreParameter(str + ".Alias", obj.alias);
	}
}

std::string CreateFlowJobRequest::getFailAct()const
{
	return failAct_;
}

void CreateFlowJobRequest::setFailAct(const std::string& failAct)
{
	failAct_ = failAct;
	setCoreParameter("FailAct", failAct);
}

std::string CreateFlowJobRequest::getMode()const
{
	return mode_;
}

void CreateFlowJobRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setCoreParameter("Mode", mode);
}

long CreateFlowJobRequest::getRetryInterval()const
{
	return retryInterval_;
}

void CreateFlowJobRequest::setRetryInterval(long retryInterval)
{
	retryInterval_ = retryInterval;
	setCoreParameter("RetryInterval", std::to_string(retryInterval));
}

std::string CreateFlowJobRequest::getMonitorConf()const
{
	return monitorConf_;
}

void CreateFlowJobRequest::setMonitorConf(const std::string& monitorConf)
{
	monitorConf_ = monitorConf;
	setCoreParameter("MonitorConf", monitorConf);
}

std::string CreateFlowJobRequest::getRegionId()const
{
	return regionId_;
}

void CreateFlowJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateFlowJobRequest::getName()const
{
	return name_;
}

void CreateFlowJobRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

int CreateFlowJobRequest::getMaxRetry()const
{
	return maxRetry_;
}

void CreateFlowJobRequest::setMaxRetry(int maxRetry)
{
	maxRetry_ = maxRetry;
	setCoreParameter("MaxRetry", std::to_string(maxRetry));
}

bool CreateFlowJobRequest::getAdhoc()const
{
	return adhoc_;
}

void CreateFlowJobRequest::setAdhoc(bool adhoc)
{
	adhoc_ = adhoc;
	setCoreParameter("Adhoc", adhoc ? "true" : "false");
}

std::string CreateFlowJobRequest::getAlertConf()const
{
	return alertConf_;
}

void CreateFlowJobRequest::setAlertConf(const std::string& alertConf)
{
	alertConf_ = alertConf;
	setCoreParameter("AlertConf", alertConf);
}

std::string CreateFlowJobRequest::getProjectId()const
{
	return projectId_;
}

void CreateFlowJobRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string CreateFlowJobRequest::getParentCategory()const
{
	return parentCategory_;
}

void CreateFlowJobRequest::setParentCategory(const std::string& parentCategory)
{
	parentCategory_ = parentCategory;
	setCoreParameter("ParentCategory", parentCategory);
}

