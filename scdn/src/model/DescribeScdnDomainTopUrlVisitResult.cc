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

#include <alibabacloud/scdn/model/DescribeScdnDomainTopUrlVisitResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnDomainTopUrlVisitResult::DescribeScdnDomainTopUrlVisitResult() :
	ServiceResult()
{}

DescribeScdnDomainTopUrlVisitResult::DescribeScdnDomainTopUrlVisitResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnDomainTopUrlVisitResult::~DescribeScdnDomainTopUrlVisitResult()
{}

void DescribeScdnDomainTopUrlVisitResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAllUrlListNode = value["AllUrlList"]["UrlList"];
	for (auto valueAllUrlListUrlList : allAllUrlListNode)
	{
		UrlList allUrlListObject;
		if(!valueAllUrlListUrlList["Flow"].isNull())
			allUrlListObject.flow = valueAllUrlListUrlList["Flow"].asString();
		if(!valueAllUrlListUrlList["UrlDetail"].isNull())
			allUrlListObject.urlDetail = valueAllUrlListUrlList["UrlDetail"].asString();
		if(!valueAllUrlListUrlList["FlowProportion"].isNull())
			allUrlListObject.flowProportion = std::stof(valueAllUrlListUrlList["FlowProportion"].asString());
		if(!valueAllUrlListUrlList["VisitData"].isNull())
			allUrlListObject.visitData = valueAllUrlListUrlList["VisitData"].asString();
		if(!valueAllUrlListUrlList["VisitProportion"].isNull())
			allUrlListObject.visitProportion = std::stof(valueAllUrlListUrlList["VisitProportion"].asString());
		allUrlList_.push_back(allUrlListObject);
	}
	auto allUrl200ListNode = value["Url200List"]["UrlList"];
	for (auto valueUrl200ListUrlList : allUrl200ListNode)
	{
		UrlList url200ListObject;
		if(!valueUrl200ListUrlList["Flow"].isNull())
			url200ListObject.flow = valueUrl200ListUrlList["Flow"].asString();
		if(!valueUrl200ListUrlList["UrlDetail"].isNull())
			url200ListObject.urlDetail = valueUrl200ListUrlList["UrlDetail"].asString();
		if(!valueUrl200ListUrlList["FlowProportion"].isNull())
			url200ListObject.flowProportion = std::stof(valueUrl200ListUrlList["FlowProportion"].asString());
		if(!valueUrl200ListUrlList["VisitData"].isNull())
			url200ListObject.visitData = valueUrl200ListUrlList["VisitData"].asString();
		if(!valueUrl200ListUrlList["VisitProportion"].isNull())
			url200ListObject.visitProportion = std::stof(valueUrl200ListUrlList["VisitProportion"].asString());
		url200List_.push_back(url200ListObject);
	}
	auto allUrl300ListNode = value["Url300List"]["UrlList"];
	for (auto valueUrl300ListUrlList : allUrl300ListNode)
	{
		UrlList url300ListObject;
		if(!valueUrl300ListUrlList["Flow"].isNull())
			url300ListObject.flow = valueUrl300ListUrlList["Flow"].asString();
		if(!valueUrl300ListUrlList["UrlDetail"].isNull())
			url300ListObject.urlDetail = valueUrl300ListUrlList["UrlDetail"].asString();
		if(!valueUrl300ListUrlList["FlowProportion"].isNull())
			url300ListObject.flowProportion = std::stof(valueUrl300ListUrlList["FlowProportion"].asString());
		if(!valueUrl300ListUrlList["VisitData"].isNull())
			url300ListObject.visitData = valueUrl300ListUrlList["VisitData"].asString();
		if(!valueUrl300ListUrlList["VisitProportion"].isNull())
			url300ListObject.visitProportion = std::stof(valueUrl300ListUrlList["VisitProportion"].asString());
		url300List_.push_back(url300ListObject);
	}
	auto allUrl400ListNode = value["Url400List"]["UrlList"];
	for (auto valueUrl400ListUrlList : allUrl400ListNode)
	{
		UrlList url400ListObject;
		if(!valueUrl400ListUrlList["Flow"].isNull())
			url400ListObject.flow = valueUrl400ListUrlList["Flow"].asString();
		if(!valueUrl400ListUrlList["UrlDetail"].isNull())
			url400ListObject.urlDetail = valueUrl400ListUrlList["UrlDetail"].asString();
		if(!valueUrl400ListUrlList["FlowProportion"].isNull())
			url400ListObject.flowProportion = std::stof(valueUrl400ListUrlList["FlowProportion"].asString());
		if(!valueUrl400ListUrlList["VisitData"].isNull())
			url400ListObject.visitData = valueUrl400ListUrlList["VisitData"].asString();
		if(!valueUrl400ListUrlList["VisitProportion"].isNull())
			url400ListObject.visitProportion = std::stof(valueUrl400ListUrlList["VisitProportion"].asString());
		url400List_.push_back(url400ListObject);
	}
	auto allUrl500ListNode = value["Url500List"]["UrlList"];
	for (auto valueUrl500ListUrlList : allUrl500ListNode)
	{
		UrlList url500ListObject;
		if(!valueUrl500ListUrlList["Flow"].isNull())
			url500ListObject.flow = valueUrl500ListUrlList["Flow"].asString();
		if(!valueUrl500ListUrlList["UrlDetail"].isNull())
			url500ListObject.urlDetail = valueUrl500ListUrlList["UrlDetail"].asString();
		if(!valueUrl500ListUrlList["FlowProportion"].isNull())
			url500ListObject.flowProportion = std::stof(valueUrl500ListUrlList["FlowProportion"].asString());
		if(!valueUrl500ListUrlList["VisitData"].isNull())
			url500ListObject.visitData = valueUrl500ListUrlList["VisitData"].asString();
		if(!valueUrl500ListUrlList["VisitProportion"].isNull())
			url500ListObject.visitProportion = std::stof(valueUrl500ListUrlList["VisitProportion"].asString());
		url500List_.push_back(url500ListObject);
	}
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();

}

std::vector<DescribeScdnDomainTopUrlVisitResult::UrlList> DescribeScdnDomainTopUrlVisitResult::getUrl200List()const
{
	return url200List_;
}

std::vector<DescribeScdnDomainTopUrlVisitResult::UrlList> DescribeScdnDomainTopUrlVisitResult::getUrl500List()const
{
	return url500List_;
}

std::vector<DescribeScdnDomainTopUrlVisitResult::UrlList> DescribeScdnDomainTopUrlVisitResult::getUrl400List()const
{
	return url400List_;
}

std::string DescribeScdnDomainTopUrlVisitResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeScdnDomainTopUrlVisitResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeScdnDomainTopUrlVisitResult::UrlList> DescribeScdnDomainTopUrlVisitResult::getUrl300List()const
{
	return url300List_;
}

std::vector<DescribeScdnDomainTopUrlVisitResult::UrlList> DescribeScdnDomainTopUrlVisitResult::getAllUrlList()const
{
	return allUrlList_;
}

