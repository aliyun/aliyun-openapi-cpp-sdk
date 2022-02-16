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

#include <alibabacloud/emr/model/DescribeFlowProjectClusterSettingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeFlowProjectClusterSettingResult::DescribeFlowProjectClusterSettingResult() :
	ServiceResult()
{}

DescribeFlowProjectClusterSettingResult::DescribeFlowProjectClusterSettingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFlowProjectClusterSettingResult::~DescribeFlowProjectClusterSettingResult()
{}

void DescribeFlowProjectClusterSettingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUserList = value["UserList"]["User"];
	for (const auto &item : allUserList)
		userList_.push_back(item.asString());
	auto allQueueList = value["QueueList"]["Queue"];
	for (const auto &item : allQueueList)
		queueList_.push_back(item.asString());
	auto allHostList = value["HostList"]["Host"];
	for (const auto &item : allHostList)
		hostList_.push_back(item.asString());
	if(!value["GmtCreate"].isNull())
		gmtCreate_ = std::stol(value["GmtCreate"].asString());
	if(!value["GmtModified"].isNull())
		gmtModified_ = std::stol(value["GmtModified"].asString());
	if(!value["ProjectId"].isNull())
		projectId_ = value["ProjectId"].asString();
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["K8sClusterId"].isNull())
		k8sClusterId_ = value["K8sClusterId"].asString();
	if(!value["DefaultUser"].isNull())
		defaultUser_ = value["DefaultUser"].asString();
	if(!value["DefaultQueue"].isNull())
		defaultQueue_ = value["DefaultQueue"].asString();

}

long DescribeFlowProjectClusterSettingResult::getGmtCreate()const
{
	return gmtCreate_;
}

std::string DescribeFlowProjectClusterSettingResult::getDefaultUser()const
{
	return defaultUser_;
}

std::string DescribeFlowProjectClusterSettingResult::getDefaultQueue()const
{
	return defaultQueue_;
}

std::string DescribeFlowProjectClusterSettingResult::getClusterId()const
{
	return clusterId_;
}

long DescribeFlowProjectClusterSettingResult::getGmtModified()const
{
	return gmtModified_;
}

std::string DescribeFlowProjectClusterSettingResult::getProjectId()const
{
	return projectId_;
}

std::vector<std::string> DescribeFlowProjectClusterSettingResult::getHostList()const
{
	return hostList_;
}

std::vector<std::string> DescribeFlowProjectClusterSettingResult::getUserList()const
{
	return userList_;
}

std::string DescribeFlowProjectClusterSettingResult::getK8sClusterId()const
{
	return k8sClusterId_;
}

std::vector<std::string> DescribeFlowProjectClusterSettingResult::getQueueList()const
{
	return queueList_;
}

