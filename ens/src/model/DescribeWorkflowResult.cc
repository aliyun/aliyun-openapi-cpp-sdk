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

#include <alibabacloud/ens/model/DescribeWorkflowResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeWorkflowResult::DescribeWorkflowResult() :
	ServiceResult()
{}

DescribeWorkflowResult::DescribeWorkflowResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWorkflowResult::~DescribeWorkflowResult()
{}

void DescribeWorkflowResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWorkFlowInfoNode = value["WorkFlowInfo"]["WorkFlowInfos"];
	for (auto valueWorkFlowInfoWorkFlowInfos : allWorkFlowInfoNode)
	{
		WorkFlowInfos workFlowInfoObject;
		if(!valueWorkFlowInfoWorkFlowInfos["GmtCreate"].isNull())
			workFlowInfoObject.gmtCreate = valueWorkFlowInfoWorkFlowInfos["GmtCreate"].asString();
		if(!valueWorkFlowInfoWorkFlowInfos["GmtExpire"].isNull())
			workFlowInfoObject.gmtExpire = valueWorkFlowInfoWorkFlowInfos["GmtExpire"].asString();
		if(!valueWorkFlowInfoWorkFlowInfos["WorkflowId"].isNull())
			workFlowInfoObject.workflowId = valueWorkFlowInfoWorkFlowInfos["WorkflowId"].asString();
		if(!valueWorkFlowInfoWorkFlowInfos["BizType"].isNull())
			workFlowInfoObject.bizType = valueWorkFlowInfoWorkFlowInfos["BizType"].asString();
		if(!valueWorkFlowInfoWorkFlowInfos["InitAttributes"].isNull())
			workFlowInfoObject.initAttributes = valueWorkFlowInfoWorkFlowInfos["InitAttributes"].asString();
		if(!valueWorkFlowInfoWorkFlowInfos["WorkerNode"].isNull())
			workFlowInfoObject.workerNode = valueWorkFlowInfoWorkFlowInfos["WorkerNode"].asString();
		if(!valueWorkFlowInfoWorkFlowInfos["Duration"].isNull())
			workFlowInfoObject.duration = valueWorkFlowInfoWorkFlowInfos["Duration"].asString();
		if(!valueWorkFlowInfoWorkFlowInfos["GmtStart"].isNull())
			workFlowInfoObject.gmtStart = valueWorkFlowInfoWorkFlowInfos["GmtStart"].asString();
		if(!valueWorkFlowInfoWorkFlowInfos["AliUid"].isNull())
			workFlowInfoObject.aliUid = valueWorkFlowInfoWorkFlowInfos["AliUid"].asString();
		if(!valueWorkFlowInfoWorkFlowInfos["EnsRegionId"].isNull())
			workFlowInfoObject.ensRegionId = valueWorkFlowInfoWorkFlowInfos["EnsRegionId"].asString();
		if(!valueWorkFlowInfoWorkFlowInfos["InstanceId"].isNull())
			workFlowInfoObject.instanceId = valueWorkFlowInfoWorkFlowInfos["InstanceId"].asString();
		if(!valueWorkFlowInfoWorkFlowInfos["Name"].isNull())
			workFlowInfoObject.name = valueWorkFlowInfoWorkFlowInfos["Name"].asString();
		if(!valueWorkFlowInfoWorkFlowInfos["GmtModify"].isNull())
			workFlowInfoObject.gmtModify = valueWorkFlowInfoWorkFlowInfos["GmtModify"].asString();
		if(!valueWorkFlowInfoWorkFlowInfos["Id"].isNull())
			workFlowInfoObject.id = valueWorkFlowInfoWorkFlowInfos["Id"].asString();
		if(!valueWorkFlowInfoWorkFlowInfos["GmtEnd"].isNull())
			workFlowInfoObject.gmtEnd = valueWorkFlowInfoWorkFlowInfos["GmtEnd"].asString();
		if(!valueWorkFlowInfoWorkFlowInfos["BussinessId"].isNull())
			workFlowInfoObject.bussinessId = valueWorkFlowInfoWorkFlowInfos["BussinessId"].asString();
		if(!valueWorkFlowInfoWorkFlowInfos["Status"].isNull())
			workFlowInfoObject.status = valueWorkFlowInfoWorkFlowInfos["Status"].asString();
		if(!valueWorkFlowInfoWorkFlowInfos["Priority"].isNull())
			workFlowInfoObject.priority = valueWorkFlowInfoWorkFlowInfos["Priority"].asString();
		workFlowInfo_.push_back(workFlowInfoObject);
	}

}

std::vector<DescribeWorkflowResult::WorkFlowInfos> DescribeWorkflowResult::getWorkFlowInfo()const
{
	return workFlowInfo_;
}

