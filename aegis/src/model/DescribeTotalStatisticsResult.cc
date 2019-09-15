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

#include <alibabacloud/aegis/model/DescribeTotalStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeTotalStatisticsResult::DescribeTotalStatisticsResult() :
	ServiceResult()
{}

DescribeTotalStatisticsResult::DescribeTotalStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTotalStatisticsResult::~DescribeTotalStatisticsResult()
{}

void DescribeTotalStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["VulAsapSum"].isNull())
		vulAsapSum_ = std::stoi(value["VulAsapSum"].asString());
	if(!value["VulNntfSum"].isNull())
		vulNntfSum_ = std::stoi(value["VulNntfSum"].asString());
	if(!value["HealthTotal"].isNull())
		healthTotal_ = std::stoi(value["HealthTotal"].asString());
	if(!value["SuspiciousmediumTotal"].isNull())
		suspiciousmediumTotal_ = std::stoi(value["SuspiciousmediumTotal"].asString());
	if(!value["Health"].isNull())
		health_ = std::stoi(value["Health"].asString());
	if(!value["HealthdealedTotal"].isNull())
		healthdealedTotal_ = std::stoi(value["HealthdealedTotal"].asString());
	if(!value["Trojan"].isNull())
		trojan_ = std::stoi(value["Trojan"].asString());
	if(!value["VulLaterSum"].isNull())
		vulLaterSum_ = std::stoi(value["VulLaterSum"].asString());
	if(!value["Suspicious"].isNull())
		suspicious_ = std::stoi(value["Suspicious"].asString());
	if(!value["Vul"].isNull())
		vul_ = std::stoi(value["Vul"].asString());
	if(!value["HealthhighTotal"].isNull())
		healthhighTotal_ = std::stoi(value["HealthhighTotal"].asString());
	if(!value["HealthlowTotal"].isNull())
		healthlowTotal_ = std::stoi(value["HealthlowTotal"].asString());
	if(!value["HealthseriousTotal"].isNull())
		healthseriousTotal_ = std::stoi(value["HealthseriousTotal"].asString());
	if(!value["VulDealedTotal"].isNull())
		vulDealedTotal_ = std::stoi(value["VulDealedTotal"].asString());
	if(!value["Patch"].isNull())
		patch_ = std::stoi(value["Patch"].asString());
	if(!value["SuspicioushighTotal"].isNull())
		suspicioushighTotal_ = std::stoi(value["SuspicioushighTotal"].asString());
	if(!value["SuspiciouslowTotal"].isNull())
		suspiciouslowTotal_ = std::stoi(value["SuspiciouslowTotal"].asString());
	if(!value["SuspiciousTotal"].isNull())
		suspiciousTotal_ = std::stoi(value["SuspiciousTotal"].asString());
	if(!value["VulTotal"].isNull())
		vulTotal_ = std::stoi(value["VulTotal"].asString());
	if(!value["SuspiciousseriousTotal"].isNull())
		suspiciousseriousTotal_ = std::stoi(value["SuspiciousseriousTotal"].asString());
	if(!value["HealthmediumTotal"].isNull())
		healthmediumTotal_ = std::stoi(value["HealthmediumTotal"].asString());
	if(!value["Online"].isNull())
		online_ = value["Online"].asString() == "true";
	if(!value["SuspiciousdealedTotal"].isNull())
		suspiciousdealedTotal_ = std::stoi(value["SuspiciousdealedTotal"].asString());
	if(!value["Account"].isNull())
		account_ = std::stoi(value["Account"].asString());
	if(!value["Newsuspicious"].isNull())
		newsuspicious_ = std::stoi(value["Newsuspicious"].asString());

}

int DescribeTotalStatisticsResult::getSuspiciousTotal()const
{
	return suspiciousTotal_;
}

int DescribeTotalStatisticsResult::getAccount()const
{
	return account_;
}

int DescribeTotalStatisticsResult::getVulDealedTotal()const
{
	return vulDealedTotal_;
}

int DescribeTotalStatisticsResult::getSuspicioushighTotal()const
{
	return suspicioushighTotal_;
}

int DescribeTotalStatisticsResult::getSuspiciousseriousTotal()const
{
	return suspiciousseriousTotal_;
}

int DescribeTotalStatisticsResult::getVulAsapSum()const
{
	return vulAsapSum_;
}

int DescribeTotalStatisticsResult::getVulNntfSum()const
{
	return vulNntfSum_;
}

int DescribeTotalStatisticsResult::getNewsuspicious()const
{
	return newsuspicious_;
}

int DescribeTotalStatisticsResult::getHealthhighTotal()const
{
	return healthhighTotal_;
}

int DescribeTotalStatisticsResult::getHealthmediumTotal()const
{
	return healthmediumTotal_;
}

int DescribeTotalStatisticsResult::getVulLaterSum()const
{
	return vulLaterSum_;
}

int DescribeTotalStatisticsResult::getSuspiciousmediumTotal()const
{
	return suspiciousmediumTotal_;
}

int DescribeTotalStatisticsResult::getHealthlowTotal()const
{
	return healthlowTotal_;
}

int DescribeTotalStatisticsResult::getHealth()const
{
	return health_;
}

int DescribeTotalStatisticsResult::getHealthdealedTotal()const
{
	return healthdealedTotal_;
}

int DescribeTotalStatisticsResult::getHealthseriousTotal()const
{
	return healthseriousTotal_;
}

int DescribeTotalStatisticsResult::getVulTotal()const
{
	return vulTotal_;
}

int DescribeTotalStatisticsResult::getVul()const
{
	return vul_;
}

int DescribeTotalStatisticsResult::getSuspiciouslowTotal()const
{
	return suspiciouslowTotal_;
}

int DescribeTotalStatisticsResult::getSuspicious()const
{
	return suspicious_;
}

int DescribeTotalStatisticsResult::getTrojan()const
{
	return trojan_;
}

bool DescribeTotalStatisticsResult::getOnline()const
{
	return online_;
}

int DescribeTotalStatisticsResult::getPatch()const
{
	return patch_;
}

int DescribeTotalStatisticsResult::getSuspiciousdealedTotal()const
{
	return suspiciousdealedTotal_;
}

int DescribeTotalStatisticsResult::getHealthTotal()const
{
	return healthTotal_;
}

