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

#include <alibabacloud/oos/model/ListInstanceStateReportsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

ListInstanceStateReportsResult::ListInstanceStateReportsResult() :
	ServiceResult()
{}

ListInstanceStateReportsResult::ListInstanceStateReportsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstanceStateReportsResult::~ListInstanceStateReportsResult()
{}

void ListInstanceStateReportsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStateReportsNode = value["StateReports"]["StateReport"];
	for (auto valueStateReportsStateReport : allStateReportsNode)
	{
		StateReport stateReportsObject;
		if(!valueStateReportsStateReport["ReportTime"].isNull())
			stateReportsObject.reportTime = valueStateReportsStateReport["ReportTime"].asString();
		if(!valueStateReportsStateReport["InstanceId"].isNull())
			stateReportsObject.instanceId = valueStateReportsStateReport["InstanceId"].asString();
		if(!valueStateReportsStateReport["StateConfigurationId"].isNull())
			stateReportsObject.stateConfigurationId = valueStateReportsStateReport["StateConfigurationId"].asString();
		if(!valueStateReportsStateReport["Mode"].isNull())
			stateReportsObject.mode = valueStateReportsStateReport["Mode"].asString();
		if(!valueStateReportsStateReport["ReportStatus"].isNull())
			stateReportsObject.reportStatus = valueStateReportsStateReport["ReportStatus"].asString();
		if(!valueStateReportsStateReport["SuccessApplyTime"].isNull())
			stateReportsObject.successApplyTime = valueStateReportsStateReport["SuccessApplyTime"].asString();
		if(!valueStateReportsStateReport["ReportInfo"].isNull())
			stateReportsObject.reportInfo = valueStateReportsStateReport["ReportInfo"].asString();
		stateReports_.push_back(stateReportsObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<ListInstanceStateReportsResult::StateReport> ListInstanceStateReportsResult::getStateReports()const
{
	return stateReports_;
}

std::string ListInstanceStateReportsResult::getNextToken()const
{
	return nextToken_;
}

int ListInstanceStateReportsResult::getMaxResults()const
{
	return maxResults_;
}

