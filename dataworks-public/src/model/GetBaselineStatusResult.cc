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

#include <alibabacloud/dataworks-public/model/GetBaselineStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetBaselineStatusResult::GetBaselineStatusResult() :
	ServiceResult()
{}

GetBaselineStatusResult::GetBaselineStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetBaselineStatusResult::~GetBaselineStatusResult()
{}

void GetBaselineStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["Owner"].isNull())
		data_.owner = dataNode["Owner"].asString();
	if(!dataNode["FinishTime"].isNull())
		data_.finishTime = std::stol(dataNode["FinishTime"].asString());
	if(!dataNode["ProjectId"].isNull())
		data_.projectId = std::stol(dataNode["ProjectId"].asString());
	if(!dataNode["Priority"].isNull())
		data_.priority = std::stoi(dataNode["Priority"].asString());
	if(!dataNode["EndCast"].isNull())
		data_.endCast = std::stol(dataNode["EndCast"].asString());
	if(!dataNode["InGroupId"].isNull())
		data_.inGroupId = std::stoi(dataNode["InGroupId"].asString());
	if(!dataNode["BaselineName"].isNull())
		data_.baselineName = dataNode["BaselineName"].asString();
	if(!dataNode["BaselineId"].isNull())
		data_.baselineId = std::stol(dataNode["BaselineId"].asString());
	if(!dataNode["FinishStatus"].isNull())
		data_.finishStatus = dataNode["FinishStatus"].asString();
	if(!dataNode["Bizdate"].isNull())
		data_.bizdate = std::stol(dataNode["Bizdate"].asString());
	if(!dataNode["Buffer"].isNull())
		data_.buffer = std::stof(dataNode["Buffer"].asString());
	if(!dataNode["SlaTime"].isNull())
		data_.slaTime = std::stol(dataNode["SlaTime"].asString());
	if(!dataNode["ExpTime"].isNull())
		data_.expTime = std::stol(dataNode["ExpTime"].asString());
	auto lastInstanceNode = dataNode["LastInstance"];
	if(!lastInstanceNode["Status"].isNull())
		data_.lastInstance.status = lastInstanceNode["Status"].asString();
	if(!lastInstanceNode["Owner"].isNull())
		data_.lastInstance.owner = lastInstanceNode["Owner"].asString();
	if(!lastInstanceNode["FinishTime"].isNull())
		data_.lastInstance.finishTime = std::stol(lastInstanceNode["FinishTime"].asString());
	if(!lastInstanceNode["NodeName"].isNull())
		data_.lastInstance.nodeName = lastInstanceNode["NodeName"].asString();
	if(!lastInstanceNode["ProjectId"].isNull())
		data_.lastInstance.projectId = std::stol(lastInstanceNode["ProjectId"].asString());
	if(!lastInstanceNode["InstanceId"].isNull())
		data_.lastInstance.instanceId = std::stol(lastInstanceNode["InstanceId"].asString());
	if(!lastInstanceNode["EndCast"].isNull())
		data_.lastInstance.endCast = std::stol(lastInstanceNode["EndCast"].asString());
	if(!lastInstanceNode["NodeId"].isNull())
		data_.lastInstance.nodeId = std::stol(lastInstanceNode["NodeId"].asString());
	auto blockInstanceNode = dataNode["BlockInstance"];
	if(!blockInstanceNode["Status"].isNull())
		data_.blockInstance.status = blockInstanceNode["Status"].asString();
	if(!blockInstanceNode["Owner"].isNull())
		data_.blockInstance.owner = blockInstanceNode["Owner"].asString();
	if(!blockInstanceNode["FinishTime"].isNull())
		data_.blockInstance.finishTime = std::stol(blockInstanceNode["FinishTime"].asString());
	if(!blockInstanceNode["NodeName"].isNull())
		data_.blockInstance.nodeName = blockInstanceNode["NodeName"].asString();
	if(!blockInstanceNode["ProjectId"].isNull())
		data_.blockInstance.projectId = std::stol(blockInstanceNode["ProjectId"].asString());
	if(!blockInstanceNode["InstanceId"].isNull())
		data_.blockInstance.instanceId = std::stol(blockInstanceNode["InstanceId"].asString());
	if(!blockInstanceNode["EndCast"].isNull())
		data_.blockInstance.endCast = std::stol(blockInstanceNode["EndCast"].asString());
	if(!blockInstanceNode["NodeId"].isNull())
		data_.blockInstance.nodeId = std::stol(blockInstanceNode["NodeId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int GetBaselineStatusResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetBaselineStatusResult::Data GetBaselineStatusResult::getData()const
{
	return data_;
}

std::string GetBaselineStatusResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetBaselineStatusResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetBaselineStatusResult::getSuccess()const
{
	return success_;
}

