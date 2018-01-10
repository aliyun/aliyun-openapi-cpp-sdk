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
	auto allTopReferList = value["TopReferList"]["ReferList"];
	for (auto value : allTopReferList)
	{
		ReferList referListObject;
		referListObject.referDetail = value["ReferDetail"].asString();
		referListObject.visitData = value["VisitData"].asString();
		referListObject.visitProportion = std::stof(value["VisitProportion"].asString());
		referListObject.flow = value["Flow"].asString();
		referListObject.flowProportion = std::stof(value["FlowProportion"].asString());
		topReferList_.push_back(referListObject);
	}
	domainName_ = value["DomainName"].asString();
	startTime_ = value["StartTime"].asString();

}

std::string DescribeDomainTopReferVisitResult::getDomainName()const
{
	return domainName_;
}

void DescribeDomainTopReferVisitResult::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
}

std::string DescribeDomainTopReferVisitResult::getStartTime()const
{
	return startTime_;
}

void DescribeDomainTopReferVisitResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}

