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

#include <alibabacloud/cassandra/model/DescribeContactPointsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cassandra;
using namespace AlibabaCloud::Cassandra::Model;

DescribeContactPointsResult::DescribeContactPointsResult() :
	ServiceResult()
{}

DescribeContactPointsResult::DescribeContactPointsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeContactPointsResult::~DescribeContactPointsResult()
{}

void DescribeContactPointsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allContactPointsNode = value["ContactPoints"]["ContactPoint"];
	for (auto valueContactPointsContactPoint : allContactPointsNode)
	{
		ContactPoint contactPointsObject;
		if(!valueContactPointsContactPoint["DataCenterId"].isNull())
			contactPointsObject.dataCenterId = valueContactPointsContactPoint["DataCenterId"].asString();
		if(!valueContactPointsContactPoint["Port"].isNull())
			contactPointsObject.port = std::stoi(valueContactPointsContactPoint["Port"].asString());
		auto allPrivateAddresses = value["PrivateAddresses"]["PrivateAddress"];
		for (auto value : allPrivateAddresses)
			contactPointsObject.privateAddresses.push_back(value.asString());
		auto allPublicAddresses = value["PublicAddresses"]["PublicAddress"];
		for (auto value : allPublicAddresses)
			contactPointsObject.publicAddresses.push_back(value.asString());
		contactPoints_.push_back(contactPointsObject);
	}

}

std::vector<DescribeContactPointsResult::ContactPoint> DescribeContactPointsResult::getContactPoints()const
{
	return contactPoints_;
}

