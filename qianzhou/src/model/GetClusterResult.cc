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

#include <alibabacloud/qianzhou/model/GetClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qianzhou;
using namespace AlibabaCloud::Qianzhou::Model;

GetClusterResult::GetClusterResult() :
	ServiceResult()
{}

GetClusterResult::GetClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetClusterResult::~GetClusterResult()
{}

void GetClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["data"];
	if(!dataNode["clusterID"].isNull())
		data_.clusterID = dataNode["clusterID"].asString();
	if(!dataNode["name"].isNull())
		data_.name = dataNode["name"].asString();
	if(!dataNode["regionID"].isNull())
		data_.regionID = dataNode["regionID"].asString();
	if(!dataNode["state"].isNull())
		data_.state = dataNode["state"].asString();
	if(!dataNode["userID"].isNull())
		data_.userID = dataNode["userID"].asString();
	if(!dataNode["clusterType"].isNull())
		data_.clusterType = dataNode["clusterType"].asString();
	if(!dataNode["currentVersion"].isNull())
		data_.currentVersion = dataNode["currentVersion"].asString();
	if(!dataNode["securityGroupId"].isNull())
		data_.securityGroupId = dataNode["securityGroupId"].asString();
	if(!dataNode["profile"].isNull())
		data_.profile = dataNode["profile"].asString();
	if(!dataNode["spec"].isNull())
		data_.spec = dataNode["spec"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string GetClusterResult::getRequestId()const
{
	return requestId_;
}

GetClusterResult::Data GetClusterResult::getData()const
{
	return data_;
}

