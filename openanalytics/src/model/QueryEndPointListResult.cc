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

#include <alibabacloud/openanalytics/model/QueryEndPointListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Openanalytics;
using namespace AlibabaCloud::Openanalytics::Model;

QueryEndPointListResult::QueryEndPointListResult() :
	ServiceResult()
{}

QueryEndPointListResult::QueryEndPointListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryEndPointListResult::~QueryEndPointListResult()
{}

void QueryEndPointListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEndPointList = value["EndPointList"]["EndPointListItem"];
	for (auto value : allEndPointList)
	{
		EndPointListItem endPointListObject;
		if(!value["endPointID"].isNull())
			endPointListObject.endPointID = value["endPointID"].asString();
		if(!value["zone"].isNull())
			endPointListObject.zone = value["zone"].asString();
		if(!value["vSwitch"].isNull())
			endPointListObject.vSwitch = value["vSwitch"].asString();
		if(!value["status"].isNull())
			endPointListObject.status = value["status"].asString();
		if(!value["vpcID"].isNull())
			endPointListObject.vpcID = value["vpcID"].asString();
		if(!value["host"].isNull())
			endPointListObject.host = value["host"].asString();
		if(!value["domainURL"].isNull())
			endPointListObject.domainURL = value["domainURL"].asString();
		if(!value["networkType"].isNull())
			endPointListObject.networkType = value["networkType"].asString();
		if(!value["allowIP"].isNull())
			endPointListObject.allowIP = value["allowIP"].asString();
		if(!value["port"].isNull())
			endPointListObject.port = value["port"].asString();
		if(!value["cloudInstanceID"].isNull())
			endPointListObject.cloudInstanceID = value["cloudInstanceID"].asString();
		endPointList_.push_back(endPointListObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

std::vector<QueryEndPointListResult::EndPointListItem> QueryEndPointListResult::getEndPointList()const
{
	return endPointList_;
}

std::string QueryEndPointListResult::getRegionId()const
{
	return regionId_;
}

