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

#include <alibabacloud/cdn/model/DescribeDomainHttpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainHttpsDataResult::DescribeDomainHttpsDataResult() :
	ServiceResult()
{}

DescribeDomainHttpsDataResult::DescribeDomainHttpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainHttpsDataResult::~DescribeDomainHttpsDataResult()
{}

void DescribeDomainHttpsDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allHttpsStatisticsInfos = value["HttpsStatisticsInfos"]["HttpsStatisticsInfo"];
	for (auto value : allHttpsStatisticsInfos)
	{
		HttpsStatisticsInfo httpsStatisticsInfosObject;
		if(!value["Time"].isNull())
			httpsStatisticsInfosObject.time = value["Time"].asString();
		if(!value["L1HttpsBps"].isNull())
			httpsStatisticsInfosObject.l1HttpsBps = std::stof(value["L1HttpsBps"].asString());
		if(!value["L1HttpsInnerBps"].isNull())
			httpsStatisticsInfosObject.l1HttpsInnerBps = std::stof(value["L1HttpsInnerBps"].asString());
		if(!value["L1HttpsOutBps"].isNull())
			httpsStatisticsInfosObject.l1HttpsOutBps = std::stof(value["L1HttpsOutBps"].asString());
		if(!value["L1HttpsQps"].isNull())
			httpsStatisticsInfosObject.l1HttpsQps = std::stol(value["L1HttpsQps"].asString());
		if(!value["L1HttpsInnerQps"].isNull())
			httpsStatisticsInfosObject.l1HttpsInnerQps = std::stol(value["L1HttpsInnerQps"].asString());
		if(!value["L1HttpsOutQps"].isNull())
			httpsStatisticsInfosObject.l1HttpsOutQps = std::stol(value["L1HttpsOutQps"].asString());
		if(!value["L1HttpsTtraf"].isNull())
			httpsStatisticsInfosObject.l1HttpsTtraf = std::stol(value["L1HttpsTtraf"].asString());
		if(!value["HttpsSrcBps"].isNull())
			httpsStatisticsInfosObject.httpsSrcBps = std::stol(value["HttpsSrcBps"].asString());
		if(!value["HttpsSrcTraf"].isNull())
			httpsStatisticsInfosObject.httpsSrcTraf = std::stol(value["HttpsSrcTraf"].asString());
		if(!value["L1HttpsInnerTraf"].isNull())
			httpsStatisticsInfosObject.l1HttpsInnerTraf = std::stol(value["L1HttpsInnerTraf"].asString());
		if(!value["L1HttpsOutTraf"].isNull())
			httpsStatisticsInfosObject.l1HttpsOutTraf = std::stol(value["L1HttpsOutTraf"].asString());
		if(!value["HttpsByteHitRate"].isNull())
			httpsStatisticsInfosObject.httpsByteHitRate = std::stof(value["HttpsByteHitRate"].asString());
		if(!value["HttpsReqHitRate"].isNull())
			httpsStatisticsInfosObject.httpsReqHitRate = std::stof(value["HttpsReqHitRate"].asString());
		if(!value["L1HttpsHitRate"].isNull())
			httpsStatisticsInfosObject.l1HttpsHitRate = std::stof(value["L1HttpsHitRate"].asString());
		if(!value["L1HttpsInner_acc"].isNull())
			httpsStatisticsInfosObject.l1HttpsInner_acc = std::stof(value["L1HttpsInner_acc"].asString());
		if(!value["L1HttpsOut_acc"].isNull())
			httpsStatisticsInfosObject.l1HttpsOut_acc = std::stof(value["L1HttpsOut_acc"].asString());
		if(!value["L1HttpsTacc"].isNull())
			httpsStatisticsInfosObject.l1HttpsTacc = std::stof(value["L1HttpsTacc"].asString());
		if(!value["L1DyHttpsBps"].isNull())
			httpsStatisticsInfosObject.l1DyHttpsBps = std::stof(value["L1DyHttpsBps"].asString());
		if(!value["L1DyHttpsInnerBps"].isNull())
			httpsStatisticsInfosObject.l1DyHttpsInnerBps = std::stof(value["L1DyHttpsInnerBps"].asString());
		if(!value["L1DyHttpsOutBps"].isNull())
			httpsStatisticsInfosObject.l1DyHttpsOutBps = std::stof(value["L1DyHttpsOutBps"].asString());
		if(!value["L1StHttpsBps"].isNull())
			httpsStatisticsInfosObject.l1StHttpsBps = std::stof(value["L1StHttpsBps"].asString());
		if(!value["L1StHttpsInnerBps"].isNull())
			httpsStatisticsInfosObject.l1StHttpsInnerBps = std::stof(value["L1StHttpsInnerBps"].asString());
		if(!value["L1StHttpsOutBps"].isNull())
			httpsStatisticsInfosObject.l1StHttpsOutBps = std::stof(value["L1StHttpsOutBps"].asString());
		if(!value["l1DyHttpsTraf"].isNull())
			httpsStatisticsInfosObject.l1DyHttpsTraf = std::stof(value["l1DyHttpsTraf"].asString());
		if(!value["L1DyHttpsInnerTraf"].isNull())
			httpsStatisticsInfosObject.l1DyHttpsInnerTraf = std::stof(value["L1DyHttpsInnerTraf"].asString());
		if(!value["L1DyHttpsOutTraf"].isNull())
			httpsStatisticsInfosObject.l1DyHttpsOutTraf = std::stof(value["L1DyHttpsOutTraf"].asString());
		if(!value["L1StHttpsTraf"].isNull())
			httpsStatisticsInfosObject.l1StHttpsTraf = std::stof(value["L1StHttpsTraf"].asString());
		if(!value["L1StHttpsInnerTraf"].isNull())
			httpsStatisticsInfosObject.l1StHttpsInnerTraf = std::stof(value["L1StHttpsInnerTraf"].asString());
		if(!value["L1StHttpsOutTraf"].isNull())
			httpsStatisticsInfosObject.l1StHttpsOutTraf = std::stof(value["L1StHttpsOutTraf"].asString());
		if(!value["L1DyHttpsQps"].isNull())
			httpsStatisticsInfosObject.l1DyHttpsQps = std::stof(value["L1DyHttpsQps"].asString());
		if(!value["L1DyHttpsInnerQps"].isNull())
			httpsStatisticsInfosObject.l1DyHttpsInnerQps = std::stof(value["L1DyHttpsInnerQps"].asString());
		if(!value["L1DyHttpsOutQps"].isNull())
			httpsStatisticsInfosObject.l1DyHttpsOutQps = std::stof(value["L1DyHttpsOutQps"].asString());
		if(!value["L1StHttpsQps"].isNull())
			httpsStatisticsInfosObject.l1StHttpsQps = std::stof(value["L1StHttpsQps"].asString());
		if(!value["L1StHttpsInnerQps"].isNull())
			httpsStatisticsInfosObject.l1StHttpsInnerQps = std::stof(value["L1StHttpsInnerQps"].asString());
		if(!value["L1StHttpsOutQps"].isNull())
			httpsStatisticsInfosObject.l1StHttpsOutQps = std::stof(value["L1StHttpsOutQps"].asString());
		if(!value["L1DyHttpsAcc"].isNull())
			httpsStatisticsInfosObject.l1DyHttpsAcc = std::stof(value["L1DyHttpsAcc"].asString());
		if(!value["L1DyHttpsInnerAcc"].isNull())
			httpsStatisticsInfosObject.l1DyHttpsInnerAcc = std::stof(value["L1DyHttpsInnerAcc"].asString());
		if(!value["L1DyHttpsOutAcc"].isNull())
			httpsStatisticsInfosObject.l1DyHttpsOutAcc = std::stof(value["L1DyHttpsOutAcc"].asString());
		if(!value["L1StHttpsAcc"].isNull())
			httpsStatisticsInfosObject.l1StHttpsAcc = std::stof(value["L1StHttpsAcc"].asString());
		if(!value["L1StHttpsInnerAcc"].isNull())
			httpsStatisticsInfosObject.l1StHttpsInnerAcc = std::stof(value["L1StHttpsInnerAcc"].asString());
		if(!value["L1StHttpsOutAcc"].isNull())
			httpsStatisticsInfosObject.l1StHttpsOutAcc = std::stof(value["L1StHttpsOutAcc"].asString());
		httpsStatisticsInfos_.push_back(httpsStatisticsInfosObject);
	}
	if(!value["DomainNames"].isNull())
		domainNames_ = value["DomainNames"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();

}

std::string DescribeDomainHttpsDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::string DescribeDomainHttpsDataResult::getDomainNames()const
{
	return domainNames_;
}

std::vector<DescribeDomainHttpsDataResult::HttpsStatisticsInfo> DescribeDomainHttpsDataResult::getHttpsStatisticsInfos()const
{
	return httpsStatisticsInfos_;
}

