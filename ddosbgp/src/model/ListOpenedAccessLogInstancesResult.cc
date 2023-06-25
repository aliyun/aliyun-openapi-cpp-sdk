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

#include <alibabacloud/ddosbgp/model/ListOpenedAccessLogInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddosbgp;
using namespace AlibabaCloud::Ddosbgp::Model;

ListOpenedAccessLogInstancesResult::ListOpenedAccessLogInstancesResult() :
	ServiceResult()
{}

ListOpenedAccessLogInstancesResult::ListOpenedAccessLogInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOpenedAccessLogInstancesResult::~ListOpenedAccessLogInstancesResult()
{}

void ListOpenedAccessLogInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSlsConfigStatusNode = value["SlsConfigStatus"]["OpenedInstance"];
	for (auto valueSlsConfigStatusOpenedInstance : allSlsConfigStatusNode)
	{
		OpenedInstance slsConfigStatusObject;
		if(!valueSlsConfigStatusOpenedInstance["InstanceId"].isNull())
			slsConfigStatusObject.instanceId = valueSlsConfigStatusOpenedInstance["InstanceId"].asString();
		if(!valueSlsConfigStatusOpenedInstance["Enable"].isNull())
			slsConfigStatusObject.enable = valueSlsConfigStatusOpenedInstance["Enable"].asString() == "true";
		slsConfigStatus_.push_back(slsConfigStatusObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListOpenedAccessLogInstancesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListOpenedAccessLogInstancesResult::OpenedInstance> ListOpenedAccessLogInstancesResult::getSlsConfigStatus()const
{
	return slsConfigStatus_;
}

