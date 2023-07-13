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

#include <alibabacloud/mse/model/ListGatewayResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListGatewayResult::ListGatewayResult() :
	ServiceResult()
{}

ListGatewayResult::ListGatewayResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGatewayResult::~ListGatewayResult()
{}

void ListGatewayResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stol(dataNode["TotalSize"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allResultNode = dataNode["Result"]["Gateways"];
	for (auto dataNodeResultGateways : allResultNode)
	{
		Data::Gateways gatewaysObject;
		if(!dataNodeResultGateways["Id"].isNull())
			gatewaysObject.id = std::stol(dataNodeResultGateways["Id"].asString());
		if(!dataNodeResultGateways["Name"].isNull())
			gatewaysObject.name = dataNodeResultGateways["Name"].asString();
		if(!dataNodeResultGateways["GatewayUniqueId"].isNull())
			gatewaysObject.gatewayUniqueId = dataNodeResultGateways["GatewayUniqueId"].asString();
		if(!dataNodeResultGateways["GatewayType"].isNull())
			gatewaysObject.gatewayType = dataNodeResultGateways["GatewayType"].asString();
		if(!dataNodeResultGateways["Region"].isNull())
			gatewaysObject.region = dataNodeResultGateways["Region"].asString();
		if(!dataNodeResultGateways["PrimaryUser"].isNull())
			gatewaysObject.primaryUser = dataNodeResultGateways["PrimaryUser"].asString();
		if(!dataNodeResultGateways["Status"].isNull())
			gatewaysObject.status = std::stoi(dataNodeResultGateways["Status"].asString());
		if(!dataNodeResultGateways["AhasOn"].isNull())
			gatewaysObject.ahasOn = dataNodeResultGateways["AhasOn"].asString() == "true";
		if(!dataNodeResultGateways["ArmsOn"].isNull())
			gatewaysObject.armsOn = dataNodeResultGateways["ArmsOn"].asString() == "true";
		if(!dataNodeResultGateways["Spec"].isNull())
			gatewaysObject.spec = dataNodeResultGateways["Spec"].asString();
		if(!dataNodeResultGateways["Replica"].isNull())
			gatewaysObject.replica = std::stoi(dataNodeResultGateways["Replica"].asString());
		if(!dataNodeResultGateways["GmtCreate"].isNull())
			gatewaysObject.gmtCreate = dataNodeResultGateways["GmtCreate"].asString();
		if(!dataNodeResultGateways["GmtModified"].isNull())
			gatewaysObject.gmtModified = dataNodeResultGateways["GmtModified"].asString();
		if(!dataNodeResultGateways["StatusDesc"].isNull())
			gatewaysObject.statusDesc = dataNodeResultGateways["StatusDesc"].asString();
		if(!dataNodeResultGateways["Upgrade"].isNull())
			gatewaysObject.upgrade = dataNodeResultGateways["Upgrade"].asString() == "true";
		if(!dataNodeResultGateways["MustUpgrade"].isNull())
			gatewaysObject.mustUpgrade = dataNodeResultGateways["MustUpgrade"].asString() == "true";
		if(!dataNodeResultGateways["SupportWasm"].isNull())
			gatewaysObject.supportWasm = dataNodeResultGateways["SupportWasm"].asString() == "true";
		if(!dataNodeResultGateways["CurrentVersion"].isNull())
			gatewaysObject.currentVersion = dataNodeResultGateways["CurrentVersion"].asString();
		if(!dataNodeResultGateways["AppVersion"].isNull())
			gatewaysObject.appVersion = dataNodeResultGateways["AppVersion"].asString();
		if(!dataNodeResultGateways["LatestVersion"].isNull())
			gatewaysObject.latestVersion = dataNodeResultGateways["LatestVersion"].asString();
		if(!dataNodeResultGateways["Vswitch2"].isNull())
			gatewaysObject.vswitch2 = dataNodeResultGateways["Vswitch2"].asString();
		if(!dataNodeResultGateways["InstanceId"].isNull())
			gatewaysObject.instanceId = dataNodeResultGateways["InstanceId"].asString();
		if(!dataNodeResultGateways["ChargeType"].isNull())
			gatewaysObject.chargeType = dataNodeResultGateways["ChargeType"].asString();
		if(!dataNodeResultGateways["EndDate"].isNull())
			gatewaysObject.endDate = dataNodeResultGateways["EndDate"].asString();
		if(!dataNodeResultGateways["Tag"].isNull())
			gatewaysObject.tag = dataNodeResultGateways["Tag"].asString();
		if(!dataNodeResultGateways["GatewayVersion"].isNull())
			gatewaysObject.gatewayVersion = dataNodeResultGateways["GatewayVersion"].asString();
		if(!dataNodeResultGateways["RollBack"].isNull())
			gatewaysObject.rollBack = dataNodeResultGateways["RollBack"].asString() == "true";
		if(!dataNodeResultGateways["MseTag"].isNull())
			gatewaysObject.mseTag = dataNodeResultGateways["MseTag"].asString();
		if(!dataNodeResultGateways["ResourceGroupId"].isNull())
			gatewaysObject.resourceGroupId = dataNodeResultGateways["ResourceGroupId"].asString();
		if(!dataNodeResultGateways["TotalReplica"].isNull())
			gatewaysObject.totalReplica = std::stoi(dataNodeResultGateways["TotalReplica"].asString());
		if(!dataNodeResultGateways["Elastic"].isNull())
			gatewaysObject.elastic = dataNodeResultGateways["Elastic"].asString() == "true";
		if(!dataNodeResultGateways["ElasticReplica"].isNull())
			gatewaysObject.elasticReplica = std::stoi(dataNodeResultGateways["ElasticReplica"].asString());
		if(!dataNodeResultGateways["ElasticType"].isNull())
			gatewaysObject.elasticType = dataNodeResultGateways["ElasticType"].asString();
		if(!dataNodeResultGateways["ElasticInstanceId"].isNull())
			gatewaysObject.elasticInstanceId = dataNodeResultGateways["ElasticInstanceId"].asString();
		auto allSlbNode = dataNodeResultGateways["Slb"]["slbItem"];
		for (auto dataNodeResultGatewaysSlbslbItem : allSlbNode)
		{
			Data::Gateways::SlbItem slbObject;
			if(!dataNodeResultGatewaysSlbslbItem["SlbIp"].isNull())
				slbObject.slbIp = dataNodeResultGatewaysSlbslbItem["SlbIp"].asString();
			if(!dataNodeResultGatewaysSlbslbItem["SlbPort"].isNull())
				slbObject.slbPort = dataNodeResultGatewaysSlbslbItem["SlbPort"].asString();
			if(!dataNodeResultGatewaysSlbslbItem["SlbSpec"].isNull())
				slbObject.slbSpec = dataNodeResultGatewaysSlbslbItem["SlbSpec"].asString();
			if(!dataNodeResultGatewaysSlbslbItem["Type"].isNull())
				slbObject.type = dataNodeResultGatewaysSlbslbItem["Type"].asString();
			if(!dataNodeResultGatewaysSlbslbItem["GatewaySlbStatus"].isNull())
				slbObject.gatewaySlbStatus = dataNodeResultGatewaysSlbslbItem["GatewaySlbStatus"].asString();
			if(!dataNodeResultGatewaysSlbslbItem["StatusDesc"].isNull())
				slbObject.statusDesc = dataNodeResultGatewaysSlbslbItem["StatusDesc"].asString();
			if(!dataNodeResultGatewaysSlbslbItem["GatewaySlbMode"].isNull())
				slbObject.gatewaySlbMode = dataNodeResultGatewaysSlbslbItem["GatewaySlbMode"].asString();
			if(!dataNodeResultGatewaysSlbslbItem["SlbId"].isNull())
				slbObject.slbId = dataNodeResultGatewaysSlbslbItem["SlbId"].asString();
			gatewaysObject.slb.push_back(slbObject);
		}
		auto allInternetSlbNode = dataNodeResultGateways["InternetSlb"]["internetSlbItem"];
		for (auto dataNodeResultGatewaysInternetSlbinternetSlbItem : allInternetSlbNode)
		{
			Data::Gateways::InternetSlbItem internetSlbObject;
			if(!dataNodeResultGatewaysInternetSlbinternetSlbItem["SlbIp"].isNull())
				internetSlbObject.slbIp = dataNodeResultGatewaysInternetSlbinternetSlbItem["SlbIp"].asString();
			if(!dataNodeResultGatewaysInternetSlbinternetSlbItem["SlbPort"].isNull())
				internetSlbObject.slbPort = dataNodeResultGatewaysInternetSlbinternetSlbItem["SlbPort"].asString();
			if(!dataNodeResultGatewaysInternetSlbinternetSlbItem["SlbSpec"].isNull())
				internetSlbObject.slbSpec = dataNodeResultGatewaysInternetSlbinternetSlbItem["SlbSpec"].asString();
			if(!dataNodeResultGatewaysInternetSlbinternetSlbItem["Type"].isNull())
				internetSlbObject.type = dataNodeResultGatewaysInternetSlbinternetSlbItem["Type"].asString();
			if(!dataNodeResultGatewaysInternetSlbinternetSlbItem["InternetNetworkFlow"].isNull())
				internetSlbObject.internetNetworkFlow = dataNodeResultGatewaysInternetSlbinternetSlbItem["InternetNetworkFlow"].asString();
			if(!dataNodeResultGatewaysInternetSlbinternetSlbItem["GatewaySlbStatus"].isNull())
				internetSlbObject.gatewaySlbStatus = dataNodeResultGatewaysInternetSlbinternetSlbItem["GatewaySlbStatus"].asString();
			if(!dataNodeResultGatewaysInternetSlbinternetSlbItem["StatusDesc"].isNull())
				internetSlbObject.statusDesc = dataNodeResultGatewaysInternetSlbinternetSlbItem["StatusDesc"].asString();
			if(!dataNodeResultGatewaysInternetSlbinternetSlbItem["GatewaySlbMode"].isNull())
				internetSlbObject.gatewaySlbMode = dataNodeResultGatewaysInternetSlbinternetSlbItem["GatewaySlbMode"].asString();
			if(!dataNodeResultGatewaysInternetSlbinternetSlbItem["SlbId"].isNull())
				internetSlbObject.slbId = dataNodeResultGatewaysInternetSlbinternetSlbItem["SlbId"].asString();
			gatewaysObject.internetSlb.push_back(internetSlbObject);
		}
		auto initConfigNode = value["InitConfig"];
		if(!initConfigNode["EnableWaf"].isNull())
			gatewaysObject.initConfig.enableWaf = initConfigNode["EnableWaf"].asString() == "true";
		if(!initConfigNode["SupportWaf"].isNull())
			gatewaysObject.initConfig.supportWaf = initConfigNode["SupportWaf"].asString() == "true";
		auto elasticPolicyNode = value["ElasticPolicy"];
		if(!elasticPolicyNode["Elastic"].isNull())
			gatewaysObject.elasticPolicy.elastic = elasticPolicyNode["Elastic"].asString() == "true";
		if(!elasticPolicyNode["MaxReplica"].isNull())
			gatewaysObject.elasticPolicy.maxReplica = std::stoi(elasticPolicyNode["MaxReplica"].asString());
		if(!elasticPolicyNode["ElasticType"].isNull())
			gatewaysObject.elasticPolicy.elasticType = elasticPolicyNode["ElasticType"].asString();
		auto allTimePolicyListNode = elasticPolicyNode["TimePolicyList"]["timePolicyListItem"];
		for (auto elasticPolicyNodeTimePolicyListtimePolicyListItem : allTimePolicyListNode)
		{
			Data::Gateways::ElasticPolicy::TimePolicyListItem timePolicyListItemObject;
			if(!elasticPolicyNodeTimePolicyListtimePolicyListItem["DesiredReplica"].isNull())
				timePolicyListItemObject.desiredReplica = std::stoi(elasticPolicyNodeTimePolicyListtimePolicyListItem["DesiredReplica"].asString());
			if(!elasticPolicyNodeTimePolicyListtimePolicyListItem["StartTime"].isNull())
				timePolicyListItemObject.startTime = elasticPolicyNodeTimePolicyListtimePolicyListItem["StartTime"].asString();
			if(!elasticPolicyNodeTimePolicyListtimePolicyListItem["EndTime"].isNull())
				timePolicyListItemObject.endTime = elasticPolicyNodeTimePolicyListtimePolicyListItem["EndTime"].asString();
			gatewaysObject.elasticPolicy.timePolicyList.push_back(timePolicyListItemObject);
		}
		data_.result.push_back(gatewaysObject);
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

std::string ListGatewayResult::getMessage()const
{
	return message_;
}

int ListGatewayResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListGatewayResult::Data ListGatewayResult::getData()const
{
	return data_;
}

int ListGatewayResult::getCode()const
{
	return code_;
}

bool ListGatewayResult::getSuccess()const
{
	return success_;
}

