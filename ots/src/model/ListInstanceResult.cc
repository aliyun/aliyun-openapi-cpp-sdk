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

#include <alibabacloud/ots/model/ListInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ots;
using namespace AlibabaCloud::Ots::Model;

ListInstanceResult::ListInstanceResult() :
	ServiceResult()
{}

ListInstanceResult::ListInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstanceResult::~ListInstanceResult()
{}

void ListInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceInfosNode = value["InstanceInfos"]["InstanceInfo"];
	for (auto valueInstanceInfosInstanceInfo : allInstanceInfosNode)
	{
		InstanceInfo instanceInfosObject;
		if(!valueInstanceInfosInstanceInfo["InstanceName"].isNull())
			instanceInfosObject.instanceName = valueInstanceInfosInstanceInfo["InstanceName"].asString();
		if(!valueInstanceInfosInstanceInfo["Timestamp"].isNull())
			instanceInfosObject.timestamp = valueInstanceInfosInstanceInfo["Timestamp"].asString();
		instanceInfos_.push_back(instanceInfosObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNum"].isNull())
		pageNum_ = std::stol(value["PageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long ListInstanceResult::getTotalCount()const
{
	return totalCount_;
}

long ListInstanceResult::getPageNum()const
{
	return pageNum_;
}

long ListInstanceResult::getPageSize()const
{
	return pageSize_;
}

std::vector<ListInstanceResult::InstanceInfo> ListInstanceResult::getInstanceInfos()const
{
	return instanceInfos_;
}

