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

#include <alibabacloud/mse/model/ListEurekaInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListEurekaInstancesResult::ListEurekaInstancesResult() :
	ServiceResult()
{}

ListEurekaInstancesResult::ListEurekaInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEurekaInstancesResult::~ListEurekaInstancesResult()
{}

void ListEurekaInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["EurekaInstance"];
	for (auto valueDataEurekaInstance : allDataNode)
	{
		EurekaInstance dataObject;
		if(!valueDataEurekaInstance["Status"].isNull())
			dataObject.status = valueDataEurekaInstance["Status"].asString();
		if(!valueDataEurekaInstance["LastDirtyTimestamp"].isNull())
			dataObject.lastDirtyTimestamp = std::stol(valueDataEurekaInstance["LastDirtyTimestamp"].asString());
		if(!valueDataEurekaInstance["IpAddr"].isNull())
			dataObject.ipAddr = valueDataEurekaInstance["IpAddr"].asString();
		if(!valueDataEurekaInstance["HomePageUrl"].isNull())
			dataObject.homePageUrl = valueDataEurekaInstance["HomePageUrl"].asString();
		if(!valueDataEurekaInstance["HostName"].isNull())
			dataObject.hostName = valueDataEurekaInstance["HostName"].asString();
		if(!valueDataEurekaInstance["InstanceId"].isNull())
			dataObject.instanceId = valueDataEurekaInstance["InstanceId"].asString();
		if(!valueDataEurekaInstance["Port"].isNull())
			dataObject.port = std::stoi(valueDataEurekaInstance["Port"].asString());
		if(!valueDataEurekaInstance["SecurePort"].isNull())
			dataObject.securePort = std::stoi(valueDataEurekaInstance["SecurePort"].asString());
		if(!valueDataEurekaInstance["App"].isNull())
			dataObject.app = valueDataEurekaInstance["App"].asString();
		if(!valueDataEurekaInstance["DurationInSecs"].isNull())
			dataObject.durationInSecs = std::stoi(valueDataEurekaInstance["DurationInSecs"].asString());
		if(!valueDataEurekaInstance["LastUpdatedTimestamp"].isNull())
			dataObject.lastUpdatedTimestamp = std::stol(valueDataEurekaInstance["LastUpdatedTimestamp"].asString());
		if(!valueDataEurekaInstance["RenewalIntervalInSecs"].isNull())
			dataObject.renewalIntervalInSecs = std::stoi(valueDataEurekaInstance["RenewalIntervalInSecs"].asString());
		if(!valueDataEurekaInstance["VipAddress"].isNull())
			dataObject.vipAddress = valueDataEurekaInstance["VipAddress"].asString();
		if(!valueDataEurekaInstance["Metadata"].isNull())
			dataObject.metadata = valueDataEurekaInstance["Metadata"].asString();
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

std::string ListEurekaInstancesResult::getHttpCode()const
{
	return httpCode_;
}

int ListEurekaInstancesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListEurekaInstancesResult::getMessage()const
{
	return message_;
}

int ListEurekaInstancesResult::getPageSize()const
{
	return pageSize_;
}

int ListEurekaInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListEurekaInstancesResult::EurekaInstance> ListEurekaInstancesResult::getData()const
{
	return data_;
}

std::string ListEurekaInstancesResult::getErrorCode()const
{
	return errorCode_;
}

bool ListEurekaInstancesResult::getSuccess()const
{
	return success_;
}

