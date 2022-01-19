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

#include <alibabacloud/mse/model/ListAnsInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListAnsInstancesResult::ListAnsInstancesResult() :
	ServiceResult()
{}

ListAnsInstancesResult::ListAnsInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAnsInstancesResult::~ListAnsInstancesResult()
{}

void ListAnsInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["NacosAnsInstance"];
	for (auto valueDataNacosAnsInstance : allDataNode)
	{
		NacosAnsInstance dataObject;
		if(!valueDataNacosAnsInstance["DefaultKey"].isNull())
			dataObject.defaultKey = valueDataNacosAnsInstance["DefaultKey"].asString();
		if(!valueDataNacosAnsInstance["Ephemeral"].isNull())
			dataObject.ephemeral = valueDataNacosAnsInstance["Ephemeral"].asString() == "true";
		if(!valueDataNacosAnsInstance["Marked"].isNull())
			dataObject.marked = valueDataNacosAnsInstance["Marked"].asString() == "true";
		if(!valueDataNacosAnsInstance["Ip"].isNull())
			dataObject.ip = valueDataNacosAnsInstance["Ip"].asString();
		if(!valueDataNacosAnsInstance["InstanceId"].isNull())
			dataObject.instanceId = valueDataNacosAnsInstance["InstanceId"].asString();
		if(!valueDataNacosAnsInstance["Port"].isNull())
			dataObject.port = std::stoi(valueDataNacosAnsInstance["Port"].asString());
		if(!valueDataNacosAnsInstance["LastBeat"].isNull())
			dataObject.lastBeat = std::stol(valueDataNacosAnsInstance["LastBeat"].asString());
		if(!valueDataNacosAnsInstance["OkCount"].isNull())
			dataObject.okCount = std::stoi(valueDataNacosAnsInstance["OkCount"].asString());
		if(!valueDataNacosAnsInstance["Weight"].isNull())
			dataObject.weight = std::stoi(valueDataNacosAnsInstance["Weight"].asString());
		if(!valueDataNacosAnsInstance["InstanceHeartBeatInterval"].isNull())
			dataObject.instanceHeartBeatInterval = std::stoi(valueDataNacosAnsInstance["InstanceHeartBeatInterval"].asString());
		if(!valueDataNacosAnsInstance["IpDeleteTimeout"].isNull())
			dataObject.ipDeleteTimeout = std::stoi(valueDataNacosAnsInstance["IpDeleteTimeout"].asString());
		if(!valueDataNacosAnsInstance["App"].isNull())
			dataObject.app = valueDataNacosAnsInstance["App"].asString();
		if(!valueDataNacosAnsInstance["FailCount"].isNull())
			dataObject.failCount = std::stoi(valueDataNacosAnsInstance["FailCount"].asString());
		if(!valueDataNacosAnsInstance["Healthy"].isNull())
			dataObject.healthy = valueDataNacosAnsInstance["Healthy"].asString() == "true";
		if(!valueDataNacosAnsInstance["Enabled"].isNull())
			dataObject.enabled = valueDataNacosAnsInstance["Enabled"].asString() == "true";
		if(!valueDataNacosAnsInstance["DatumKey"].isNull())
			dataObject.datumKey = valueDataNacosAnsInstance["DatumKey"].asString();
		if(!valueDataNacosAnsInstance["ClusterName"].isNull())
			dataObject.clusterName = valueDataNacosAnsInstance["ClusterName"].asString();
		if(!valueDataNacosAnsInstance["InstanceHeartBeatTimeOut"].isNull())
			dataObject.instanceHeartBeatTimeOut = std::stoi(valueDataNacosAnsInstance["InstanceHeartBeatTimeOut"].asString());
		if(!valueDataNacosAnsInstance["ServiceName"].isNull())
			dataObject.serviceName = valueDataNacosAnsInstance["ServiceName"].asString();
		if(!valueDataNacosAnsInstance["Metadata"].isNull())
			dataObject.metadata = valueDataNacosAnsInstance["Metadata"].asString();
		data_.push_back(dataObject);
	}
	if(!value["HttpCode"].isNull())
		httpCode_ = value["HttpCode"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListAnsInstancesResult::getHttpCode()const
{
	return httpCode_;
}

int ListAnsInstancesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListAnsInstancesResult::getMessage()const
{
	return message_;
}

int ListAnsInstancesResult::getPageSize()const
{
	return pageSize_;
}

int ListAnsInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListAnsInstancesResult::NacosAnsInstance> ListAnsInstancesResult::getData()const
{
	return data_;
}

std::string ListAnsInstancesResult::getErrorCode()const
{
	return errorCode_;
}

bool ListAnsInstancesResult::getSuccess()const
{
	return success_;
}

