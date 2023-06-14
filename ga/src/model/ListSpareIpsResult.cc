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

#include <alibabacloud/ga/model/ListSpareIpsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

ListSpareIpsResult::ListSpareIpsResult() :
	ServiceResult()
{}

ListSpareIpsResult::ListSpareIpsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSpareIpsResult::~ListSpareIpsResult()
{}

void ListSpareIpsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSpareIpsNode = value["SpareIps"]["spareIpsItem"];
	for (auto valueSpareIpsspareIpsItem : allSpareIpsNode)
	{
		SpareIpsItem spareIpsObject;
		if(!valueSpareIpsspareIpsItem["SpareIp"].isNull())
			spareIpsObject.spareIp = valueSpareIpsspareIpsItem["SpareIp"].asString();
		if(!valueSpareIpsspareIpsItem["State"].isNull())
			spareIpsObject.state = valueSpareIpsspareIpsItem["State"].asString();
		spareIps_.push_back(spareIpsObject);
	}

}

std::vector<ListSpareIpsResult::SpareIpsItem> ListSpareIpsResult::getSpareIps()const
{
	return spareIps_;
}

