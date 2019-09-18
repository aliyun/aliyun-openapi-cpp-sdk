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

#include <alibabacloud/emr/model/DescribeFlowResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeFlowResult::DescribeFlowResult() :
	ServiceResult()
{}

DescribeFlowResult::DescribeFlowResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFlowResult::~DescribeFlowResult()
{}

void DescribeFlowResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allParentFlowList = value["ParentFlowList"]["ParentFlow"];
	for (auto value : allParentFlowList)
	{
		ParentFlow parentFlowListObject;
		if(!value["ParentFlowId"].isNull())
			parentFlowListObject.parentFlowId = value["ParentFlowId"].asString();
		if(!value["ParentFlowName"].isNull())
			parentFlowListObject.parentFlowName = value["ParentFlowName"].asString();
		if(!value["ProjectId"].isNull())
			parentFlowListObject.projectId = value["ProjectId"].asString();
		if(!value["ProjectName"].isNull())
			parentFlowListObject.projectName = value["ProjectName"].asString();
		parentFlowList_.push_back(parentFlowListObject);
	}
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["GmtCreate"].isNull())
		gmtCreate_ = std::stol(value["GmtCreate"].asString());
	if(!value["GmtModified"].isNull())
		gmtModified_ = std::stol(value["GmtModified"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Periodic"].isNull())
		periodic_ = value["Periodic"].asString() == "true";
	if(!value["StartSchedule"].isNull())
		startSchedule_ = std::stol(value["StartSchedule"].asString());
	if(!value["EndSchedule"].isNull())
		endSchedule_ = std::stol(value["EndSchedule"].asString());
	if(!value["CronExpr"].isNull())
		cronExpr_ = value["CronExpr"].asString();
	if(!value["CreateCluster"].isNull())
		createCluster_ = value["CreateCluster"].asString() == "true";
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["HostName"].isNull())
		hostName_ = value["HostName"].asString();
	if(!value["Graph"].isNull())
		graph_ = value["Graph"].asString();
	if(!value["CategoryId"].isNull())
		categoryId_ = value["CategoryId"].asString();
	if(!value["AlertConf"].isNull())
		alertConf_ = value["AlertConf"].asString();
	if(!value["AlertUserGroupBizId"].isNull())
		alertUserGroupBizId_ = value["AlertUserGroupBizId"].asString();
	if(!value["AlertDingDingGroupBizId"].isNull())
		alertDingDingGroupBizId_ = value["AlertDingDingGroupBizId"].asString();
	if(!value["Application"].isNull())
		application_ = value["Application"].asString();

}

std::string DescribeFlowResult::getStatus()const
{
	return status_;
}

long DescribeFlowResult::getStartSchedule()const
{
	return startSchedule_;
}

std::string DescribeFlowResult::getCategoryId()const
{
	return categoryId_;
}

std::string DescribeFlowResult::getDescription()const
{
	return description_;
}

std::string DescribeFlowResult::getClusterId()const
{
	return clusterId_;
}

long DescribeFlowResult::getGmtModified()const
{
	return gmtModified_;
}

bool DescribeFlowResult::getPeriodic()const
{
	return periodic_;
}

std::string DescribeFlowResult::getCronExpr()const
{
	return cronExpr_;
}

std::string DescribeFlowResult::getName()const
{
	return name_;
}

std::string DescribeFlowResult::getAlertDingDingGroupBizId()const
{
	return alertDingDingGroupBizId_;
}

std::string DescribeFlowResult::getAlertUserGroupBizId()const
{
	return alertUserGroupBizId_;
}

long DescribeFlowResult::getGmtCreate()const
{
	return gmtCreate_;
}

std::string DescribeFlowResult::getType()const
{
	return type_;
}

std::string DescribeFlowResult::getGraph()const
{
	return graph_;
}

std::string DescribeFlowResult::getId()const
{
	return id_;
}

long DescribeFlowResult::getEndSchedule()const
{
	return endSchedule_;
}

std::string DescribeFlowResult::getApplication()const
{
	return application_;
}

std::string DescribeFlowResult::getHostName()const
{
	return hostName_;
}

std::vector<DescribeFlowResult::ParentFlow> DescribeFlowResult::getParentFlowList()const
{
	return parentFlowList_;
}

bool DescribeFlowResult::getCreateCluster()const
{
	return createCluster_;
}

std::string DescribeFlowResult::getAlertConf()const
{
	return alertConf_;
}

