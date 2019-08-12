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

#include <alibabacloud/r-kvstore/model/DescribeReplicaInitializeProgressResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeReplicaInitializeProgressResult::DescribeReplicaInitializeProgressResult() :
	ServiceResult()
{}

DescribeReplicaInitializeProgressResult::DescribeReplicaInitializeProgressResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeReplicaInitializeProgressResult::~DescribeReplicaInitializeProgressResult()
{}

void DescribeReplicaInitializeProgressResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["ItemsItem"];
	for (auto value : allItems)
	{
		ItemsItem itemsObject;
		if(!value["ReplicaId"].isNull())
			itemsObject.replicaId = value["ReplicaId"].asString();
		if(!value["Status"].isNull())
			itemsObject.status = value["Status"].asString();
		if(!value["Progress"].isNull())
			itemsObject.progress = value["Progress"].asString();
		if(!value["FinishTime"].isNull())
			itemsObject.finishTime = value["FinishTime"].asString();
		if(!value["CurrentStep"].isNull())
			itemsObject.currentStep = value["CurrentStep"].asString();
		items_.push_back(itemsObject);
	}

}

std::vector<DescribeReplicaInitializeProgressResult::ItemsItem> DescribeReplicaInitializeProgressResult::getItems()const
{
	return items_;
}

