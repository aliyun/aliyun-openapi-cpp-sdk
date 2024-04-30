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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainsBySourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnDomainsBySourceResult::DescribeDcdnDomainsBySourceResult() :
	ServiceResult()
{}

DescribeDcdnDomainsBySourceResult::DescribeDcdnDomainsBySourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnDomainsBySourceResult::~DescribeDcdnDomainsBySourceResult()
{}

void DescribeDcdnDomainsBySourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainInfoNode = value["DomainInfo"]["DomainInfoData"];
	for (auto valueDomainInfoDomainInfoData : allDomainInfoNode)
	{
		DomainInfoData domainInfoObject;
		if(!valueDomainInfoDomainInfoData["Source"].isNull())
			domainInfoObject.source = valueDomainInfoDomainInfoData["Source"].asString();
		auto allDomainListNode = valueDomainInfoDomainInfoData["DomainList"]["DomainInfoList"];
		for (auto valueDomainInfoDomainInfoDataDomainListDomainInfoList : allDomainListNode)
		{
			DomainInfoData::DomainInfoList domainListObject;
			if(!valueDomainInfoDomainInfoDataDomainListDomainInfoList["CreateTime"].isNull())
				domainListObject.createTime = valueDomainInfoDomainInfoDataDomainListDomainInfoList["CreateTime"].asString();
			if(!valueDomainInfoDomainInfoDataDomainListDomainInfoList["DomainCname"].isNull())
				domainListObject.domainCname = valueDomainInfoDomainInfoDataDomainListDomainInfoList["DomainCname"].asString();
			if(!valueDomainInfoDomainInfoDataDomainListDomainInfoList["Status"].isNull())
				domainListObject.status = valueDomainInfoDomainInfoDataDomainListDomainInfoList["Status"].asString();
			if(!valueDomainInfoDomainInfoDataDomainListDomainInfoList["DomainName"].isNull())
				domainListObject.domainName = valueDomainInfoDomainInfoDataDomainListDomainInfoList["DomainName"].asString();
			if(!valueDomainInfoDomainInfoDataDomainListDomainInfoList["UpdateTime"].isNull())
				domainListObject.updateTime = valueDomainInfoDomainInfoDataDomainListDomainInfoList["UpdateTime"].asString();
			if(!valueDomainInfoDomainInfoDataDomainListDomainInfoList["DomainType"].isNull())
				domainListObject.domainType = valueDomainInfoDomainInfoDataDomainListDomainInfoList["DomainType"].asString();
			domainInfoObject.domainList.push_back(domainListObject);
		}
		domainInfo_.push_back(domainInfoObject);
	}

}

std::vector<DescribeDcdnDomainsBySourceResult::DomainInfoData> DescribeDcdnDomainsBySourceResult::getDomainInfo()const
{
	return domainInfo_;
}

