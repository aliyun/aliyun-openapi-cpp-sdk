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
	auto allEndPointListNode = value["EndPointList"]["EndPointListItem"];
	for (auto valueEndPointListEndPointListItem : allEndPointListNode)
	{
		EndPointListItem endPointListObject;
		if(!valueEndPointListEndPointListItem["endPointID"].isNull())
			endPointListObject.endPointID = valueEndPointListEndPointListItem["endPointID"].asString();
		if(!valueEndPointListEndPointListItem["zone"].isNull())
			endPointListObject.zone = valueEndPointListEndPointListItem["zone"].asString();
		if(!valueEndPointListEndPointListItem["vSwitch"].isNull())
			endPointListObject.vSwitch = valueEndPointListEndPointListItem["vSwitch"].asString();
		if(!valueEndPointListEndPointListItem["status"].isNull())
			endPointListObject.status = valueEndPointListEndPointListItem["status"].asString();
		if(!valueEndPointListEndPointListItem["vpcID"].isNull())
			endPointListObject.vpcID = valueEndPointListEndPointListItem["vpcID"].asString();
		if(!valueEndPointListEndPointListItem["host"].isNull())
			endPointListObject.host = valueEndPointListEndPointListItem["host"].asString();
		if(!valueEndPointListEndPointListItem["domainURL"].isNull())
			endPointListObject.domainURL = valueEndPointListEndPointListItem["domainURL"].asString();
		if(!valueEndPointListEndPointListItem["networkType"].isNull())
			endPointListObject.networkType = valueEndPointListEndPointListItem["networkType"].asString();
		if(!valueEndPointListEndPointListItem["allowIP"].isNull())
			endPointListObject.allowIP = valueEndPointListEndPointListItem["allowIP"].asString();
		if(!valueEndPointListEndPointListItem["port"].isNull())
			endPointListObject.port = valueEndPointListEndPointListItem["port"].asString();
		if(!valueEndPointListEndPointListItem["cloudInstanceID"].isNull())
			endPointListObject.cloudInstanceID = valueEndPointListEndPointListItem["cloudInstanceID"].asString();
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

