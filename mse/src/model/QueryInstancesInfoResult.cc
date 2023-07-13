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

#include <alibabacloud/mse/model/QueryInstancesInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

QueryInstancesInfoResult::QueryInstancesInfoResult() :
	ServiceResult()
{}

QueryInstancesInfoResult::QueryInstancesInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryInstancesInfoResult::~QueryInstancesInfoResult()
{}

void QueryInstancesInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["InstanceModels"];
	for (auto valueDataInstanceModels : allDataNode)
	{
		InstanceModels dataObject;
		if(!valueDataInstanceModels["HealthStatus"].isNull())
			dataObject.healthStatus = valueDataInstanceModels["HealthStatus"].asString();
		if(!valueDataInstanceModels["Role"].isNull())
			dataObject.role = valueDataInstanceModels["Role"].asString();
		if(!valueDataInstanceModels["PodName"].isNull())
			dataObject.podName = valueDataInstanceModels["PodName"].asString();
		if(!valueDataInstanceModels["Ip"].isNull())
			dataObject.ip = valueDataInstanceModels["Ip"].asString();
		if(!valueDataInstanceModels["InternetIp"].isNull())
			dataObject.internetIp = valueDataInstanceModels["InternetIp"].asString();
		if(!valueDataInstanceModels["SingleTunnelVip"].isNull())
			dataObject.singleTunnelVip = valueDataInstanceModels["SingleTunnelVip"].asString();
		if(!valueDataInstanceModels["CreationTimestamp"].isNull())
			dataObject.creationTimestamp = valueDataInstanceModels["CreationTimestamp"].asString();
		if(!valueDataInstanceModels["ClientPort"].isNull())
			dataObject.clientPort = valueDataInstanceModels["ClientPort"].asString();
		if(!valueDataInstanceModels["Zone"].isNull())
			dataObject.zone = valueDataInstanceModels["Zone"].asString();
		if(!valueDataInstanceModels["ZoneDistributed"].isNull())
			dataObject.zoneDistributed = valueDataInstanceModels["ZoneDistributed"].asString() == "true";
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["HttpCode"].isNull())
		httpCode_ = value["HttpCode"].asString();

}

std::string QueryInstancesInfoResult::getHttpCode()const
{
	return httpCode_;
}

std::string QueryInstancesInfoResult::getMessage()const
{
	return message_;
}

std::vector<QueryInstancesInfoResult::InstanceModels> QueryInstancesInfoResult::getData()const
{
	return data_;
}

std::string QueryInstancesInfoResult::getErrorCode()const
{
	return errorCode_;
}

bool QueryInstancesInfoResult::getSuccess()const
{
	return success_;
}

