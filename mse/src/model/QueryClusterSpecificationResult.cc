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

#include <alibabacloud/mse/model/QueryClusterSpecificationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

QueryClusterSpecificationResult::QueryClusterSpecificationResult() :
	ServiceResult()
{}

QueryClusterSpecificationResult::QueryClusterSpecificationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryClusterSpecificationResult::~QueryClusterSpecificationResult()
{}

void QueryClusterSpecificationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["ClusterSpecificationName"].isNull())
			dataObject.clusterSpecificationName = valueDataDataItem["ClusterSpecificationName"].asString();
		if(!valueDataDataItem["MemoryCapacity"].isNull())
			dataObject.memoryCapacity = valueDataDataItem["MemoryCapacity"].asString();
		if(!valueDataDataItem["CpuCapacity"].isNull())
			dataObject.cpuCapacity = valueDataDataItem["CpuCapacity"].asString();
		data_.push_back(dataObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryClusterSpecificationResult::getMessage()const
{
	return message_;
}

int QueryClusterSpecificationResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<QueryClusterSpecificationResult::DataItem> QueryClusterSpecificationResult::getData()const
{
	return data_;
}

std::string QueryClusterSpecificationResult::getErrorCode()const
{
	return errorCode_;
}

int QueryClusterSpecificationResult::getCode()const
{
	return code_;
}

bool QueryClusterSpecificationResult::getSuccess()const
{
	return success_;
}

