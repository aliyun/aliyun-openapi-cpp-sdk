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

#include <alibabacloud/arms/model/GetServicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

GetServicesResult::GetServicesResult() :
	ServiceResult()
{}

GetServicesResult::GetServicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetServicesResult::~GetServicesResult()
{}

void GetServicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allDetails = value["Details"]["DetailsItem"];
	for (auto value : allDetails)
	{
		Data::DetailsItem detailsItemObject;
		if(!value["ServiceName"].isNull())
			detailsItemObject.serviceName = value["ServiceName"].asString();
		if(!value["Pid"].isNull())
			detailsItemObject.pid = value["Pid"].asString();
		if(!value["RegionId"].isNull())
			detailsItemObject.regionId = value["RegionId"].asString();
		data_.details.push_back(detailsItemObject);
	}
		auto allServices = dataNode["Services"]["Services"];
		for (auto value : allServices)
			data_.services.push_back(value.asString());

}

GetServicesResult::Data GetServicesResult::getData()const
{
	return data_;
}

