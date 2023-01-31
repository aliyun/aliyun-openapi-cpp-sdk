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

#include <alibabacloud/vpc/model/GetVpnGatewayDiagnoseResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

GetVpnGatewayDiagnoseResultResult::GetVpnGatewayDiagnoseResultResult() :
	ServiceResult()
{}

GetVpnGatewayDiagnoseResultResult::GetVpnGatewayDiagnoseResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVpnGatewayDiagnoseResultResult::~GetVpnGatewayDiagnoseResultResult()
{}

void GetVpnGatewayDiagnoseResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDiagnoseResultNode = value["DiagnoseResult"]["DiagnoseResultItem"];
	for (auto valueDiagnoseResultDiagnoseResultItem : allDiagnoseResultNode)
	{
		DiagnoseResultItem diagnoseResultObject;
		if(!valueDiagnoseResultDiagnoseResultItem["DiagnoseName"].isNull())
			diagnoseResultObject.diagnoseName = valueDiagnoseResultDiagnoseResultItem["DiagnoseName"].asString();
		if(!valueDiagnoseResultDiagnoseResultItem["DiagnoseResultDescription"].isNull())
			diagnoseResultObject.diagnoseResultDescription = valueDiagnoseResultDiagnoseResultItem["DiagnoseResultDescription"].asString();
		if(!valueDiagnoseResultDiagnoseResultItem["DiagnoseResultLevel"].isNull())
			diagnoseResultObject.diagnoseResultLevel = valueDiagnoseResultDiagnoseResultItem["DiagnoseResultLevel"].asString();
		diagnoseResult_.push_back(diagnoseResultObject);
	}
	if(!value["BeginTime"].isNull())
		beginTime_ = value["BeginTime"].asString();
	if(!value["DiagnoseId"].isNull())
		diagnoseId_ = value["DiagnoseId"].asString();
	if(!value["FinishTime"].isNull())
		finishTime_ = value["FinishTime"].asString();
	if(!value["FinishedCount"].isNull())
		finishedCount_ = std::stoi(value["FinishedCount"].asString());
	if(!value["ResourceInstanceId"].isNull())
		resourceInstanceId_ = value["ResourceInstanceId"].asString();
	if(!value["ResourceType"].isNull())
		resourceType_ = value["ResourceType"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["VpnGatewayId"].isNull())
		vpnGatewayId_ = value["VpnGatewayId"].asString();

}

int GetVpnGatewayDiagnoseResultResult::getTotalCount()const
{
	return totalCount_;
}

std::string GetVpnGatewayDiagnoseResultResult::getFinishTime()const
{
	return finishTime_;
}

std::string GetVpnGatewayDiagnoseResultResult::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

int GetVpnGatewayDiagnoseResultResult::getFinishedCount()const
{
	return finishedCount_;
}

std::string GetVpnGatewayDiagnoseResultResult::getDiagnoseId()const
{
	return diagnoseId_;
}

std::string GetVpnGatewayDiagnoseResultResult::getBeginTime()const
{
	return beginTime_;
}

std::string GetVpnGatewayDiagnoseResultResult::getResourceType()const
{
	return resourceType_;
}

std::vector<GetVpnGatewayDiagnoseResultResult::DiagnoseResultItem> GetVpnGatewayDiagnoseResultResult::getDiagnoseResult()const
{
	return diagnoseResult_;
}

std::string GetVpnGatewayDiagnoseResultResult::getResourceInstanceId()const
{
	return resourceInstanceId_;
}

