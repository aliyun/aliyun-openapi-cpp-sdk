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

#include <alibabacloud/cc5g/model/ListDiagnoseInfoForSingleCardResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CC5G;
using namespace AlibabaCloud::CC5G::Model;

ListDiagnoseInfoForSingleCardResult::ListDiagnoseInfoForSingleCardResult() :
	ServiceResult()
{}

ListDiagnoseInfoForSingleCardResult::ListDiagnoseInfoForSingleCardResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDiagnoseInfoForSingleCardResult::~ListDiagnoseInfoForSingleCardResult()
{}

void ListDiagnoseInfoForSingleCardResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDiagnoseInfoNode = value["DiagnoseInfo"]["diagnoseInfoItem"];
	for (auto valueDiagnoseInfodiagnoseInfoItem : allDiagnoseInfoNode)
	{
		DiagnoseInfoItem diagnoseInfoObject;
		if(!valueDiagnoseInfodiagnoseInfoItem["WirelessCloudConnectorId"].isNull())
			diagnoseInfoObject.wirelessCloudConnectorId = valueDiagnoseInfodiagnoseInfoItem["WirelessCloudConnectorId"].asString();
		if(!valueDiagnoseInfodiagnoseInfoItem["CardIp"].isNull())
			diagnoseInfoObject.cardIp = valueDiagnoseInfodiagnoseInfoItem["CardIp"].asString();
		if(!valueDiagnoseInfodiagnoseInfoItem["IccId"].isNull())
			diagnoseInfoObject.iccId = valueDiagnoseInfodiagnoseInfoItem["IccId"].asString();
		if(!valueDiagnoseInfodiagnoseInfoItem["SourceType"].isNull())
			diagnoseInfoObject.sourceType = valueDiagnoseInfodiagnoseInfoItem["SourceType"].asString();
		if(!valueDiagnoseInfodiagnoseInfoItem["Source"].isNull())
			diagnoseInfoObject.source = valueDiagnoseInfodiagnoseInfoItem["Source"].asString();
		if(!valueDiagnoseInfodiagnoseInfoItem["DestinationType"].isNull())
			diagnoseInfoObject.destinationType = valueDiagnoseInfodiagnoseInfoItem["DestinationType"].asString();
		if(!valueDiagnoseInfodiagnoseInfoItem["Destination"].isNull())
			diagnoseInfoObject.destination = valueDiagnoseInfodiagnoseInfoItem["Destination"].asString();
		if(!valueDiagnoseInfodiagnoseInfoItem["BeginTime"].isNull())
			diagnoseInfoObject.beginTime = std::stol(valueDiagnoseInfodiagnoseInfoItem["BeginTime"].asString());
		if(!valueDiagnoseInfodiagnoseInfoItem["EndTime"].isNull())
			diagnoseInfoObject.endTime = std::stol(valueDiagnoseInfodiagnoseInfoItem["EndTime"].asString());
		if(!valueDiagnoseInfodiagnoseInfoItem["Status"].isNull())
			diagnoseInfoObject.status = valueDiagnoseInfodiagnoseInfoItem["Status"].asString();
		if(!valueDiagnoseInfodiagnoseInfoItem["DiagnoseTime"].isNull())
			diagnoseInfoObject.diagnoseTime = std::stol(valueDiagnoseInfodiagnoseInfoItem["DiagnoseTime"].asString());
		if(!valueDiagnoseInfodiagnoseInfoItem["DiagnoseTaskId"].isNull())
			diagnoseInfoObject.diagnoseTaskId = valueDiagnoseInfodiagnoseInfoItem["DiagnoseTaskId"].asString();
		diagnoseInfo_.push_back(diagnoseInfoObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stol(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

std::vector<ListDiagnoseInfoForSingleCardResult::DiagnoseInfoItem> ListDiagnoseInfoForSingleCardResult::getDiagnoseInfo()const
{
	return diagnoseInfo_;
}

long ListDiagnoseInfoForSingleCardResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListDiagnoseInfoForSingleCardResult::getNextToken()const
{
	return nextToken_;
}

long ListDiagnoseInfoForSingleCardResult::getMaxResults()const
{
	return maxResults_;
}

