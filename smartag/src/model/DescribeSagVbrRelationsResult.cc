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

#include <alibabacloud/smartag/model/DescribeSagVbrRelationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSagVbrRelationsResult::DescribeSagVbrRelationsResult() :
	ServiceResult()
{}

DescribeSagVbrRelationsResult::DescribeSagVbrRelationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSagVbrRelationsResult::~DescribeSagVbrRelationsResult()
{}

void DescribeSagVbrRelationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSagVbrRelationsNode = value["SagVbrRelations"]["SagVbrRelation"];
	for (auto valueSagVbrRelationsSagVbrRelation : allSagVbrRelationsNode)
	{
		SagVbrRelation sagVbrRelationsObject;
		if(!valueSagVbrRelationsSagVbrRelation["VbrInstanceId"].isNull())
			sagVbrRelationsObject.vbrInstanceId = valueSagVbrRelationsSagVbrRelation["VbrInstanceId"].asString();
		if(!valueSagVbrRelationsSagVbrRelation["SagUid"].isNull())
			sagVbrRelationsObject.sagUid = valueSagVbrRelationsSagVbrRelation["SagUid"].asString();
		if(!valueSagVbrRelationsSagVbrRelation["SagInstanceId"].isNull())
			sagVbrRelationsObject.sagInstanceId = valueSagVbrRelationsSagVbrRelation["SagInstanceId"].asString();
		sagVbrRelations_.push_back(sagVbrRelationsObject);
	}

}

std::vector<DescribeSagVbrRelationsResult::SagVbrRelation> DescribeSagVbrRelationsResult::getSagVbrRelations()const
{
	return sagVbrRelations_;
}

