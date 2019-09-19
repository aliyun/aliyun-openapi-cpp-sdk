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

#include <alibabacloud/emr/model/GetUserOutputStatisticInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

GetUserOutputStatisticInfoResult::GetUserOutputStatisticInfoResult() :
	ServiceResult()
{}

GetUserOutputStatisticInfoResult::GetUserOutputStatisticInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserOutputStatisticInfoResult::~GetUserOutputStatisticInfoResult()
{}

void GetUserOutputStatisticInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUserOutputListNode = value["UserOutputList"]["ClusterStatUserOutput"];
	for (auto valueUserOutputListClusterStatUserOutput : allUserOutputListNode)
	{
		ClusterStatUserOutput userOutputListObject;
		if(!valueUserOutputListClusterStatUserOutput["User"].isNull())
			userOutputListObject.user = valueUserOutputListClusterStatUserOutput["User"].asString();
		if(!valueUserOutputListClusterStatUserOutput["BytesOutput"].isNull())
			userOutputListObject.bytesOutput = std::stol(valueUserOutputListClusterStatUserOutput["BytesOutput"].asString());
		userOutputList_.push_back(userOutputListObject);
	}

}

std::vector<GetUserOutputStatisticInfoResult::ClusterStatUserOutput> GetUserOutputStatisticInfoResult::getUserOutputList()const
{
	return userOutputList_;
}

