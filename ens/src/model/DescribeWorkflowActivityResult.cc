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

#include <alibabacloud/ens/model/DescribeWorkflowActivityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeWorkflowActivityResult::DescribeWorkflowActivityResult() :
	ServiceResult()
{}

DescribeWorkflowActivityResult::DescribeWorkflowActivityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWorkflowActivityResult::~DescribeWorkflowActivityResult()
{}

void DescribeWorkflowActivityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allActivityInfoNode = value["ActivityInfo"]["ActivityInfos"];
	for (auto valueActivityInfoActivityInfos : allActivityInfoNode)
	{
		ActivityInfos activityInfoObject;
		if(!valueActivityInfoActivityInfos["ActivityId"].isNull())
			activityInfoObject.activityId = valueActivityInfoActivityInfos["ActivityId"].asString();
		if(!valueActivityInfoActivityInfos["ActivityName"].isNull())
			activityInfoObject.activityName = valueActivityInfoActivityInfos["ActivityName"].asString();
		if(!valueActivityInfoActivityInfos["State"].isNull())
			activityInfoObject.state = valueActivityInfoActivityInfos["State"].asString();
		if(!valueActivityInfoActivityInfos["GmtStart"].isNull())
			activityInfoObject.gmtStart = valueActivityInfoActivityInfos["GmtStart"].asString();
		if(!valueActivityInfoActivityInfos["GmtEnd"].isNull())
			activityInfoObject.gmtEnd = valueActivityInfoActivityInfos["GmtEnd"].asString();
		if(!valueActivityInfoActivityInfos["Duration"].isNull())
			activityInfoObject.duration = valueActivityInfoActivityInfos["Duration"].asString();
		if(!valueActivityInfoActivityInfos["GmtCreate"].isNull())
			activityInfoObject.gmtCreate = valueActivityInfoActivityInfos["GmtCreate"].asString();
		if(!valueActivityInfoActivityInfos["Method"].isNull())
			activityInfoObject.method = valueActivityInfoActivityInfos["Method"].asString();
		if(!valueActivityInfoActivityInfos["Input"].isNull())
			activityInfoObject.input = valueActivityInfoActivityInfos["Input"].asString();
		if(!valueActivityInfoActivityInfos["Output"].isNull())
			activityInfoObject.output = valueActivityInfoActivityInfos["Output"].asString();
		if(!valueActivityInfoActivityInfos["Error"].isNull())
			activityInfoObject.error = valueActivityInfoActivityInfos["Error"].asString();
		if(!valueActivityInfoActivityInfos["WorkerNode"].isNull())
			activityInfoObject.workerNode = valueActivityInfoActivityInfos["WorkerNode"].asString();
		activityInfo_.push_back(activityInfoObject);
	}

}

std::vector<DescribeWorkflowActivityResult::ActivityInfos> DescribeWorkflowActivityResult::getActivityInfo()const
{
	return activityInfo_;
}

