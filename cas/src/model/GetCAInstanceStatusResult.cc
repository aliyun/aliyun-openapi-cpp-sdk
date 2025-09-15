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

#include <alibabacloud/cas/model/GetCAInstanceStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

GetCAInstanceStatusResult::GetCAInstanceStatusResult() :
	ServiceResult()
{}

GetCAInstanceStatusResult::GetCAInstanceStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCAInstanceStatusResult::~GetCAInstanceStatusResult()
{}

void GetCAInstanceStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceStatusListNode = value["InstanceStatusList"]["InstanceStatus"];
	for (auto valueInstanceStatusListInstanceStatus : allInstanceStatusListNode)
	{
		InstanceStatus instanceStatusListObject;
		if(!valueInstanceStatusListInstanceStatus["CertTotalCount"].isNull())
			instanceStatusListObject.certTotalCount = std::stoi(valueInstanceStatusListInstanceStatus["CertTotalCount"].asString());
		if(!valueInstanceStatusListInstanceStatus["Status"].isNull())
			instanceStatusListObject.status = valueInstanceStatusListInstanceStatus["Status"].asString();
		if(!valueInstanceStatusListInstanceStatus["Type"].isNull())
			instanceStatusListObject.type = valueInstanceStatusListInstanceStatus["Type"].asString();
		if(!valueInstanceStatusListInstanceStatus["CertIssuedCount"].isNull())
			instanceStatusListObject.certIssuedCount = std::stoi(valueInstanceStatusListInstanceStatus["CertIssuedCount"].asString());
		if(!valueInstanceStatusListInstanceStatus["BeforeTime"].isNull())
			instanceStatusListObject.beforeTime = std::stol(valueInstanceStatusListInstanceStatus["BeforeTime"].asString());
		if(!valueInstanceStatusListInstanceStatus["Identifier"].isNull())
			instanceStatusListObject.identifier = valueInstanceStatusListInstanceStatus["Identifier"].asString();
		if(!valueInstanceStatusListInstanceStatus["AfterTime"].isNull())
			instanceStatusListObject.afterTime = std::stol(valueInstanceStatusListInstanceStatus["AfterTime"].asString());
		if(!valueInstanceStatusListInstanceStatus["InstanceId"].isNull())
			instanceStatusListObject.instanceId = valueInstanceStatusListInstanceStatus["InstanceId"].asString();
		if(!valueInstanceStatusListInstanceStatus["UseExpireTime"].isNull())
			instanceStatusListObject.useExpireTime = std::stol(valueInstanceStatusListInstanceStatus["UseExpireTime"].asString());
		instanceStatusList_.push_back(instanceStatusListObject);
	}

}

std::vector<GetCAInstanceStatusResult::InstanceStatus> GetCAInstanceStatusResult::getInstanceStatusList()const
{
	return instanceStatusList_;
}

