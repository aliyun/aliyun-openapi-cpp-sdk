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

#include <alibabacloud/smc/model/DescribeSourceServersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smc;
using namespace AlibabaCloud::Smc::Model;

DescribeSourceServersResult::DescribeSourceServersResult() :
	ServiceResult()
{}

DescribeSourceServersResult::DescribeSourceServersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSourceServersResult::~DescribeSourceServersResult()
{}

void DescribeSourceServersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSourceServersNode = value["SourceServers"]["SourceServer"];
	for (auto valueSourceServersSourceServer : allSourceServersNode)
	{
		SourceServer sourceServersObject;
		if(!valueSourceServersSourceServer["SourceId"].isNull())
			sourceServersObject.sourceId = valueSourceServersSourceServer["SourceId"].asString();
		if(!valueSourceServersSourceServer["JobId"].isNull())
			sourceServersObject.jobId = valueSourceServersSourceServer["JobId"].asString();
		if(!valueSourceServersSourceServer["AgentVersion"].isNull())
			sourceServersObject.agentVersion = valueSourceServersSourceServer["AgentVersion"].asString();
		if(!valueSourceServersSourceServer["Name"].isNull())
			sourceServersObject.name = valueSourceServersSourceServer["Name"].asString();
		if(!valueSourceServersSourceServer["Description"].isNull())
			sourceServersObject.description = valueSourceServersSourceServer["Description"].asString();
		if(!valueSourceServersSourceServer["KernelLevel"].isNull())
			sourceServersObject.kernelLevel = std::stoi(valueSourceServersSourceServer["KernelLevel"].asString());
		if(!valueSourceServersSourceServer["Platform"].isNull())
			sourceServersObject.platform = valueSourceServersSourceServer["Platform"].asString();
		if(!valueSourceServersSourceServer["Architecture"].isNull())
			sourceServersObject.architecture = valueSourceServersSourceServer["Architecture"].asString();
		if(!valueSourceServersSourceServer["SystemDiskSize"].isNull())
			sourceServersObject.systemDiskSize = std::stoi(valueSourceServersSourceServer["SystemDiskSize"].asString());
		if(!valueSourceServersSourceServer["ReplicationDriver"].isNull())
			sourceServersObject.replicationDriver = valueSourceServersSourceServer["ReplicationDriver"].asString();
		if(!valueSourceServersSourceServer["SystemInfo"].isNull())
			sourceServersObject.systemInfo = valueSourceServersSourceServer["SystemInfo"].asString();
		if(!valueSourceServersSourceServer["CreationTime"].isNull())
			sourceServersObject.creationTime = valueSourceServersSourceServer["CreationTime"].asString();
		if(!valueSourceServersSourceServer["State"].isNull())
			sourceServersObject.state = valueSourceServersSourceServer["State"].asString();
		if(!valueSourceServersSourceServer["ErrorCode"].isNull())
			sourceServersObject.errorCode = valueSourceServersSourceServer["ErrorCode"].asString();
		if(!valueSourceServersSourceServer["StatusInfo"].isNull())
			sourceServersObject.statusInfo = valueSourceServersSourceServer["StatusInfo"].asString();
		if(!valueSourceServersSourceServer["HeartbeatRate"].isNull())
			sourceServersObject.heartbeatRate = std::stoi(valueSourceServersSourceServer["HeartbeatRate"].asString());
		auto allDataDisksNode = valueSourceServersSourceServer["DataDisks"]["DataDisk"];
		for (auto valueSourceServersSourceServerDataDisksDataDisk : allDataDisksNode)
		{
			SourceServer::DataDisk dataDisksObject;
			if(!valueSourceServersSourceServerDataDisksDataDisk["Index"].isNull())
				dataDisksObject.index = std::stoi(valueSourceServersSourceServerDataDisksDataDisk["Index"].asString());
			if(!valueSourceServersSourceServerDataDisksDataDisk["Size"].isNull())
				dataDisksObject.size = std::stoi(valueSourceServersSourceServerDataDisksDataDisk["Size"].asString());
			if(!valueSourceServersSourceServerDataDisksDataDisk["Path"].isNull())
				dataDisksObject.path = valueSourceServersSourceServerDataDisksDataDisk["Path"].asString();
			auto allPartsNode = valueSourceServersSourceServerDataDisksDataDisk["Parts"]["Part"];
			for (auto valueSourceServersSourceServerDataDisksDataDiskPartsPart : allPartsNode)
			{
				SourceServer::DataDisk::Part partsObject;
				if(!valueSourceServersSourceServerDataDisksDataDiskPartsPart["Path"].isNull())
					partsObject.path = valueSourceServersSourceServerDataDisksDataDiskPartsPart["Path"].asString();
				if(!valueSourceServersSourceServerDataDisksDataDiskPartsPart["Device"].isNull())
					partsObject.device = valueSourceServersSourceServerDataDisksDataDiskPartsPart["Device"].asString();
				if(!valueSourceServersSourceServerDataDisksDataDiskPartsPart["SizeBytes"].isNull())
					partsObject.sizeBytes = std::stol(valueSourceServersSourceServerDataDisksDataDiskPartsPart["SizeBytes"].asString());
				if(!valueSourceServersSourceServerDataDisksDataDiskPartsPart["Need"].isNull())
					partsObject.need = valueSourceServersSourceServerDataDisksDataDiskPartsPart["Need"].asString() == "true";
				if(!valueSourceServersSourceServerDataDisksDataDiskPartsPart["CanBlock"].isNull())
					partsObject.canBlock = valueSourceServersSourceServerDataDisksDataDiskPartsPart["CanBlock"].asString() == "true";
				dataDisksObject.parts.push_back(partsObject);
			}
			sourceServersObject.dataDisks.push_back(dataDisksObject);
		}
		auto allSystemDiskPartsNode = valueSourceServersSourceServer["SystemDiskParts"]["SystemDiskPart"];
		for (auto valueSourceServersSourceServerSystemDiskPartsSystemDiskPart : allSystemDiskPartsNode)
		{
			SourceServer::SystemDiskPart systemDiskPartsObject;
			if(!valueSourceServersSourceServerSystemDiskPartsSystemDiskPart["Path"].isNull())
				systemDiskPartsObject.path = valueSourceServersSourceServerSystemDiskPartsSystemDiskPart["Path"].asString();
			if(!valueSourceServersSourceServerSystemDiskPartsSystemDiskPart["Device"].isNull())
				systemDiskPartsObject.device = valueSourceServersSourceServerSystemDiskPartsSystemDiskPart["Device"].asString();
			if(!valueSourceServersSourceServerSystemDiskPartsSystemDiskPart["SizeBytes"].isNull())
				systemDiskPartsObject.sizeBytes = std::stol(valueSourceServersSourceServerSystemDiskPartsSystemDiskPart["SizeBytes"].asString());
			if(!valueSourceServersSourceServerSystemDiskPartsSystemDiskPart["Need"].isNull())
				systemDiskPartsObject.need = valueSourceServersSourceServerSystemDiskPartsSystemDiskPart["Need"].asString() == "true";
			if(!valueSourceServersSourceServerSystemDiskPartsSystemDiskPart["CanBlock"].isNull())
				systemDiskPartsObject.canBlock = valueSourceServersSourceServerSystemDiskPartsSystemDiskPart["CanBlock"].asString() == "true";
			sourceServersObject.systemDiskParts.push_back(systemDiskPartsObject);
		}
		sourceServers_.push_back(sourceServersObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<DescribeSourceServersResult::SourceServer> DescribeSourceServersResult::getSourceServers()const
{
	return sourceServers_;
}

int DescribeSourceServersResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeSourceServersResult::getPageSize()const
{
	return pageSize_;
}

int DescribeSourceServersResult::getPageNumber()const
{
	return pageNumber_;
}

