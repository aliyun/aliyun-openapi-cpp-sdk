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

#include <alibabacloud/smartag/model/DescribeSagDropTopNResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSagDropTopNResult::DescribeSagDropTopNResult() :
	ServiceResult()
{}

DescribeSagDropTopNResult::DescribeSagDropTopNResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSagDropTopNResult::~DescribeSagDropTopNResult()
{}

void DescribeSagDropTopNResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDropTopNNode = value["DropTopN"]["DropTopNItem"];
	for (auto valueDropTopNDropTopNItem : allDropTopNNode)
	{
		DropTopNItem dropTopNObject;
		if(!valueDropTopNDropTopNItem["DropRate"].isNull())
			dropTopNObject.dropRate = valueDropTopNDropTopNItem["DropRate"].asString();
		if(!valueDropTopNDropTopNItem["InstanceId"].isNull())
			dropTopNObject.instanceId = valueDropTopNDropTopNItem["InstanceId"].asString();
		if(!valueDropTopNDropTopNItem["Name"].isNull())
			dropTopNObject.name = valueDropTopNDropTopNItem["Name"].asString();
		if(!valueDropTopNDropTopNItem["RegionId"].isNull())
			dropTopNObject.regionId = valueDropTopNDropTopNItem["RegionId"].asString();
		dropTopN_.push_back(dropTopNObject);
	}

}

std::vector<DescribeSagDropTopNResult::DropTopNItem> DescribeSagDropTopNResult::getDropTopN()const
{
	return dropTopN_;
}

