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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainTopReferVisitResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnDomainTopReferVisitResult::DescribeDcdnDomainTopReferVisitResult() :
	ServiceResult()
{}

DescribeDcdnDomainTopReferVisitResult::DescribeDcdnDomainTopReferVisitResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnDomainTopReferVisitResult::~DescribeDcdnDomainTopReferVisitResult()
{}

void DescribeDcdnDomainTopReferVisitResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTopReferList = value["TopReferList"]["ReferList"];
	for (auto value : allTopReferList)
	{
		ReferList topReferListObject;
		if(!value["ReferDetail"].isNull())
			topReferListObject.referDetail = value["ReferDetail"].asString();
		if(!value["VisitData"].isNull())
			topReferListObject.visitData = value["VisitData"].asString();
		if(!value["VisitProportion"].isNull())
			topReferListObject.visitProportion = std::stof(value["VisitProportion"].asString());
		if(!value["Flow"].isNull())
			topReferListObject.flow = value["Flow"].asString();
		if(!value["FlowProportion"].isNull())
			topReferListObject.flowProportion = std::stof(value["FlowProportion"].asString());
		topReferList_.push_back(topReferListObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();

}

std::string DescribeDcdnDomainTopReferVisitResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDcdnDomainTopReferVisitResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeDcdnDomainTopReferVisitResult::ReferList> DescribeDcdnDomainTopReferVisitResult::getTopReferList()const
{
	return topReferList_;
}

