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

#include <alibabacloud/mse/model/GetGatewayResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

GetGatewayResult::GetGatewayResult() :
	ServiceResult()
{}

GetGatewayResult::GetGatewayResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetGatewayResult::~GetGatewayResult()
{}

void GetGatewayResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["GatewayUniqueId"].isNull())
		data_.gatewayUniqueId = dataNode["GatewayUniqueId"].asString();
	if(!dataNode["Region"].isNull())
		data_.region = dataNode["Region"].asString();
	if(!dataNode["PrimaryUser"].isNull())
		data_.primaryUser = dataNode["PrimaryUser"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = std::stoi(dataNode["Status"].asString());
	if(!dataNode["Vpc"].isNull())
		data_.vpc = dataNode["Vpc"].asString();
	if(!dataNode["Vswitch"].isNull())
		data_.vswitch = dataNode["Vswitch"].asString();
	if(!dataNode["SecurityGroup"].isNull())
		data_.securityGroup = dataNode["SecurityGroup"].asString();
	if(!dataNode["Spec"].isNull())
		data_.spec = dataNode["Spec"].asString();
	if(!dataNode["Replica"].isNull())
		data_.replica = std::stoi(dataNode["Replica"].asString());
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = dataNode["GmtCreate"].asString();
	if(!dataNode["GmtModified"].isNull())
		data_.gmtModified = dataNode["GmtModified"].asString();
	if(!dataNode["Vswitch2"].isNull())
		data_.vswitch2 = dataNode["Vswitch2"].asString();
	if(!dataNode["InstanceId"].isNull())
		data_.instanceId = dataNode["InstanceId"].asString();
	if(!dataNode["ChargeType"].isNull())
		data_.chargeType = dataNode["ChargeType"].asString();
	if(!dataNode["EndDate"].isNull())
		data_.endDate = dataNode["EndDate"].asString();
	if(!dataNode["StatusDesc"].isNull())
		data_.statusDesc = dataNode["StatusDesc"].asString();
	if(!dataNode["MseTag"].isNull())
		data_.mseTag = dataNode["MseTag"].asString();
	if(!dataNode["ResourceGroupId"].isNull())
		data_.resourceGroupId = dataNode["ResourceGroupId"].asString();
	if(!dataNode["TotalReplica"].isNull())
		data_.totalReplica = std::stoi(dataNode["TotalReplica"].asString());
	if(!dataNode["Elastic"].isNull())
		data_.elastic = dataNode["Elastic"].asString() == "true";
	if(!dataNode["ElasticReplica"].isNull())
		data_.elasticReplica = std::stoi(dataNode["ElasticReplica"].asString());
	if(!dataNode["ElasticType"].isNull())
		data_.elasticType = dataNode["ElasticType"].asString();
	auto xtraceDetailsNode = dataNode["XtraceDetails"];
	if(!xtraceDetailsNode["Sample"].isNull())
		data_.xtraceDetails.sample = std::stoi(xtraceDetailsNode["Sample"].asString());
	if(!xtraceDetailsNode["TraceOn"].isNull())
		data_.xtraceDetails.traceOn = xtraceDetailsNode["TraceOn"].asString() == "true";
	auto logConfigDetailsNode = dataNode["LogConfigDetails"];
	if(!logConfigDetailsNode["LogEnabled"].isNull())
		data_.logConfigDetails.logEnabled = logConfigDetailsNode["LogEnabled"].asString() == "true";
	if(!logConfigDetailsNode["ProjectName"].isNull())
		data_.logConfigDetails.projectName = logConfigDetailsNode["ProjectName"].asString();
	if(!logConfigDetailsNode["LogStoreName"].isNull())
		data_.logConfigDetails.logStoreName = logConfigDetailsNode["LogStoreName"].asString();
	auto elasticPolicyNode = dataNode["ElasticPolicy"];
	if(!elasticPolicyNode["MaxReplica"].isNull())
		data_.elasticPolicy.maxReplica = std::stoi(elasticPolicyNode["MaxReplica"].asString());
	if(!elasticPolicyNode["ElasticType"].isNull())
		data_.elasticPolicy.elasticType = elasticPolicyNode["ElasticType"].asString();
	auto allTimePolicyListNode = elasticPolicyNode["TimePolicyList"]["timePolicyListItem"];
	for (auto elasticPolicyNodeTimePolicyListtimePolicyListItem : allTimePolicyListNode)
	{
		Data::ElasticPolicy::TimePolicyListItem timePolicyListItemObject;
		if(!elasticPolicyNodeTimePolicyListtimePolicyListItem["DesiredReplica"].isNull())
			timePolicyListItemObject.desiredReplica = std::stoi(elasticPolicyNodeTimePolicyListtimePolicyListItem["DesiredReplica"].asString());
		if(!elasticPolicyNodeTimePolicyListtimePolicyListItem["StartTime"].isNull())
			timePolicyListItemObject.startTime = elasticPolicyNodeTimePolicyListtimePolicyListItem["StartTime"].asString();
		if(!elasticPolicyNodeTimePolicyListtimePolicyListItem["EndTime"].isNull())
			timePolicyListItemObject.endTime = elasticPolicyNodeTimePolicyListtimePolicyListItem["EndTime"].asString();
		data_.elasticPolicy.timePolicyList.push_back(timePolicyListItemObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetGatewayResult::getMessage()const
{
	return message_;
}

int GetGatewayResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetGatewayResult::Data GetGatewayResult::getData()const
{
	return data_;
}

int GetGatewayResult::getCode()const
{
	return code_;
}

bool GetGatewayResult::getSuccess()const
{
	return success_;
}

