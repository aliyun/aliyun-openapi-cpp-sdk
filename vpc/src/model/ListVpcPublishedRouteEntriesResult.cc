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

#include <alibabacloud/vpc/model/ListVpcPublishedRouteEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ListVpcPublishedRouteEntriesResult::ListVpcPublishedRouteEntriesResult() :
	ServiceResult()
{}

ListVpcPublishedRouteEntriesResult::ListVpcPublishedRouteEntriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVpcPublishedRouteEntriesResult::~ListVpcPublishedRouteEntriesResult()
{}

void ListVpcPublishedRouteEntriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRouteEntriesNode = value["RouteEntries"]["RouteEntry"];
	for (auto valueRouteEntriesRouteEntry : allRouteEntriesNode)
	{
		RouteEntry routeEntriesObject;
		if(!valueRouteEntriesRouteEntry["RouteEntryId"].isNull())
			routeEntriesObject.routeEntryId = valueRouteEntriesRouteEntry["RouteEntryId"].asString();
		if(!valueRouteEntriesRouteEntry["DestinationCidrBlock"].isNull())
			routeEntriesObject.destinationCidrBlock = valueRouteEntriesRouteEntry["DestinationCidrBlock"].asString();
		if(!valueRouteEntriesRouteEntry["RouteTableId"].isNull())
			routeEntriesObject.routeTableId = valueRouteEntriesRouteEntry["RouteTableId"].asString();
		auto allRoutePublishTargetsNode = valueRouteEntriesRouteEntry["RoutePublishTargets"]["RoutePublishTarget"];
		for (auto valueRouteEntriesRouteEntryRoutePublishTargetsRoutePublishTarget : allRoutePublishTargetsNode)
		{
			RouteEntry::RoutePublishTarget routePublishTargetsObject;
			if(!valueRouteEntriesRouteEntryRoutePublishTargetsRoutePublishTarget["PublishStatus"].isNull())
				routePublishTargetsObject.publishStatus = valueRouteEntriesRouteEntryRoutePublishTargetsRoutePublishTarget["PublishStatus"].asString();
			if(!valueRouteEntriesRouteEntryRoutePublishTargetsRoutePublishTarget["PublishTargetType"].isNull())
				routePublishTargetsObject.publishTargetType = valueRouteEntriesRouteEntryRoutePublishTargetsRoutePublishTarget["PublishTargetType"].asString();
			if(!valueRouteEntriesRouteEntryRoutePublishTargetsRoutePublishTarget["PublishTargetInstanceId"].isNull())
				routePublishTargetsObject.publishTargetInstanceId = valueRouteEntriesRouteEntryRoutePublishTargetsRoutePublishTarget["PublishTargetInstanceId"].asString();
			routeEntriesObject.routePublishTargets.push_back(routePublishTargetsObject);
		}
		routeEntries_.push_back(routeEntriesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<ListVpcPublishedRouteEntriesResult::RouteEntry> ListVpcPublishedRouteEntriesResult::getRouteEntries()const
{
	return routeEntries_;
}

std::string ListVpcPublishedRouteEntriesResult::getNextToken()const
{
	return nextToken_;
}

