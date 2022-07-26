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

#include <alibabacloud/oos/model/ListSecretParametersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

ListSecretParametersResult::ListSecretParametersResult() :
	ServiceResult()
{}

ListSecretParametersResult::ListSecretParametersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSecretParametersResult::~ListSecretParametersResult()
{}

void ListSecretParametersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allParametersNode = value["Parameters"]["Parameter"];
	for (auto valueParametersParameter : allParametersNode)
	{
		_Parameter parametersObject;
		if(!valueParametersParameter["Type"].isNull())
			parametersObject.type = valueParametersParameter["Type"].asString();
		if(!valueParametersParameter["UpdatedDate"].isNull())
			parametersObject.updatedDate = valueParametersParameter["UpdatedDate"].asString();
		if(!valueParametersParameter["UpdatedBy"].isNull())
			parametersObject.updatedBy = valueParametersParameter["UpdatedBy"].asString();
		if(!valueParametersParameter["KeyId"].isNull())
			parametersObject.keyId = valueParametersParameter["KeyId"].asString();
		if(!valueParametersParameter["Tags"].isNull())
			parametersObject.tags = valueParametersParameter["Tags"].asString();
		if(!valueParametersParameter["Description"].isNull())
			parametersObject.description = valueParametersParameter["Description"].asString();
		if(!valueParametersParameter["ResourceGroupId"].isNull())
			parametersObject.resourceGroupId = valueParametersParameter["ResourceGroupId"].asString();
		if(!valueParametersParameter["CreatedBy"].isNull())
			parametersObject.createdBy = valueParametersParameter["CreatedBy"].asString();
		if(!valueParametersParameter["CreatedDate"].isNull())
			parametersObject.createdDate = valueParametersParameter["CreatedDate"].asString();
		if(!valueParametersParameter["ParameterVersion"].isNull())
			parametersObject.parameterVersion = valueParametersParameter["ParameterVersion"].asString();
		if(!valueParametersParameter["Name"].isNull())
			parametersObject.name = valueParametersParameter["Name"].asString();
		if(!valueParametersParameter["Id"].isNull())
			parametersObject.id = valueParametersParameter["Id"].asString();
		if(!valueParametersParameter["ShareType"].isNull())
			parametersObject.shareType = valueParametersParameter["ShareType"].asString();
		parameters_.push_back(parametersObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::vector<ListSecretParametersResult::_Parameter> ListSecretParametersResult::getParameters()const
{
	return parameters_;
}

std::string ListSecretParametersResult::getNextToken()const
{
	return nextToken_;
}

int ListSecretParametersResult::getMaxResults()const
{
	return maxResults_;
}

