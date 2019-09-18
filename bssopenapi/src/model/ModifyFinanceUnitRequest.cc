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

#include <alibabacloud/bssopenapi/model/ModifyFinanceUnitRequest.h>

using AlibabaCloud::BssOpenApi::Model::ModifyFinanceUnitRequest;

ModifyFinanceUnitRequest::ModifyFinanceUnitRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "ModifyFinanceUnit")
{}

ModifyFinanceUnitRequest::~ModifyFinanceUnitRequest()
{}

std::vector<ModifyFinanceUnitRequest::UnitEntityList> ModifyFinanceUnitRequest::getUnitEntityList()const
{
	return unitEntityList_;
}

void ModifyFinanceUnitRequest::setUnitEntityList(const std::vector<UnitEntityList>& unitEntityList)
{
	unitEntityList_ = unitEntityList;
	int i = 0;
	for(int i = 0; i!= unitEntityList.size(); i++)	{
		auto obj = unitEntityList.at(i);
		std::string str ="UnitEntityList."+ std::to_string(i);
		setCoreParameter(str + ".UnitName", obj.unitName);
		setCoreParameter(str + ".UnitId", std::to_string(obj.unitId));
		setCoreParameter(str + ".OwnerUid", std::to_string(obj.ownerUid));
	}
}

