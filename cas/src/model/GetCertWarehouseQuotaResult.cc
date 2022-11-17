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

#include <alibabacloud/cas/model/GetCertWarehouseQuotaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

GetCertWarehouseQuotaResult::GetCertWarehouseQuotaResult() :
	ServiceResult()
{}

GetCertWarehouseQuotaResult::GetCertWarehouseQuotaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCertWarehouseQuotaResult::~GetCertWarehouseQuotaResult()
{}

void GetCertWarehouseQuotaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["TotalQuota"].isNull())
		totalQuota_ = std::stol(value["TotalQuota"].asString());
	if(!value["UseCount"].isNull())
		useCount_ = std::stol(value["UseCount"].asString());

}

long GetCertWarehouseQuotaResult::getTotalQuota()const
{
	return totalQuota_;
}

long GetCertWarehouseQuotaResult::getUseCount()const
{
	return useCount_;
}

