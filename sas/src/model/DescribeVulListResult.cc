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

#include <alibabacloud/sas/model/DescribeVulListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeVulListResult::DescribeVulListResult() :
	ServiceResult()
{}

DescribeVulListResult::DescribeVulListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVulListResult::~DescribeVulListResult()
{}

void DescribeVulListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVulRecordsNode = value["VulRecords"]["VulRecord"];
	for (auto valueVulRecordsVulRecord : allVulRecordsNode)
	{
		VulRecord vulRecordsObject;
		if(!valueVulRecordsVulRecord["Status"].isNull())
			vulRecordsObject.status = std::stoi(valueVulRecordsVulRecord["Status"].asString());
		if(!valueVulRecordsVulRecord["IsPoc"].isNull())
			vulRecordsObject.isPoc = std::stoi(valueVulRecordsVulRecord["IsPoc"].asString());
		if(!valueVulRecordsVulRecord["RaspDefend"].isNull())
			vulRecordsObject.raspDefend = std::stoi(valueVulRecordsVulRecord["RaspDefend"].asString());
		if(!valueVulRecordsVulRecord["RaspStatus"].isNull())
			vulRecordsObject.raspStatus = std::stoi(valueVulRecordsVulRecord["RaspStatus"].asString());
		if(!valueVulRecordsVulRecord["Type"].isNull())
			vulRecordsObject.type = valueVulRecordsVulRecord["Type"].asString();
		if(!valueVulRecordsVulRecord["ModifyTs"].isNull())
			vulRecordsObject.modifyTs = std::stol(valueVulRecordsVulRecord["ModifyTs"].asString());
		if(!valueVulRecordsVulRecord["InternetIp"].isNull())
			vulRecordsObject.internetIp = valueVulRecordsVulRecord["InternetIp"].asString();
		if(!valueVulRecordsVulRecord["RecordId"].isNull())
			vulRecordsObject.recordId = std::stol(valueVulRecordsVulRecord["RecordId"].asString());
		if(!valueVulRecordsVulRecord["ContainerImageId"].isNull())
			vulRecordsObject.containerImageId = valueVulRecordsVulRecord["ContainerImageId"].asString();
		if(!valueVulRecordsVulRecord["PrimaryId"].isNull())
			vulRecordsObject.primaryId = std::stol(valueVulRecordsVulRecord["PrimaryId"].asString());
		if(!valueVulRecordsVulRecord["Tag"].isNull())
			vulRecordsObject.tag = valueVulRecordsVulRecord["Tag"].asString();
		if(!valueVulRecordsVulRecord["K8sClusterId"].isNull())
			vulRecordsObject.k8sClusterId = valueVulRecordsVulRecord["K8sClusterId"].asString();
		if(!valueVulRecordsVulRecord["ContainerImageName"].isNull())
			vulRecordsObject.containerImageName = valueVulRecordsVulRecord["ContainerImageName"].asString();
		if(!valueVulRecordsVulRecord["K8sNodeId"].isNull())
			vulRecordsObject.k8sNodeId = valueVulRecordsVulRecord["K8sNodeId"].asString();
		if(!valueVulRecordsVulRecord["InstanceName"].isNull())
			vulRecordsObject.instanceName = valueVulRecordsVulRecord["InstanceName"].asString();
		if(!valueVulRecordsVulRecord["ContainerInnerPath"].isNull())
			vulRecordsObject.containerInnerPath = valueVulRecordsVulRecord["ContainerInnerPath"].asString();
		if(!valueVulRecordsVulRecord["Online"].isNull())
			vulRecordsObject.online = valueVulRecordsVulRecord["Online"].asString() == "true";
		if(!valueVulRecordsVulRecord["OsVersion"].isNull())
			vulRecordsObject.osVersion = valueVulRecordsVulRecord["OsVersion"].asString();
		if(!valueVulRecordsVulRecord["Name"].isNull())
			vulRecordsObject.name = valueVulRecordsVulRecord["Name"].asString();
		if(!valueVulRecordsVulRecord["CanFix"].isNull())
			vulRecordsObject.canFix = valueVulRecordsVulRecord["CanFix"].asString();
		if(!valueVulRecordsVulRecord["Progress"].isNull())
			vulRecordsObject.progress = std::stoi(valueVulRecordsVulRecord["Progress"].asString());
		if(!valueVulRecordsVulRecord["Ip"].isNull())
			vulRecordsObject.ip = valueVulRecordsVulRecord["Ip"].asString();
		if(!valueVulRecordsVulRecord["NeedReboot"].isNull())
			vulRecordsObject.needReboot = valueVulRecordsVulRecord["NeedReboot"].asString();
		if(!valueVulRecordsVulRecord["ResultCode"].isNull())
			vulRecordsObject.resultCode = valueVulRecordsVulRecord["ResultCode"].asString();
		if(!valueVulRecordsVulRecord["InstanceId"].isNull())
			vulRecordsObject.instanceId = valueVulRecordsVulRecord["InstanceId"].asString();
		if(!valueVulRecordsVulRecord["Related"].isNull())
			vulRecordsObject.related = valueVulRecordsVulRecord["Related"].asString();
		if(!valueVulRecordsVulRecord["IntranetIp"].isNull())
			vulRecordsObject.intranetIp = valueVulRecordsVulRecord["IntranetIp"].asString();
		if(!valueVulRecordsVulRecord["LastTs"].isNull())
			vulRecordsObject.lastTs = std::stol(valueVulRecordsVulRecord["LastTs"].asString());
		if(!valueVulRecordsVulRecord["FirstTs"].isNull())
			vulRecordsObject.firstTs = std::stol(valueVulRecordsVulRecord["FirstTs"].asString());
		if(!valueVulRecordsVulRecord["RegionId"].isNull())
			vulRecordsObject.regionId = valueVulRecordsVulRecord["RegionId"].asString();
		if(!valueVulRecordsVulRecord["Necessity"].isNull())
			vulRecordsObject.necessity = valueVulRecordsVulRecord["Necessity"].asString();
		if(!valueVulRecordsVulRecord["RepairTs"].isNull())
			vulRecordsObject.repairTs = std::stol(valueVulRecordsVulRecord["RepairTs"].asString());
		if(!valueVulRecordsVulRecord["Uuid"].isNull())
			vulRecordsObject.uuid = valueVulRecordsVulRecord["Uuid"].asString();
		if(!valueVulRecordsVulRecord["K8sPodName"].isNull())
			vulRecordsObject.k8sPodName = valueVulRecordsVulRecord["K8sPodName"].asString();
		if(!valueVulRecordsVulRecord["ContainerId"].isNull())
			vulRecordsObject.containerId = valueVulRecordsVulRecord["ContainerId"].asString();
		if(!valueVulRecordsVulRecord["GroupId"].isNull())
			vulRecordsObject.groupId = std::stoi(valueVulRecordsVulRecord["GroupId"].asString());
		if(!valueVulRecordsVulRecord["ResultMessage"].isNull())
			vulRecordsObject.resultMessage = valueVulRecordsVulRecord["ResultMessage"].asString();
		if(!valueVulRecordsVulRecord["K8sNamespace"].isNull())
			vulRecordsObject.k8sNamespace = valueVulRecordsVulRecord["K8sNamespace"].asString();
		if(!valueVulRecordsVulRecord["AliasName"].isNull())
			vulRecordsObject.aliasName = valueVulRecordsVulRecord["AliasName"].asString();
		if(!valueVulRecordsVulRecord["K8sNodeName"].isNull())
			vulRecordsObject.k8sNodeName = valueVulRecordsVulRecord["K8sNodeName"].asString();
		if(!valueVulRecordsVulRecord["ContainerName"].isNull())
			vulRecordsObject.containerName = valueVulRecordsVulRecord["ContainerName"].asString();
		if(!valueVulRecordsVulRecord["Level"].isNull())
			vulRecordsObject.level = valueVulRecordsVulRecord["Level"].asString();
		if(!valueVulRecordsVulRecord["Bind"].isNull())
			vulRecordsObject.bind = valueVulRecordsVulRecord["Bind"].asString() == "true";
		if(!valueVulRecordsVulRecord["OsName"].isNull())
			vulRecordsObject.osName = valueVulRecordsVulRecord["OsName"].asString();
		if(!valueVulRecordsVulRecord["AuthVersion"].isNull())
			vulRecordsObject.authVersion = valueVulRecordsVulRecord["AuthVersion"].asString();
		if(!valueVulRecordsVulRecord["Product"].isNull())
			vulRecordsObject.product = valueVulRecordsVulRecord["Product"].asString();
		auto extendContentJsonNode = value["ExtendContentJson"];
		if(!extendContentJsonNode["Status"].isNull())
			vulRecordsObject.extendContentJson.status = extendContentJsonNode["Status"].asString();
		if(!extendContentJsonNode["Effect"].isNull())
			vulRecordsObject.extendContentJson.effect = extendContentJsonNode["Effect"].asString();
		if(!extendContentJsonNode["EmgProof"].isNull())
			vulRecordsObject.extendContentJson.emgProof = extendContentJsonNode["EmgProof"].asString();
		if(!extendContentJsonNode["Owasp"].isNull())
			vulRecordsObject.extendContentJson.owasp = extendContentJsonNode["Owasp"].asString();
		if(!extendContentJsonNode["Cwe"].isNull())
			vulRecordsObject.extendContentJson.cwe = extendContentJsonNode["Cwe"].asString();
		if(!extendContentJsonNode["Ip"].isNull())
			vulRecordsObject.extendContentJson.ip = extendContentJsonNode["Ip"].asString();
		if(!extendContentJsonNode["PrimaryId"].isNull())
			vulRecordsObject.extendContentJson.primaryId = std::stol(extendContentJsonNode["PrimaryId"].asString());
		if(!extendContentJsonNode["Os"].isNull())
			vulRecordsObject.extendContentJson.os = extendContentJsonNode["Os"].asString();
		if(!extendContentJsonNode["Tag"].isNull())
			vulRecordsObject.extendContentJson.tag = extendContentJsonNode["Tag"].asString();
		if(!extendContentJsonNode["Reference"].isNull())
			vulRecordsObject.extendContentJson.reference = extendContentJsonNode["Reference"].asString();
		if(!extendContentJsonNode["Wasc"].isNull())
			vulRecordsObject.extendContentJson.wasc = extendContentJsonNode["Wasc"].asString();
		if(!extendContentJsonNode["LastTs"].isNull())
			vulRecordsObject.extendContentJson.lastTs = std::stol(extendContentJsonNode["LastTs"].asString());
		if(!extendContentJsonNode["VulType"].isNull())
			vulRecordsObject.extendContentJson.vulType = extendContentJsonNode["VulType"].asString();
		if(!extendContentJsonNode["Description"].isNull())
			vulRecordsObject.extendContentJson.description = extendContentJsonNode["Description"].asString();
		if(!extendContentJsonNode["OsRelease"].isNull())
			vulRecordsObject.extendContentJson.osRelease = extendContentJsonNode["OsRelease"].asString();
		if(!extendContentJsonNode["Title"].isNull())
			vulRecordsObject.extendContentJson.title = extendContentJsonNode["Title"].asString();
		if(!extendContentJsonNode["AliasName"].isNull())
			vulRecordsObject.extendContentJson.aliasName = extendContentJsonNode["AliasName"].asString();
		if(!extendContentJsonNode["Solution"].isNull())
			vulRecordsObject.extendContentJson.solution = extendContentJsonNode["Solution"].asString();
		if(!extendContentJsonNode["Target"].isNull())
			vulRecordsObject.extendContentJson.target = extendContentJsonNode["Target"].asString();
		if(!extendContentJsonNode["AbsolutePath"].isNull())
			vulRecordsObject.extendContentJson.absolutePath = extendContentJsonNode["AbsolutePath"].asString();
		if(!extendContentJsonNode["Proof"].isNull())
			vulRecordsObject.extendContentJson.proof = extendContentJsonNode["Proof"].asString();
		if(!extendContentJsonNode["Reason"].isNull())
			vulRecordsObject.extendContentJson.reason = extendContentJsonNode["Reason"].asString();
		if(!extendContentJsonNode["Level"].isNull())
			vulRecordsObject.extendContentJson.level = extendContentJsonNode["Level"].asString();
		if(!extendContentJsonNode["RenderData"].isNull())
			vulRecordsObject.extendContentJson.renderData = extendContentJsonNode["RenderData"].asString();
		auto allRpmEntityListNode = extendContentJsonNode["RpmEntityList"]["RpmEntity"];
		for (auto extendContentJsonNodeRpmEntityListRpmEntity : allRpmEntityListNode)
		{
			VulRecord::ExtendContentJson::RpmEntity rpmEntityObject;
			if(!extendContentJsonNodeRpmEntityListRpmEntity["FullVersion"].isNull())
				rpmEntityObject.fullVersion = extendContentJsonNodeRpmEntityListRpmEntity["FullVersion"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["Version"].isNull())
				rpmEntityObject.version = extendContentJsonNodeRpmEntityListRpmEntity["Version"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["MatchDetail"].isNull())
				rpmEntityObject.matchDetail = extendContentJsonNodeRpmEntityListRpmEntity["MatchDetail"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["ImageName"].isNull())
				rpmEntityObject.imageName = extendContentJsonNodeRpmEntityListRpmEntity["ImageName"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["Path"].isNull())
				rpmEntityObject.path = extendContentJsonNodeRpmEntityListRpmEntity["Path"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["ContainerName"].isNull())
				rpmEntityObject.containerName = extendContentJsonNodeRpmEntityListRpmEntity["ContainerName"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["Name"].isNull())
				rpmEntityObject.name = extendContentJsonNodeRpmEntityListRpmEntity["Name"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["UpdateCmd"].isNull())
				rpmEntityObject.updateCmd = extendContentJsonNodeRpmEntityListRpmEntity["UpdateCmd"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["Pid"].isNull())
				rpmEntityObject.pid = extendContentJsonNodeRpmEntityListRpmEntity["Pid"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["ExtendField"].isNull())
				rpmEntityObject.extendField = extendContentJsonNodeRpmEntityListRpmEntity["ExtendField"].asString();
			auto allMatchList = value["MatchList"]["Match"];
			for (auto value : allMatchList)
				rpmEntityObject.matchList.push_back(value.asString());
			vulRecordsObject.extendContentJson.rpmEntityList.push_back(rpmEntityObject);
		}
		auto necessityNode = extendContentJsonNode["Necessity"];
		if(!necessityNode["Status"].isNull())
			vulRecordsObject.extendContentJson.necessity.status = necessityNode["Status"].asString();
		if(!necessityNode["Gmt_create"].isNull())
			vulRecordsObject.extendContentJson.necessity.gmt_create = necessityNode["Gmt_create"].asString();
		if(!necessityNode["Time_factor"].isNull())
			vulRecordsObject.extendContentJson.necessity.time_factor = necessityNode["Time_factor"].asString();
		if(!necessityNode["Enviroment_factor"].isNull())
			vulRecordsObject.extendContentJson.necessity.enviroment_factor = necessityNode["Enviroment_factor"].asString();
		if(!necessityNode["Is_calc"].isNull())
			vulRecordsObject.extendContentJson.necessity.is_calc = necessityNode["Is_calc"].asString();
		if(!necessityNode["Total_score"].isNull())
			vulRecordsObject.extendContentJson.necessity.total_score = necessityNode["Total_score"].asString();
		if(!necessityNode["Cvss_factor"].isNull())
			vulRecordsObject.extendContentJson.necessity.cvss_factor = necessityNode["Cvss_factor"].asString();
		if(!necessityNode["Assets_factor"].isNull())
			vulRecordsObject.extendContentJson.necessity.assets_factor = necessityNode["Assets_factor"].asString();
		auto preCheckNode = extendContentJsonNode["PreCheck"];
		if(!preCheckNode["Msg"].isNull())
			vulRecordsObject.extendContentJson.preCheck.msg = preCheckNode["Msg"].asString();
		if(!preCheckNode["Code"].isNull())
			vulRecordsObject.extendContentJson.preCheck.code = std::stol(preCheckNode["Code"].asString());
		auto agentScanVulNode = extendContentJsonNode["AgentScanVul"];
		if(!agentScanVulNode["Poc"].isNull())
			vulRecordsObject.extendContentJson.agentScanVul.poc = agentScanVulNode["Poc"].asString();
		if(!agentScanVulNode["Proof"].isNull())
			vulRecordsObject.extendContentJson.agentScanVul.proof = agentScanVulNode["Proof"].asString();
		if(!agentScanVulNode["Target"].isNull())
			vulRecordsObject.extendContentJson.agentScanVul.target = agentScanVulNode["Target"].asString();
			auto allCveList = extendContentJsonNode["cveList"]["Cve"];
			for (auto value : allCveList)
				vulRecordsObject.extendContentJson.cveList.push_back(value.asString());
		auto processInfoNode = value["ProcessInfo"];
		if(!processInfoNode["TotalCount"].isNull())
			vulRecordsObject.processInfo.totalCount = std::stoi(processInfoNode["TotalCount"].asString());
		if(!processInfoNode["GmtLastTs"].isNull())
			vulRecordsObject.processInfo.gmtLastTs = std::stol(processInfoNode["GmtLastTs"].asString());
		auto allProcessListNode = processInfoNode["ProcessList"]["Process"];
		for (auto processInfoNodeProcessListProcess : allProcessListNode)
		{
			VulRecord::ProcessInfo::Process processObject;
			if(!processInfoNodeProcessListProcess["Rpm"].isNull())
				processObject.rpm = processInfoNodeProcessListProcess["Rpm"].asString();
			if(!processInfoNodeProcessListProcess["Pname"].isNull())
				processObject.pname = processInfoNodeProcessListProcess["Pname"].asString();
			if(!processInfoNodeProcessListProcess["Pid"].isNull())
				processObject.pid = processInfoNodeProcessListProcess["Pid"].asString();
			auto allSubProcessListNode = processInfoNodeProcessListProcess["SubProcessList"]["SubProcess"];
			for (auto processInfoNodeProcessListProcessSubProcessListSubProcess : allSubProcessListNode)
			{
				VulRecord::ProcessInfo::Process::SubProcess subProcessListObject;
				if(!processInfoNodeProcessListProcessSubProcessListSubProcess["Rpm"].isNull())
					subProcessListObject.rpm = processInfoNodeProcessListProcessSubProcessListSubProcess["Rpm"].asString();
				if(!processInfoNodeProcessListProcessSubProcessListSubProcess["Pname"].isNull())
					subProcessListObject.pname = processInfoNodeProcessListProcessSubProcessListSubProcess["Pname"].asString();
				if(!processInfoNodeProcessListProcessSubProcessListSubProcess["Pid"].isNull())
					subProcessListObject.pid = processInfoNodeProcessListProcessSubProcessListSubProcess["Pid"].asString();
				processObject.subProcessList.push_back(subProcessListObject);
			}
			vulRecordsObject.processInfo.processList.push_back(processObject);
		}
		vulRecords_.push_back(vulRecordsObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeVulListResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeVulListResult::VulRecord> DescribeVulListResult::getVulRecords()const
{
	return vulRecords_;
}

int DescribeVulListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeVulListResult::getCurrentPage()const
{
	return currentPage_;
}

