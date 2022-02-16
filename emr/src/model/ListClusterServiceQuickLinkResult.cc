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

#include <alibabacloud/emr/model/ListClusterServiceQuickLinkResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListClusterServiceQuickLinkResult::ListClusterServiceQuickLinkResult() :
	ServiceResult()
{}

ListClusterServiceQuickLinkResult::ListClusterServiceQuickLinkResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterServiceQuickLinkResult::~ListClusterServiceQuickLinkResult()
{}

void ListClusterServiceQuickLinkResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQuickLinkListNode = value["QuickLinkList"]["QuickLink"];
	for (auto valueQuickLinkListQuickLink : allQuickLinkListNode)
	{
		QuickLink quickLinkListObject;
		if(!valueQuickLinkListQuickLink["ServiceName"].isNull())
			quickLinkListObject.serviceName = valueQuickLinkListQuickLink["ServiceName"].asString();
		if(!valueQuickLinkListQuickLink["ServiceDisplayName"].isNull())
			quickLinkListObject.serviceDisplayName = valueQuickLinkListQuickLink["ServiceDisplayName"].asString();
		if(!valueQuickLinkListQuickLink["QuickLinkAddress"].isNull())
			quickLinkListObject.quickLinkAddress = valueQuickLinkListQuickLink["QuickLinkAddress"].asString();
		if(!valueQuickLinkListQuickLink["Protocol"].isNull())
			quickLinkListObject.protocol = valueQuickLinkListQuickLink["Protocol"].asString();
		if(!valueQuickLinkListQuickLink["Port"].isNull())
			quickLinkListObject.port = valueQuickLinkListQuickLink["Port"].asString();
		if(!valueQuickLinkListQuickLink["Type"].isNull())
			quickLinkListObject.type = valueQuickLinkListQuickLink["Type"].asString();
		quickLinkList_.push_back(quickLinkListObject);
	}

}

std::vector<ListClusterServiceQuickLinkResult::QuickLink> ListClusterServiceQuickLinkResult::getQuickLinkList()const
{
	return quickLinkList_;
}

