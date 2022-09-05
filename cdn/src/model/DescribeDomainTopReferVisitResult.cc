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

#include <alibabacloud/cdn/model/DescribeDomainTopReferVisitResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainTopReferVisitResult::DescribeDomainTopReferVisitResult() :
	ServiceResult()
{}

DescribeDomainTopReferVisitResult::DescribeDomainTopReferVisitResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainTopReferVisitResult::~DescribeDomainTopReferVisitResult()
{}

void DescribeDomainTopReferVisitResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTopReferListNode = value["TopReferList"]["ReferList"];
	for (auto valueTopReferListReferList : allTopReferListNode)
	{
		ReferList topReferListObject;
		if(!valueTopReferListReferList["Flow"].isNull())
			topReferListObject.flow = valueTopReferListReferList["Flow"].asString();
		if(!valueTopReferListReferList["FlowProportion"].isNull())
			topReferListObject.flowProportion = std::stof(valueTopReferListReferList["FlowProportion"].asString());
		if(!valueTopReferListReferList["VisitData"].isNull())
			topReferListObject.visitData = valueTopReferListReferList["VisitData"].asString();
		if(!valueTopReferListReferList["ReferDetail"].isNull())
			topReferListObject.referDetail = valueTopReferListReferList["ReferDetail"].asString();
		if(!valueTopReferListReferList["VisitProportion"].isNull())
			topReferListObject.visitProportion = std::stof(valueTopReferListReferList["VisitProportion"].asString());
		topReferList_.push_back(topReferListObject);
	}
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();

}

std::string DescribeDomainTopReferVisitResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainTopReferVisitResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeDomainTopReferVisitResult::ReferList> DescribeDomainTopReferVisitResult::getTopReferList()const
{
	return topReferList_;
}

