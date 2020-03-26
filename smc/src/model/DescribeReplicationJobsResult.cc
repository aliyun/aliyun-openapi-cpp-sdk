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

#include <alibabacloud/smc/model/DescribeReplicationJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smc;
using namespace AlibabaCloud::Smc::Model;

DescribeReplicationJobsResult::DescribeReplicationJobsResult() :
	ServiceResult()
{}

DescribeReplicationJobsResult::DescribeReplicationJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeReplicationJobsResult::~DescribeReplicationJobsResult()
{}

void DescribeReplicationJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allReplicationJobsNode = value["ReplicationJobs"]["ReplicationJob"];
	for (auto valueReplicationJobsReplicationJob : allReplicationJobsNode)
	{
		ReplicationJob replicationJobsObject;
		if(!valueReplicationJobsReplicationJob["JobId"].isNull())
			replicationJobsObject.jobId = valueReplicationJobsReplicationJob["JobId"].asString();
		if(!valueReplicationJobsReplicationJob["SourceId"].isNull())
			replicationJobsObject.sourceId = valueReplicationJobsReplicationJob["SourceId"].asString();
		if(!valueReplicationJobsReplicationJob["Name"].isNull())
			replicationJobsObject.name = valueReplicationJobsReplicationJob["Name"].asString();
		if(!valueReplicationJobsReplicationJob["Description"].isNull())
			replicationJobsObject.description = valueReplicationJobsReplicationJob["Description"].asString();
		if(!valueReplicationJobsReplicationJob["RegionId"].isNull())
			replicationJobsObject.regionId = valueReplicationJobsReplicationJob["RegionId"].asString();
		if(!valueReplicationJobsReplicationJob["TargetType"].isNull())
			replicationJobsObject.targetType = valueReplicationJobsReplicationJob["TargetType"].asString();
		if(!valueReplicationJobsReplicationJob["ScheduledStartTime"].isNull())
			replicationJobsObject.scheduledStartTime = valueReplicationJobsReplicationJob["ScheduledStartTime"].asString();
		if(!valueReplicationJobsReplicationJob["ImageName"].isNull())
			replicationJobsObject.imageName = valueReplicationJobsReplicationJob["ImageName"].asString();
		if(!valueReplicationJobsReplicationJob["InstanceId"].isNull())
			replicationJobsObject.instanceId = valueReplicationJobsReplicationJob["InstanceId"].asString();
		if(!valueReplicationJobsReplicationJob["ImageId"].isNull())
			replicationJobsObject.imageId = valueReplicationJobsReplicationJob["ImageId"].asString();
		if(!valueReplicationJobsReplicationJob["Status"].isNull())
			replicationJobsObject.status = valueReplicationJobsReplicationJob["Status"].asString();
		if(!valueReplicationJobsReplicationJob["BusinessStatus"].isNull())
			replicationJobsObject.businessStatus = valueReplicationJobsReplicationJob["BusinessStatus"].asString();
		if(!valueReplicationJobsReplicationJob["ErrorCode"].isNull())
			replicationJobsObject.errorCode = valueReplicationJobsReplicationJob["ErrorCode"].asString();
		if(!valueReplicationJobsReplicationJob["Progress"].isNull())
			replicationJobsObject.progress = std::stof(valueReplicationJobsReplicationJob["Progress"].asString());
		if(!valueReplicationJobsReplicationJob["CreationTime"].isNull())
			replicationJobsObject.creationTime = valueReplicationJobsReplicationJob["CreationTime"].asString();
		if(!valueReplicationJobsReplicationJob["ValidTime"].isNull())
			replicationJobsObject.validTime = valueReplicationJobsReplicationJob["ValidTime"].asString();
		if(!valueReplicationJobsReplicationJob["StartTime"].isNull())
			replicationJobsObject.startTime = valueReplicationJobsReplicationJob["StartTime"].asString();
		if(!valueReplicationJobsReplicationJob["EndTime"].isNull())
			replicationJobsObject.endTime = valueReplicationJobsReplicationJob["EndTime"].asString();
		if(!valueReplicationJobsReplicationJob["NetMode"].isNull())
			replicationJobsObject.netMode = std::stoi(valueReplicationJobsReplicationJob["NetMode"].asString());
		if(!valueReplicationJobsReplicationJob["SystemDiskSize"].isNull())
			replicationJobsObject.systemDiskSize = std::stoi(valueReplicationJobsReplicationJob["SystemDiskSize"].asString());
		if(!valueReplicationJobsReplicationJob["VpcId"].isNull())
			replicationJobsObject.vpcId = valueReplicationJobsReplicationJob["VpcId"].asString();
		if(!valueReplicationJobsReplicationJob["VSwitchId"].isNull())
			replicationJobsObject.vSwitchId = valueReplicationJobsReplicationJob["VSwitchId"].asString();
		if(!valueReplicationJobsReplicationJob["TransitionInstanceId"].isNull())
			replicationJobsObject.transitionInstanceId = valueReplicationJobsReplicationJob["TransitionInstanceId"].asString();
		if(!valueReplicationJobsReplicationJob["StatusInfo"].isNull())
			replicationJobsObject.statusInfo = valueReplicationJobsReplicationJob["StatusInfo"].asString();
		if(!valueReplicationJobsReplicationJob["ReplicationParameters"].isNull())
			replicationJobsObject.replicationParameters = valueReplicationJobsReplicationJob["ReplicationParameters"].asString();
		if(!valueReplicationJobsReplicationJob["RunOnce"].isNull())
			replicationJobsObject.runOnce = valueReplicationJobsReplicationJob["RunOnce"].asString() == "true";
		if(!valueReplicationJobsReplicationJob["Frequency"].isNull())
			replicationJobsObject.frequency = std::stoi(valueReplicationJobsReplicationJob["Frequency"].asString());
		if(!valueReplicationJobsReplicationJob["MaxNumberOfImageToKeep"].isNull())
			replicationJobsObject.maxNumberOfImageToKeep = std::stoi(valueReplicationJobsReplicationJob["MaxNumberOfImageToKeep"].asString());
		if(!valueReplicationJobsReplicationJob["InstanceType"].isNull())
			replicationJobsObject.instanceType = valueReplicationJobsReplicationJob["InstanceType"].asString();
		if(!valueReplicationJobsReplicationJob["LaunchTemplateId"].isNull())
			replicationJobsObject.launchTemplateId = valueReplicationJobsReplicationJob["LaunchTemplateId"].asString();
		if(!valueReplicationJobsReplicationJob["LaunchTemplateVersion"].isNull())
			replicationJobsObject.launchTemplateVersion = valueReplicationJobsReplicationJob["LaunchTemplateVersion"].asString();
		auto allDataDisksNode = allReplicationJobsNode["DataDisks"]["DataDisk"];
		for (auto allReplicationJobsNodeDataDisksDataDisk : allDataDisksNode)
		{
			ReplicationJob::DataDisk dataDisksObject;
			if(!allReplicationJobsNodeDataDisksDataDisk["Size"].isNull())
				dataDisksObject.size = std::stoi(allReplicationJobsNodeDataDisksDataDisk["Size"].asString());
			if(!allReplicationJobsNodeDataDisksDataDisk["Index"].isNull())
				dataDisksObject.index = std::stoi(allReplicationJobsNodeDataDisksDataDisk["Index"].asString());
			replicationJobsObject.dataDisks.push_back(dataDisksObject);
		}
		auto allReplicationJobRunsNode = allReplicationJobsNode["ReplicationJobRuns"]["ReplicationJobRun"];
		for (auto allReplicationJobsNodeReplicationJobRunsReplicationJobRun : allReplicationJobRunsNode)
		{
			ReplicationJob::ReplicationJobRun replicationJobRunsObject;
			if(!allReplicationJobsNodeReplicationJobRunsReplicationJobRun["ImageId"].isNull())
				replicationJobRunsObject.imageId = allReplicationJobsNodeReplicationJobRunsReplicationJobRun["ImageId"].asString();
			if(!allReplicationJobsNodeReplicationJobRunsReplicationJobRun["Type"].isNull())
				replicationJobRunsObject.type = allReplicationJobsNodeReplicationJobRunsReplicationJobRun["Type"].asString();
			if(!allReplicationJobsNodeReplicationJobRunsReplicationJobRun["StartTime"].isNull())
				replicationJobRunsObject.startTime = allReplicationJobsNodeReplicationJobRunsReplicationJobRun["StartTime"].asString();
			if(!allReplicationJobsNodeReplicationJobRunsReplicationJobRun["EndTime"].isNull())
				replicationJobRunsObject.endTime = allReplicationJobsNodeReplicationJobRunsReplicationJobRun["EndTime"].asString();
			replicationJobsObject.replicationJobRuns.push_back(replicationJobRunsObject);
		}
		replicationJobs_.push_back(replicationJobsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeReplicationJobsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeReplicationJobsResult::ReplicationJob> DescribeReplicationJobsResult::getReplicationJobs()const
{
	return replicationJobs_;
}

int DescribeReplicationJobsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeReplicationJobsResult::getPageNumber()const
{
	return pageNumber_;
}

