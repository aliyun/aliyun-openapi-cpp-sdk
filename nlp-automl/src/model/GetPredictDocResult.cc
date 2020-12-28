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

#include <alibabacloud/nlp-automl/model/GetPredictDocResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nlp_automl;
using namespace AlibabaCloud::Nlp_automl::Model;

GetPredictDocResult::GetPredictDocResult() :
	ServiceResult()
{}

GetPredictDocResult::GetPredictDocResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPredictDocResult::~GetPredictDocResult()
{}

void GetPredictDocResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ResultContent"].isNull())
		resultContent_ = value["ResultContent"].asString();
	if(!value["Status"].isNull())
		status_ = std::stoi(value["Status"].asString());
	if(!value["XLIFFInfo"].isNull())
		xLIFFInfo_ = value["XLIFFInfo"].asString();

}

int GetPredictDocResult::getStatus()const
{
	return status_;
}

std::string GetPredictDocResult::getXLIFFInfo()const
{
	return xLIFFInfo_;
}

std::string GetPredictDocResult::getResultContent()const
{
	return resultContent_;
}

