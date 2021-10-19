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

#include <alibabacloud/retailcloud/model/DescribeDeployOrderDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

DescribeDeployOrderDetailResult::DescribeDeployOrderDetailResult() :
	ServiceResult()
{}

DescribeDeployOrderDetailResult::DescribeDeployOrderDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDeployOrderDetailResult::~DescribeDeployOrderDetailResult()
{}

void DescribeDeployOrderDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Status"].isNull())
		result_.status = std::stoi(resultNode["Status"].asString());
	if(!resultNode["AppInstanceType"].isNull())
		result_.appInstanceType = resultNode["AppInstanceType"].asString();
	if(!resultNode["DeployType"].isNull())
		result_.deployType = resultNode["DeployType"].asString();
	if(!resultNode["UserId"].isNull())
		result_.userId = resultNode["UserId"].asString();
	if(!resultNode["PartitionTypeName"].isNull())
		result_.partitionTypeName = resultNode["PartitionTypeName"].asString();
	if(!resultNode["StatusName"].isNull())
		result_.statusName = resultNode["StatusName"].asString();
	if(!resultNode["EnvType"].isNull())
		result_.envType = resultNode["EnvType"].asString();
	if(!resultNode["TotalAppInstanceCt"].isNull())
		result_.totalAppInstanceCt = std::stoi(resultNode["TotalAppInstanceCt"].asString());
	if(!resultNode["ElapsedTime"].isNull())
		result_.elapsedTime = std::stoi(resultNode["ElapsedTime"].asString());
	if(!resultNode["Description"].isNull())
		result_.description = resultNode["Description"].asString();
	if(!resultNode["Name"].isNull())
		result_.name = resultNode["Name"].asString();
	if(!resultNode["DeployTypeName"].isNull())
		result_.deployTypeName = resultNode["DeployTypeName"].asString();
	if(!resultNode["FinishAppInstanceCt"].isNull())
		result_.finishAppInstanceCt = std::stoi(resultNode["FinishAppInstanceCt"].asString());
	if(!resultNode["SchemaId"].isNull())
		result_.schemaId = std::stol(resultNode["SchemaId"].asString());
	if(!resultNode["DeployPauseType"].isNull())
		result_.deployPauseType = resultNode["DeployPauseType"].asString();
	if(!resultNode["Result"].isNull())
		result_.result = std::stoi(resultNode["Result"].asString());
	if(!resultNode["FailureRate"].isNull())
		result_.failureRate = resultNode["FailureRate"].asString();
	if(!resultNode["TotalPartitions"].isNull())
		result_.totalPartitions = std::stoi(resultNode["TotalPartitions"].asString());
	if(!resultNode["UserNick"].isNull())
		result_.userNick = resultNode["UserNick"].asString();
	if(!resultNode["EndTime"].isNull())
		result_.endTime = resultNode["EndTime"].asString();
	if(!resultNode["StartTime"].isNull())
		result_.startTime = resultNode["StartTime"].asString();
	if(!resultNode["DeployOrderId"].isNull())
		result_.deployOrderId = std::stol(resultNode["DeployOrderId"].asString());
	if(!resultNode["DeployPauseTypeName"].isNull())
		result_.deployPauseTypeName = resultNode["DeployPauseTypeName"].asString();
	if(!resultNode["ResultName"].isNull())
		result_.resultName = resultNode["ResultName"].asString();
	if(!resultNode["CurrentPartitionNum"].isNull())
		result_.currentPartitionNum = std::stoi(resultNode["CurrentPartitionNum"].asString());
	if(!resultNode["PartitionType"].isNull())
		result_.partitionType = resultNode["PartitionType"].asString();
	if(!resultNode["EnvId"].isNull())
		result_.envId = std::stol(resultNode["EnvId"].asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrMsg"].isNull())
		errMsg_ = value["ErrMsg"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeDeployOrderDetailResult::getErrMsg()const
{
	return errMsg_;
}

int DescribeDeployOrderDetailResult::getCode()const
{
	return code_;
}

bool DescribeDeployOrderDetailResult::getSuccess()const
{
	return success_;
}

DescribeDeployOrderDetailResult::Result DescribeDeployOrderDetailResult::getResult()const
{
	return result_;
}

