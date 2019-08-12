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

#include <alibabacloud/cdn/model/DescribeDomainTopUrlVisitResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainTopUrlVisitResult::DescribeDomainTopUrlVisitResult() :
	ServiceResult()
{}

DescribeDomainTopUrlVisitResult::DescribeDomainTopUrlVisitResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainTopUrlVisitResult::~DescribeDomainTopUrlVisitResult()
{}

void DescribeDomainTopUrlVisitResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allAllUrlList = value["AllUrlList"]["UrlList"];
	for (auto value : allAllUrlList)
	{
		UrlList allUrlListObject;
		if(!value["UrlDetail"].isNull())
			allUrlListObject.urlDetail = value["UrlDetail"].asString();
		if(!value["VisitData"].isNull())
			allUrlListObject.visitData = value["VisitData"].asString();
		if(!value["VisitProportion"].isNull())
			allUrlListObject.visitProportion = std::stof(value["VisitProportion"].asString());
		if(!value["Flow"].isNull())
			allUrlListObject.flow = value["Flow"].asString();
		if(!value["FlowProportion"].isNull())
			allUrlListObject.flowProportion = std::stof(value["FlowProportion"].asString());
		allUrlList_.push_back(allUrlListObject);
	}
	auto allUrl200List = value["Url200List"]["UrlList"];
	for (auto value : allUrl200List)
	{
		UrlList url200ListObject;
		if(!value["UrlDetail"].isNull())
			url200ListObject.urlDetail = value["UrlDetail"].asString();
		if(!value["VisitData"].isNull())
			url200ListObject.visitData = value["VisitData"].asString();
		if(!value["VisitProportion"].isNull())
			url200ListObject.visitProportion = std::stof(value["VisitProportion"].asString());
		if(!value["Flow"].isNull())
			url200ListObject.flow = value["Flow"].asString();
		if(!value["FlowProportion"].isNull())
			url200ListObject.flowProportion = std::stof(value["FlowProportion"].asString());
		url200List_.push_back(url200ListObject);
	}
	auto allUrl300List = value["Url300List"]["UrlList"];
	for (auto value : allUrl300List)
	{
		UrlList url300ListObject;
		if(!value["UrlDetail"].isNull())
			url300ListObject.urlDetail = value["UrlDetail"].asString();
		if(!value["VisitData"].isNull())
			url300ListObject.visitData = value["VisitData"].asString();
		if(!value["VisitProportion"].isNull())
			url300ListObject.visitProportion = std::stof(value["VisitProportion"].asString());
		if(!value["Flow"].isNull())
			url300ListObject.flow = value["Flow"].asString();
		if(!value["FlowProportion"].isNull())
			url300ListObject.flowProportion = std::stof(value["FlowProportion"].asString());
		url300List_.push_back(url300ListObject);
	}
	auto allUrl400List = value["Url400List"]["UrlList"];
	for (auto value : allUrl400List)
	{
		UrlList url400ListObject;
		if(!value["UrlDetail"].isNull())
			url400ListObject.urlDetail = value["UrlDetail"].asString();
		if(!value["VisitData"].isNull())
			url400ListObject.visitData = value["VisitData"].asString();
		if(!value["VisitProportion"].isNull())
			url400ListObject.visitProportion = std::stof(value["VisitProportion"].asString());
		if(!value["Flow"].isNull())
			url400ListObject.flow = value["Flow"].asString();
		if(!value["FlowProportion"].isNull())
			url400ListObject.flowProportion = std::stof(value["FlowProportion"].asString());
		url400List_.push_back(url400ListObject);
	}
	auto allUrl500List = value["Url500List"]["UrlList"];
	for (auto value : allUrl500List)
	{
		UrlList url500ListObject;
		if(!value["UrlDetail"].isNull())
			url500ListObject.urlDetail = value["UrlDetail"].asString();
		if(!value["VisitData"].isNull())
			url500ListObject.visitData = value["VisitData"].asString();
		if(!value["VisitProportion"].isNull())
			url500ListObject.visitProportion = std::stof(value["VisitProportion"].asString());
		if(!value["Flow"].isNull())
			url500ListObject.flow = value["Flow"].asString();
		if(!value["FlowProportion"].isNull())
			url500ListObject.flowProportion = std::stof(value["FlowProportion"].asString());
		url500List_.push_back(url500ListObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();

}

std::vector<DescribeDomainTopUrlVisitResult::UrlList> DescribeDomainTopUrlVisitResult::getUrl200List()const
{
	return url200List_;
}

std::vector<DescribeDomainTopUrlVisitResult::UrlList> DescribeDomainTopUrlVisitResult::getUrl500List()const
{
	return url500List_;
}

std::vector<DescribeDomainTopUrlVisitResult::UrlList> DescribeDomainTopUrlVisitResult::getUrl400List()const
{
	return url400List_;
}

std::string DescribeDomainTopUrlVisitResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainTopUrlVisitResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeDomainTopUrlVisitResult::UrlList> DescribeDomainTopUrlVisitResult::getUrl300List()const
{
	return url300List_;
}

std::vector<DescribeDomainTopUrlVisitResult::UrlList> DescribeDomainTopUrlVisitResult::getAllUrlList()const
{
	return allUrlList_;
}

