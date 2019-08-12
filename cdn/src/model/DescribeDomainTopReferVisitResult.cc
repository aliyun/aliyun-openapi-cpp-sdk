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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
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

