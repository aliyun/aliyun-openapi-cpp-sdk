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

#include <alibabacloud/emr/model/DescribeFlowJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeFlowJobResult::DescribeFlowJobResult() :
	ServiceResult()
{}

DescribeFlowJobResult::DescribeFlowJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFlowJobResult::~DescribeFlowJobResult()
{}

void DescribeFlowJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourceListNode = value["ResourceList"]["Resource"];
	for (auto valueResourceListResource : allResourceListNode)
	{
		Resource resourceListObject;
		if(!valueResourceListResource["Path"].isNull())
			resourceListObject.path = valueResourceListResource["Path"].asString();
		if(!valueResourceListResource["Alias"].isNull())
			resourceListObject.alias = valueResourceListResource["Alias"].asString();
		resourceList_.push_back(resourceListObject);
	}
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["GmtCreate"].isNull())
		gmtCreate_ = std::stol(value["GmtCreate"].asString());
	if(!value["GmtModified"].isNull())
		gmtModified_ = std::stol(value["GmtModified"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["FailAct"].isNull())
		failAct_ = value["FailAct"].asString();
	if(!value["MaxRetry"].isNull())
		maxRetry_ = std::stoi(value["MaxRetry"].asString());
	if(!value["RetryInterval"].isNull())
		retryInterval_ = std::stol(value["RetryInterval"].asString());
	if(!value["RetryPolicy"].isNull())
		retryPolicy_ = value["RetryPolicy"].asString();
	if(!value["Params"].isNull())
		params_ = value["Params"].asString();
	if(!value["ParamConf"].isNull())
		paramConf_ = value["ParamConf"].asString();
	if(!value["CustomVariables"].isNull())
		customVariables_ = value["CustomVariables"].asString();
	if(!value["EnvConf"].isNull())
		envConf_ = value["EnvConf"].asString();
	if(!value["RunConf"].isNull())
		runConf_ = value["RunConf"].asString();
	if(!value["MonitorConf"].isNull())
		monitorConf_ = value["MonitorConf"].asString();
	if(!value["CategoryId"].isNull())
		categoryId_ = value["CategoryId"].asString();
	if(!value["mode"].isNull())
		mode_ = value["mode"].asString();
	if(!value["LastInstanceId"].isNull())
		lastInstanceId_ = value["LastInstanceId"].asString();
	if(!value["Adhoc"].isNull())
		adhoc_ = value["Adhoc"].asString();
	if(!value["AlertConf"].isNull())
		alertConf_ = value["AlertConf"].asString();
	if(!value["EditLockDetail"].isNull())
		editLockDetail_ = value["EditLockDetail"].asString();
	if(!value["MaxRunningTimeSec"].isNull())
		maxRunningTimeSec_ = std::stol(value["MaxRunningTimeSec"].asString());

}

std::string DescribeFlowJobResult::getFailAct()const
{
	return failAct_;
}

std::string DescribeFlowJobResult::getCategoryId()const
{
	return categoryId_;
}

std::string DescribeFlowJobResult::getDescription()const
{
	return description_;
}

std::string DescribeFlowJobResult::getMode()const
{
	return mode_;
}

std::string DescribeFlowJobResult::getLastInstanceId()const
{
	return lastInstanceId_;
}

long DescribeFlowJobResult::getGmtModified()const
{
	return gmtModified_;
}

std::string DescribeFlowJobResult::getParams()const
{
	return params_;
}

int DescribeFlowJobResult::getMaxRetry()const
{
	return maxRetry_;
}

std::string DescribeFlowJobResult::getEditLockDetail()const
{
	return editLockDetail_;
}

long DescribeFlowJobResult::getMaxRunningTimeSec()const
{
	return maxRunningTimeSec_;
}

std::string DescribeFlowJobResult::getName()const
{
	return name_;
}

std::string DescribeFlowJobResult::getParamConf()const
{
	return paramConf_;
}

std::vector<DescribeFlowJobResult::Resource> DescribeFlowJobResult::getResourceList()const
{
	return resourceList_;
}

long DescribeFlowJobResult::getGmtCreate()const
{
	return gmtCreate_;
}

std::string DescribeFlowJobResult::getType()const
{
	return type_;
}

std::string DescribeFlowJobResult::getEnvConf()const
{
	return envConf_;
}

std::string DescribeFlowJobResult::getMonitorConf()const
{
	return monitorConf_;
}

std::string DescribeFlowJobResult::getAdhoc()const
{
	return adhoc_;
}

std::string DescribeFlowJobResult::getId()const
{
	return id_;
}

long DescribeFlowJobResult::getRetryInterval()const
{
	return retryInterval_;
}

std::string DescribeFlowJobResult::getRunConf()const
{
	return runConf_;
}

std::string DescribeFlowJobResult::getRetryPolicy()const
{
	return retryPolicy_;
}

std::string DescribeFlowJobResult::getCustomVariables()const
{
	return customVariables_;
}

std::string DescribeFlowJobResult::getAlertConf()const
{
	return alertConf_;
}

