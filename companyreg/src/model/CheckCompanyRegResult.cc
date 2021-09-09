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

#include <alibabacloud/companyreg/model/CheckCompanyRegResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

CheckCompanyRegResult::CheckCompanyRegResult() :
	ServiceResult()
{}

CheckCompanyRegResult::CheckCompanyRegResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CheckCompanyRegResult::~CheckCompanyRegResult()
{}

void CheckCompanyRegResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSimilarCompaniesNode = value["SimilarCompanies"]["Company"];
	for (auto valueSimilarCompaniesCompany : allSimilarCompaniesNode)
	{
		Company similarCompaniesObject;
		if(!valueSimilarCompaniesCompany["CompanyName"].isNull())
			similarCompaniesObject.companyName = valueSimilarCompaniesCompany["CompanyName"].asString();
		if(!valueSimilarCompaniesCompany["Level"].isNull())
			similarCompaniesObject.level = valueSimilarCompaniesCompany["Level"].asString();
		similarCompanies_.push_back(similarCompaniesObject);
	}
	if(!value["MatchCity"].isNull())
		matchCity_ = value["MatchCity"].asString();
	if(!value["MatchBrand"].isNull())
		matchBrand_ = value["MatchBrand"].asString();
	if(!value["MatchSensitive"].isNull())
		matchSensitive_ = value["MatchSensitive"].asString();
	if(!value["Level"].isNull())
		level_ = value["Level"].asString();

}

std::string CheckCompanyRegResult::getMatchSensitive()const
{
	return matchSensitive_;
}

std::string CheckCompanyRegResult::getMatchCity()const
{
	return matchCity_;
}

std::string CheckCompanyRegResult::getMatchBrand()const
{
	return matchBrand_;
}

std::string CheckCompanyRegResult::getLevel()const
{
	return level_;
}

std::vector<CheckCompanyRegResult::Company> CheckCompanyRegResult::getSimilarCompanies()const
{
	return similarCompanies_;
}

