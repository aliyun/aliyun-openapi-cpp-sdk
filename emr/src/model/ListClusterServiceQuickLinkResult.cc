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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allQuickLinkList = value["QuickLinkList"]["QuickLink"];
	for (auto value : allQuickLinkList)
	{
		QuickLink quickLinkListObject;
		if(!value["ServiceName"].isNull())
			quickLinkListObject.serviceName = value["ServiceName"].asString();
		if(!value["ServiceDisplayName"].isNull())
			quickLinkListObject.serviceDisplayName = value["ServiceDisplayName"].asString();
		if(!value["QuickLinkAddress"].isNull())
			quickLinkListObject.quickLinkAddress = value["QuickLinkAddress"].asString();
		if(!value["Protocol"].isNull())
			quickLinkListObject.protocol = value["Protocol"].asString();
		if(!value["Port"].isNull())
			quickLinkListObject.port = value["Port"].asString();
		if(!value["Type"].isNull())
			quickLinkListObject.type = value["Type"].asString();
		quickLinkList_.push_back(quickLinkListObject);
	}

}

std::vector<ListClusterServiceQuickLinkResult::QuickLink> ListClusterServiceQuickLinkResult::getQuickLinkList()const
{
	return quickLinkList_;
}

