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

#include <alibabacloud/schedulerx2/model/ReadSchedulerxDesignateDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Schedulerx2;
using namespace AlibabaCloud::Schedulerx2::Model;

ReadSchedulerxDesignateDetailResult::ReadSchedulerxDesignateDetailResult() :
	ServiceResult()
{}

ReadSchedulerxDesignateDetailResult::ReadSchedulerxDesignateDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ReadSchedulerxDesignateDetailResult::~ReadSchedulerxDesignateDetailResult()
{}

void ReadSchedulerxDesignateDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allDesignateDetailVosNode = dataNode["DesignateDetailVos"]["designateDetailVo"];
	for (auto dataNodeDesignateDetailVosdesignateDetailVo : allDesignateDetailVosNode)
	{
		Data::DesignateDetailVo designateDetailVoObject;
		if(!dataNodeDesignateDetailVosdesignateDetailVo["Offline"].isNull())
			designateDetailVoObject.offline = dataNodeDesignateDetailVosdesignateDetailVo["Offline"].asString() == "true";
		if(!dataNodeDesignateDetailVosdesignateDetailVo["Size"].isNull())
			designateDetailVoObject.size = std::stoi(dataNodeDesignateDetailVosdesignateDetailVo["Size"].asString());
		if(!dataNodeDesignateDetailVosdesignateDetailVo["Starter"].isNull())
			designateDetailVoObject.starter = dataNodeDesignateDetailVosdesignateDetailVo["Starter"].asString();
		if(!dataNodeDesignateDetailVosdesignateDetailVo["Busy"].isNull())
			designateDetailVoObject.busy = dataNodeDesignateDetailVosdesignateDetailVo["Busy"].asString();
		if(!dataNodeDesignateDetailVosdesignateDetailVo["Checked"].isNull())
			designateDetailVoObject.checked = dataNodeDesignateDetailVosdesignateDetailVo["Checked"].asString() == "true";
		if(!dataNodeDesignateDetailVosdesignateDetailVo["Version"].isNull())
			designateDetailVoObject.version = dataNodeDesignateDetailVosdesignateDetailVo["Version"].asString();
		if(!dataNodeDesignateDetailVosdesignateDetailVo["Key"].isNull())
			designateDetailVoObject.key = dataNodeDesignateDetailVosdesignateDetailVo["Key"].asString();
		auto metricsNode = value["Metrics"];
		if(!metricsNode["CpuLoad1"].isNull())
			designateDetailVoObject.metrics.cpuLoad1 = metricsNode["CpuLoad1"].asString();
		if(!metricsNode["CpuLoad5"].isNull())
			designateDetailVoObject.metrics.cpuLoad5 = metricsNode["CpuLoad5"].asString();
		if(!metricsNode["CpuProcessors"].isNull())
			designateDetailVoObject.metrics.cpuProcessors = std::stoi(metricsNode["CpuProcessors"].asString());
		if(!metricsNode["Heap1Usage"].isNull())
			designateDetailVoObject.metrics.heap1Usage = metricsNode["Heap1Usage"].asString();
		if(!metricsNode["Heap5Usage"].isNull())
			designateDetailVoObject.metrics.heap5Usage = metricsNode["Heap5Usage"].asString();
		if(!metricsNode["Heap1Used"].isNull())
			designateDetailVoObject.metrics.heap1Used = metricsNode["Heap1Used"].asString();
		if(!metricsNode["HeapMax"].isNull())
			designateDetailVoObject.metrics.heapMax = std::stoi(metricsNode["HeapMax"].asString());
		if(!metricsNode["DiskUsage"].isNull())
			designateDetailVoObject.metrics.diskUsage = metricsNode["DiskUsage"].asString();
		if(!metricsNode["DiskUsed"].isNull())
			designateDetailVoObject.metrics.diskUsed = std::stoi(metricsNode["DiskUsed"].asString());
		if(!metricsNode["DiskMax"].isNull())
			designateDetailVoObject.metrics.diskMax = std::stoi(metricsNode["DiskMax"].asString());
		if(!metricsNode["SharePoolQueueSize"].isNull())
			designateDetailVoObject.metrics.sharePoolQueueSize = std::stoi(metricsNode["SharePoolQueueSize"].asString());
		if(!metricsNode["SharePoolAvailableSize"].isNull())
			designateDetailVoObject.metrics.sharePoolAvailableSize = std::stoi(metricsNode["SharePoolAvailableSize"].asString());
		if(!metricsNode["ExecCount"].isNull())
			designateDetailVoObject.metrics.execCount = std::stol(metricsNode["ExecCount"].asString());
		data_.designateDetailVos.push_back(designateDetailVoObject);
	}
	auto accessDeniedDetailNode = value["AccessDeniedDetail"];
	if(!accessDeniedDetailNode["AuthAction"].isNull())
		accessDeniedDetail_.authAction = accessDeniedDetailNode["AuthAction"].asString();
	if(!accessDeniedDetailNode["AuthPrincipalDisplayName"].isNull())
		accessDeniedDetail_.authPrincipalDisplayName = accessDeniedDetailNode["AuthPrincipalDisplayName"].asString();
	if(!accessDeniedDetailNode["AuthPrincipalOwnerId"].isNull())
		accessDeniedDetail_.authPrincipalOwnerId = accessDeniedDetailNode["AuthPrincipalOwnerId"].asString();
	if(!accessDeniedDetailNode["AuthPrincipalType"].isNull())
		accessDeniedDetail_.authPrincipalType = accessDeniedDetailNode["AuthPrincipalType"].asString();
	if(!accessDeniedDetailNode["EncodedDiagnosticMessage"].isNull())
		accessDeniedDetail_.encodedDiagnosticMessage = accessDeniedDetailNode["EncodedDiagnosticMessage"].asString();
	if(!accessDeniedDetailNode["NoPermissionType"].isNull())
		accessDeniedDetail_.noPermissionType = accessDeniedDetailNode["NoPermissionType"].asString();
	if(!accessDeniedDetailNode["PolicyType"].isNull())
		accessDeniedDetail_.policyType = accessDeniedDetailNode["PolicyType"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

ReadSchedulerxDesignateDetailResult::AccessDeniedDetail ReadSchedulerxDesignateDetailResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

std::string ReadSchedulerxDesignateDetailResult::getMessage()const
{
	return message_;
}

ReadSchedulerxDesignateDetailResult::Data ReadSchedulerxDesignateDetailResult::getData()const
{
	return data_;
}

int ReadSchedulerxDesignateDetailResult::getCode()const
{
	return code_;
}

bool ReadSchedulerxDesignateDetailResult::getSuccess()const
{
	return success_;
}

