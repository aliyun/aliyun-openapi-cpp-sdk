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

#include <alibabacloud/emr/model/MetastoreListDataResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

MetastoreListDataResourcesResult::MetastoreListDataResourcesResult() :
	ServiceResult()
{}

MetastoreListDataResourcesResult::MetastoreListDataResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MetastoreListDataResourcesResult::~MetastoreListDataResourcesResult()
{}

void MetastoreListDataResourcesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allDataResources = value["DataResources"]["DataResourceInfo"];
	for (auto value : allDataResources)
	{
		DataResourceInfo dataResourcesObject;
		if(!value["Id"].isNull())
			dataResourcesObject.id = value["Id"].asString();
		if(!value["RegionId"].isNull())
			dataResourcesObject.regionId = value["RegionId"].asString();
		if(!value["Name"].isNull())
			dataResourcesObject.name = value["Name"].asString();
		if(!value["MetaType"].isNull())
			dataResourcesObject.metaType = value["MetaType"].asString();
		if(!value["ClusterId"].isNull())
			dataResourcesObject.clusterId = std::stol(value["ClusterId"].asString());
		if(!value["AccessType"].isNull())
			dataResourcesObject.accessType = value["AccessType"].asString();
		if(!value["Default"].isNull())
			dataResourcesObject.default = value["Default"].asString() == "true";
		if(!value["Description"].isNull())
			dataResourcesObject.description = value["Description"].asString();
		dataResources_.push_back(dataResourcesObject);
	}

}

std::vector<MetastoreListDataResourcesResult::DataResourceInfo> MetastoreListDataResourcesResult::getDataResources()const
{
	return dataResources_;
}

