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

#ifndef ALIBABACLOUD_OOS_MODEL_GETSECRETPARAMETERSRESULT_H_
#define ALIBABACLOUD_OOS_MODEL_GETSECRETPARAMETERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/oos/OosExport.h>

namespace AlibabaCloud
{
	namespace Oos
	{
		namespace Model
		{
			class ALIBABACLOUD_OOS_EXPORT GetSecretParametersResult : public ServiceResult
			{
			public:
				struct _Parameter
				{
					std::string description;
					std::string createdBy;
					std::string resourceGroupId;
					std::string updatedDate;
					std::string keyId;
					std::string name;
					std::string updatedBy;
					std::string type;
					std::string constraints;
					int parameterVersion;
					std::string value;
					std::string createdDate;
					std::string id;
					std::string tags;
					std::string shareType;
				};


				GetSecretParametersResult();
				explicit GetSecretParametersResult(const std::string &payload);
				~GetSecretParametersResult();
				std::vector<_Parameter> getParameters()const;
				std::vector<std::string> getInvalidParameters()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<_Parameter> parameters_;
				std::vector<std::string> invalidParameters_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OOS_MODEL_GETSECRETPARAMETERSRESULT_H_