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
		HttpsStatisticsInfo httpsStatisticsInfoObject;
		httpsStatisticsInfoObject.time = value["Time"].asString();
		httpsStatisticsInfoObject.l1HttpsBps = std::stof(value["L1HttpsBps"].asString());
		httpsStatisticsInfoObject.l1HttpsInnerBps = std::stof(value["L1HttpsInnerBps"].asString());
		httpsStatisticsInfoObject.l1HttpsOutBps = std::stof(value["L1HttpsOutBps"].asString());
		httpsStatisticsInfoObject.l1HttpsQps = std::stol(value["L1HttpsQps"].asString());
		httpsStatisticsInfoObject.l1HttpsInnerQps = std::stol(value["L1HttpsInnerQps"].asString());
		httpsStatisticsInfoObject.l1HttpsOutQps = std::stol(value["L1HttpsOutQps"].asString());
		httpsStatisticsInfoObject.l1HttpsTtraf = std::stol(value["L1HttpsTtraf"].asString());
		httpsStatisticsInfoObject.httpsSrcBps = std::stol(value["HttpsSrcBps"].asString());
		httpsStatisticsInfoObject.httpsSrcTraf = std::stol(value["HttpsSrcTraf"].asString());
		httpsStatisticsInfoObject.l1HttpsInnerTraf = std::stol(value["L1HttpsInnerTraf"].asString());
		httpsStatisticsInfoObject.l1HttpsOutTraf = std::stol(value["L1HttpsOutTraf"].asString());
		httpsStatisticsInfoObject.httpsByteHitRate = std::stof(value["HttpsByteHitRate"].asString());
		httpsStatisticsInfoObject.httpsReqHitRate = std::stof(value["HttpsReqHitRate"].asString());
		httpsStatisticsInfoObject.l1HttpsHitRate = std::stof(value["L1HttpsHitRate"].asString());
		httpsStatisticsInfoObject.l1HttpsInner_acc = std::stof(value["L1HttpsInner_acc"].asString());
		httpsStatisticsInfoObject.l1HttpsOut_acc = std::stof(value["L1HttpsOut_acc"].asString());
		httpsStatisticsInfoObject.l1HttpsTacc = std::stof(value["L1HttpsTacc"].asString());
		httpsStatisticsInfoObject.l1DyHttpsBps = std::stof(value["L1DyHttpsBps"].asString());
		httpsStatisticsInfoObject.l1DyHttpsInnerBps = std::stof(value["L1DyHttpsInnerBps"].asString());
		httpsStatisticsInfoObject.l1DyHttpsOutBps = std::stof(value["L1DyHttpsOutBps"].asString());
		httpsStatisticsInfoObject.l1StHttpsBps = std::stof(value["L1StHttpsBps"].asString());
		httpsStatisticsInfoObject.l1StHttpsInnerBps = std::stof(value["L1StHttpsInnerBps"].asString());
		httpsStatisticsInfoObject.l1StHttpsOutBps = std::stof(value["L1StHttpsOutBps"].asString());
		httpsStatisticsInfoObject.l1DyHttpsTraf = std::stof(value["l1DyHttpsTraf"].asString());
		httpsStatisticsInfoObject.l1DyHttpsInnerTraf = std::stof(value["L1DyHttpsInnerTraf"].asString());
		httpsStatisticsInfoObject.l1DyHttpsOutTraf = std::stof(value["L1DyHttpsOutTraf"].asString());
		httpsStatisticsInfoObject.l1StHttpsTraf = std::stof(value["L1StHttpsTraf"].asString());
		httpsStatisticsInfoObject.l1StHttpsInnerTraf = std::stof(value["L1StHttpsInnerTraf"].asString());
		httpsStatisticsInfoObject.l1StHttpsOutTraf = std::stof(value["L1StHttpsOutTraf"].asString());
		httpsStatisticsInfoObject.l1DyHttpsQps = std::stof(value["L1DyHttpsQps"].asString());
		httpsStatisticsInfoObject.l1DyHttpsInnerQps = std::stof(value["L1DyHttpsInnerQps"].asString());
		httpsStatisticsInfoObject.l1DyHttpsOutQps = std::stof(value["L1DyHttpsOutQps"].asString());
		httpsStatisticsInfoObject.l1StHttpsQps = std::stof(value["L1StHttpsQps"].asString());
		httpsStatisticsInfoObject.l1StHttpsInnerQps = std::stof(value["L1StHttpsInnerQps"].asString());
		httpsStatisticsInfoObject.l1StHttpsOutQps = std::stof(value["L1StHttpsOutQps"].asString());
		httpsStatisticsInfoObject.l1DyHttpsAcc = std::stof(value["L1DyHttpsAcc"].asString());
		httpsStatisticsInfoObject.l1DyHttpsInnerAcc = std::stof(value["L1DyHttpsInnerAcc"].asString());
		httpsStatisticsInfoObject.l1DyHttpsOutAcc = std::stof(value["L1DyHttpsOutAcc"].asString());
		httpsStatisticsInfoObject.l1StHttpsAcc = std::stof(value["L1StHttpsAcc"].asString());
		httpsStatisticsInfoObject.l1StHttpsInnerAcc = std::stof(value["L1StHttpsInnerAcc"].asString());
		httpsStatisticsInfoObject.l1StHttpsOutAcc = std::stof(value["L1StHttpsOutAcc"].asString());
		httpsStatisticsInfos_.push_back(httpsStatisticsInfoObject);
	}
	domainNames_ = value["DomainNames"].asString();
	dataInterval_ = value["DataInterval"].asString();

}

std::string DescribeDomainHttpsDataResult::getDataInterval()const
{
	return dataInterval_;
}

void DescribeDomainHttpsDataResult::setDataInterval(const std::string& dataInterval)
{
	dataInterval_ = dataInterval;
}

std::string DescribeDomainHttpsDataResult::getDomainNames()const
{
	return domainNames_;
}

void DescribeDomainHttpsDataResult::setDomainNames(const std::string& domainNames)
{
	domainNames_ = domainNames;
}

