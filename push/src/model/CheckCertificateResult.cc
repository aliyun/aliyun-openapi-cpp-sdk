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

#include <alibabacloud/push/model/CheckCertificateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Push;
using namespace AlibabaCloud::Push::Model;

CheckCertificateResult::CheckCertificateResult() :
	ServiceResult()
{}

CheckCertificateResult::CheckCertificateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CheckCertificateResult::~CheckCertificateResult()
{}

void CheckCertificateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto productionCertInfoNode = value["ProductionCertInfo"];
	if(!productionCertInfoNode["Status"].isNull())
		productionCertInfo_.status = productionCertInfoNode["Status"].asString();
	if(!productionCertInfoNode["ExipreTime"].isNull())
		productionCertInfo_.exipreTime = std::stol(productionCertInfoNode["ExipreTime"].asString());
	auto developmentCertInfoNode = value["DevelopmentCertInfo"];
	if(!developmentCertInfoNode["Status"].isNull())
		developmentCertInfo_.status = developmentCertInfoNode["Status"].asString();
	if(!developmentCertInfoNode["ExipreTime"].isNull())
		developmentCertInfo_.exipreTime = std::stol(developmentCertInfoNode["ExipreTime"].asString());
	if(!value["Android"].isNull())
		android_ = value["Android"].asString() == "true";
	if(!value["IOS"].isNull())
		iOS_ = value["IOS"].asString() == "true";

}

CheckCertificateResult::DevelopmentCertInfo CheckCertificateResult::getDevelopmentCertInfo()const
{
	return developmentCertInfo_;
}

bool CheckCertificateResult::getIOS()const
{
	return iOS_;
}

CheckCertificateResult::ProductionCertInfo CheckCertificateResult::getProductionCertInfo()const
{
	return productionCertInfo_;
}

bool CheckCertificateResult::getAndroid()const
{
	return android_;
}

