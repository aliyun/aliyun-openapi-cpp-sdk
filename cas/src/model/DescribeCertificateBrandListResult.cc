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

#include <alibabacloud/cas/model/DescribeCertificateBrandListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

DescribeCertificateBrandListResult::DescribeCertificateBrandListResult() :
	ServiceResult()
{}

DescribeCertificateBrandListResult::DescribeCertificateBrandListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCertificateBrandListResult::~DescribeCertificateBrandListResult()
{}

void DescribeCertificateBrandListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allBrandList = value["BrandList"]["Brand"];
	for (auto value : allBrandList)
	{
		Brand brandListObject;
		if(!value["Id"].isNull())
			brandListObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			brandListObject.name = value["Name"].asString();
		brandList_.push_back(brandListObject);
	}

}

std::vector<DescribeCertificateBrandListResult::Brand> DescribeCertificateBrandListResult::getBrandList()const
{
	return brandList_;
}

