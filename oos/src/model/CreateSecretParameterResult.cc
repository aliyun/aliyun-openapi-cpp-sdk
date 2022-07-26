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

#include <alibabacloud/oos/model/CreateSecretParameterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

CreateSecretParameterResult::CreateSecretParameterResult() :
	ServiceResult()
{}

CreateSecretParameterResult::CreateSecretParameterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateSecretParameterResult::~CreateSecretParameterResult()
{}

void CreateSecretParameterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto _parameterNode = value["Parameter"];
	if(!_parameterNode["Type"].isNull())
		_parameter_.type = _parameterNode["Type"].asString();
	if(!_parameterNode["UpdatedDate"].isNull())
		_parameter_.updatedDate = _parameterNode["UpdatedDate"].asString();
	if(!_parameterNode["UpdatedBy"].isNull())
		_parameter_.updatedBy = _parameterNode["UpdatedBy"].asString();
	if(!_parameterNode["KeyId"].isNull())
		_parameter_.keyId = _parameterNode["KeyId"].asString();
	if(!_parameterNode["Tags"].isNull())
		_parameter_.tags = _parameterNode["Tags"].asString();
	if(!_parameterNode["Description"].isNull())
		_parameter_.description = _parameterNode["Description"].asString();
	if(!_parameterNode["Constraints"].isNull())
		_parameter_.constraints = _parameterNode["Constraints"].asString();
	if(!_parameterNode["ResourceGroupId"].isNull())
		_parameter_.resourceGroupId = _parameterNode["ResourceGroupId"].asString();
	if(!_parameterNode["CreatedBy"].isNull())
		_parameter_.createdBy = _parameterNode["CreatedBy"].asString();
	if(!_parameterNode["CreatedDate"].isNull())
		_parameter_.createdDate = _parameterNode["CreatedDate"].asString();
	if(!_parameterNode["ParameterVersion"].isNull())
		_parameter_.parameterVersion = std::stoi(_parameterNode["ParameterVersion"].asString());
	if(!_parameterNode["Name"].isNull())
		_parameter_.name = _parameterNode["Name"].asString();
	if(!_parameterNode["Id"].isNull())
		_parameter_.id = _parameterNode["Id"].asString();
	if(!_parameterNode["ShareType"].isNull())
		_parameter_.shareType = _parameterNode["ShareType"].asString();

}

CreateSecretParameterResult::_Parameter CreateSecretParameterResult::get_Parameter()const
{
	return _parameter_;
}

